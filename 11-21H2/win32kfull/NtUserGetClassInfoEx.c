/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C007EFD0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterDefaultClass @ 0x1C0061D64 (RegisterDefaultClass.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetClassInfoEx @ 0x1C007F338 (_GetClassInfoEx.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C0104B1C (RegisterIconTitleClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, ULONG64 a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r12
  ULONG64 v8; // rcx
  int v9; // edi
  wchar_t *v10; // rsi
  _BYTE **v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  _BYTE *v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  unsigned __int16 ClassInfo; // ax
  __int64 v20; // rcx
  int v21; // edi
  int v23; // [rsp+30h] [rbp-E8h]
  int v24; // [rsp+34h] [rbp-E4h]
  wchar_t *Str1_8; // [rsp+50h] [rbp-C8h]
  __int64 v26; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-B0h]
  __int128 v28; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-98h]
  _OWORD v30[6]; // [rsp+90h] [rbp-88h] BYREF

  v5 = a4;
  v26 = 0LL;
  memset(v30, 0, 0x50uLL);
  v28 = 0LL;
  v29 = 0LL;
  v23 = 0;
  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
LABEL_35:
    v21 = 0;
    UserSetLastError(87LL, v18);
    goto LABEL_31;
  }
  v8 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v9 = *(_DWORD *)a2;
  v24 = *(_DWORD *)a2;
  v10 = *(wchar_t **)(a2 + 8);
  Str1_8 = v10;
  if ( ((unsigned __int64)v10 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v10 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (ULONG64)v10 + (unsigned __int16)v9 + 2;
    v11 = (_BYTE **)MmUserProbeAddress;
    if ( v8 < MmUserProbeAddress && (unsigned __int16)v9 <= HIWORD(v24) )
    {
      if ( (v9 & 1) != 0 )
        goto LABEL_20;
      if ( v8 > (unsigned __int64)v10 )
        goto LABEL_10;
    }
    if ( (v9 & 1) == 0 )
    {
LABEL_21:
      **v11 = 0;
      goto LABEL_10;
    }
LABEL_20:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v11 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_21;
  }
LABEL_10:
  if ( ((unsigned __int64)v10 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = (unsigned __int16)v9;
    v13 = Win32AllocPoolWithQuotaZInit((unsigned __int16)v9 + 2LL, 2020897621LL);
    v14 = (void *)v13;
    Str1_8 = (wchar_t *)v13;
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    v23 = 1;
    PushW32ThreadLock(v13, &v28, Win32FreePool);
    memmove(v14, v10, (unsigned int)v12);
    *((_WORD *)v14 + (v12 >> 1)) = 0;
    v5 = a4;
  }
  if ( PsGetCurrentProcessWow64Process(v8) )
  {
    v27 = 1LL;
    v15 = 0LL;
  }
  else
  {
    v27 = 4LL;
    v15 = 3LL;
  }
  if ( (v15 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v16 = (_BYTE *)MmUserProbeAddress;
  *v16 = *v16;
  v16[79] = v16[79];
  v17 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = *v17;
  v30[0] = *(_OWORD *)a3;
  v30[1] = *(_OWORD *)(a3 + 16);
  v30[2] = *(_OWORD *)(a3 + 32);
  v30[3] = *(_OWORD *)(a3 + 48);
  v30[4] = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) == 0
    && !(unsigned int)RegisterDefaultClass(Str1_8) )
  {
    goto LABEL_35;
  }
  ClassInfo = GetClassInfoEx(a1, Str1_8, v30, &v26, a5);
  v21 = ClassInfo;
  if ( ClassInfo )
  {
    *(_OWORD *)a3 = v30[0];
    *(_OWORD *)(a3 + 16) = v30[1];
    *(_OWORD *)(a3 + 32) = v30[2];
    *(_OWORD *)(a3 + 48) = v30[3];
    *(_OWORD *)(a3 + 64) = v30[4];
    *v5 = v26;
  }
LABEL_31:
  if ( v23 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v28);
  UserSessionSwitchLeaveCrit(v20);
  return v21;
}
