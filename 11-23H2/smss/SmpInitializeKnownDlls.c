/*
 * XREFs of SmpInitializeKnownDlls @ 0x140008C00
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 *     SmpInitializeKnownDllsWorker @ 0x140011BE0 (SmpInitializeKnownDllsWorker.c)
 * Callees:
 *     SmpOpenKnownDllsHandles @ 0x140001230 (SmpOpenKnownDllsHandles.c)
 *     SmpEventWriteULONG @ 0x140005C30 (SmpEventWriteULONG.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008F50 (SmpInitializeKnownDllsInternal.c)
 *     SmpWow64IsWowGuestMachineSupported @ 0x14000989C (SmpWow64IsWowGuestMachineSupported.c)
 *     SmpFreeKnownDllsRegistryData @ 0x1400119F0 (SmpFreeKnownDllsRegistryData.c)
 */

__int64 __fastcall SmpInitializeKnownDlls(unsigned int a1)
{
  HANDLE v1; // rsi
  HANDLE v2; // r14
  __int64 v3; // r15
  int v4; // eax
  int v5; // edi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int64 v8; // rcx
  BOOL v9; // r12d
  signed __int32 v10; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // eax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v15; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING v16; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v17; // [rsp+58h] [rbp-28h] BYREF
  struct _UNICODE_STRING v18; // [rsp+68h] [rbp-18h] BYREF
  HANDLE v19; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE v20; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE v21; // [rsp+D8h] [rbp+58h] BYREF

  Handle = 0LL;
  v16.Buffer = L"\\KnownDlls32";
  v1 = 0LL;
  v21 = 0LL;
  v15.Buffer = L"\\SysWOW64";
  v2 = 0LL;
  v3 = a1;
  v18.Buffer = L"\\KnownDllsArm32";
  v20 = 0LL;
  v17.Buffer = L"\\SysArm32";
  *(_DWORD *)&v16.Length = 1703960;
  *(_DWORD *)&v15.Length = 1310738;
  v19 = 0LL;
  *(_DWORD *)&v18.Length = 2097182;
  *(_DWORD *)&v17.Length = 1310738;
  if ( (unsigned __int8)SmpWow64IsWowGuestMachineSupported(332LL) )
  {
    v4 = SmpOpenKnownDllsHandles(&v16, &v15, 0, &v20, &Handle);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v6 + 2] = 4330;
      SmpGlobalLog[2 * v6 + 3] = v4;
      *(_QWORD *)&SmpGlobalLog[2 * v6 + 4] = v3;
      goto LABEL_31;
    }
    v1 = v20;
  }
  if ( (unsigned __int8)SmpWow64IsWowGuestMachineSupported(452LL) )
  {
    v5 = SmpOpenKnownDllsHandles(&v18, &v17, 0, &v19, &v21);
    if ( v5 < 0 )
    {
      v19 = 0LL;
      v21 = 0LL;
      v7 = _InterlockedIncrement(SmpGlobalLog) % 64;
      v8 = 2LL * v7;
      SmpGlobalLog[4 * v7 + 2] = 4351;
      goto LABEL_8;
    }
    v2 = v19;
  }
  v9 = v1 || v2;
  v5 = SmpInitializeKnownDllsInternal((_DWORD)SmpKnownDllsObjectDirectory, (_DWORD)SmpKnownDllsFileDirectory, 0, v9, v3);
  if ( v5 >= 0 )
  {
    if ( v2 && (v5 = SmpInitializeKnownDllsInternal((_DWORD)v2, (_DWORD)v21, 1, v9, v3), v5 < 0) )
    {
      v11 = _InterlockedIncrement(SmpGlobalLog) % 64;
      v8 = 2LL * v11;
      SmpGlobalLog[4 * v11 + 2] = 4454;
    }
    else
    {
      if ( !v1 || (v5 = SmpInitializeKnownDllsInternal((_DWORD)v1, (_DWORD)Handle, 1, v9, v3), v5 >= 0) )
      {
        v5 = 0;
        goto LABEL_23;
      }
      v12 = _InterlockedIncrement(SmpGlobalLog) % 64;
      v8 = 2LL * v12;
      SmpGlobalLog[4 * v12 + 2] = 4474;
    }
  }
  else
  {
    v10 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v8 = 2LL * v10;
    SmpGlobalLog[4 * v10 + 2] = 4401;
  }
LABEL_8:
  v1 = v20;
  v2 = v19;
  SmpGlobalLog[2 * v8 + 3] = v5;
  *(_QWORD *)&SmpGlobalLog[2 * v8 + 4] = v3;
LABEL_23:
  if ( Handle )
    NtClose(Handle);
  if ( v1 )
    NtClose(v1);
  if ( v21 )
    NtClose(v21);
  if ( v2 )
    NtClose(v2);
LABEL_31:
  if ( (v3 & 3) != 1 )
  {
    if ( SmpKnownDllsFileDirectory )
      NtClose(SmpKnownDllsFileDirectory);
    if ( SmpKnownDllsObjectDirectory )
      NtClose(SmpKnownDllsObjectDirectory);
    SmpFreeKnownDllsRegistryData();
    SmpEventWriteULONG(&SmssEvt_InitializeKnownDlls_Stop, v5);
  }
  return (unsigned int)v5;
}
