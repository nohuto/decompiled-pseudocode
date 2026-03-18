/*
 * XREFs of NtConfigureInputSpace @ 0x1C0140880
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C001901C (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C00193AC (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00B756C (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01E3C3C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1C01E4140 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 */

__int64 __fastcall NtConfigureInputSpace(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  ULONG64 v6; // r15
  int v7; // edi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 *v13; // rsi
  unsigned __int64 v14; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // r12d
  char *QuotaZInit; // rsi
  ULONG v19; // ecx
  ULONG64 v20; // rcx
  __int64 v21; // r15
  CInputConfig *v22; // rcx
  int v23; // r15d
  char *v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // [rsp+38h] [rbp-8F0h] BYREF
  int v32; // [rsp+40h] [rbp-8E8h]
  __int64 v33; // [rsp+48h] [rbp-8E0h]
  int v34; // [rsp+50h] [rbp-8D8h]
  _OWORD v35[12]; // [rsp+60h] [rbp-8C8h] BYREF
  __int64 v36; // [rsp+120h] [rbp-808h]
  _BYTE v37[520]; // [rsp+128h] [rbp-800h] BYREF
  __int64 v38; // [rsp+330h] [rbp-5F8h] BYREF
  int v39; // [rsp+338h] [rbp-5F0h]

  v4 = (unsigned int)a3;
  v6 = a1;
  v7 = 1;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, (__int64)a2, a3, a4);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v12 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v12 = 0;
          }
          if ( v12 )
          {
            while ( 1 )
            {
              v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v13[2] = 0LL;
              if ( !*(_DWORD *)(*v13 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v13);
            }
          }
        }
      }
    }
  }
  v31 = 0LL;
  v32 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v38, (const struct INPUT_SPACE *)&v31, 0);
  v17 = 0;
  QuotaZInit = 0LL;
  if ( (_DWORD)v4 )
  {
    v17 = 200 * v4;
    if ( (unsigned __int64)(200 * v4) > 0xFFFFFFFF )
    {
LABEL_18:
      v19 = 87;
      goto LABEL_19;
    }
    QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v15, v14, v17, 0x63736955u);
    if ( !QuotaZInit )
    {
      v19 = 8;
LABEL_19:
      v7 = 0;
LABEL_20:
      UserSetLastError(v19);
      goto LABEL_39;
    }
  }
  v20 = v6 + 12;
  if ( v6 + 12 < v6 || v20 > MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v33 = *(_QWORD *)v6;
  v34 = *(_DWORD *)(v6 + 8);
  v38 = v33;
  v39 = v34;
  if ( (_DWORD)v4 )
  {
    v21 = 200 * v4;
    if ( 200 * v4 )
    {
      if ( ((unsigned __int8)a2 & (PsGetCurrentProcessWow64Process(v20, v14, v16) == 0 ? 3 : 0)) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v21] > MmUserProbeAddress || &a2[v21] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(QuotaZInit, a2, v17);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v38, (const struct INPUT_SPACE_REGION *)QuotaZInit, v4) )
    goto LABEL_18;
  if ( (_DWORD)v4 )
  {
    v23 = 0;
    do
    {
      v24 = &QuotaZInit[200 * v23];
      v35[0] = *(_OWORD *)v24;
      v35[1] = *((_OWORD *)v24 + 1);
      v35[2] = *((_OWORD *)v24 + 2);
      v35[3] = *((_OWORD *)v24 + 3);
      v35[4] = *((_OWORD *)v24 + 4);
      v35[5] = *((_OWORD *)v24 + 5);
      v35[6] = *((_OWORD *)v24 + 6);
      v35[7] = *((_OWORD *)v24 + 7);
      v35[8] = *((_OWORD *)v24 + 8);
      v35[9] = *((_OWORD *)v24 + 9);
      v35[10] = *((_OWORD *)v24 + 10);
      v35[11] = *((_OWORD *)v24 + 11);
      v36 = *((_QWORD *)v24 + 24);
      memset(v37, 0, 289);
      memset(&v37[296], 0, 0xD8uLL);
      v25 = CInputSpace::AddRegion((CInputSpace *)&v38, (const struct CInputSpaceRegion *)v35, 0LL);
      if ( v25 < 0 )
        goto LABEL_38;
    }
    while ( ++v23 != (_DWORD)v4 );
  }
  v25 = CInputConfig::ConfigureInputSpace(v22, (struct CInputSpace *)&v38);
  if ( v25 < 0 )
  {
LABEL_38:
    v7 = 0;
    v19 = RtlNtStatusToDosError(v25);
    goto LABEL_20;
  }
LABEL_39:
  CInputSpace::FreeRegions((CInputSpace *)&v38);
  if ( QuotaZInit )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return v7;
}
