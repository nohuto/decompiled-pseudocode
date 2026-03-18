/*
 * XREFs of NtSetShellCursorState @ 0x1C0142BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     IsShellProcess @ 0x1C00AD8FC (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DC2B4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     CheckCapability @ 0x1C01E7C20 (CheckCapability.c)
 *     SetContentOrientation @ 0x1C01E8DB8 (SetContentOrientation.c)
 */

__int64 __fastcall NtSetShellCursorState(__int64 a1, _DWORD *Src, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  _DWORD *v5; // rsi
  unsigned int v6; // r13d
  struct tagRECT *QuotaZInit; // r14
  int v8; // eax
  __int64 v9; // rcx
  NTSTATUS v10; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edi
  ULONG v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagTHREADINFO *v20; // rax
  CCursorClip *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // r8
  __int64 v30; // r9

  v4 = (unsigned int)a3;
  v5 = Src;
  v6 = a1;
  QuotaZInit = 0LL;
  if ( !gbOSTestSigningEnabled )
  {
    v8 = CheckCapability(L"shellExperienceComposer");
    if ( v8 < 0 )
    {
      v10 = v8;
LABEL_43:
      v14 = 0;
      v15 = RtlNtStatusToDosError(v10);
      goto LABEL_44;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    Src = (_DWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      a1 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      Src = (_DWORD *)(a1 & CurrentProcessWin32Process);
    }
    if ( (Src[204] & 0x30) == 0 )
    {
      v12 = PsGetCurrentProcessWin32Process(a1);
      v13 = v12;
      if ( v12 )
        v13 = -(__int64)(*(_QWORD *)v12 != 0LL) & v12;
      if ( !(unsigned int)IsShellProcess(v13) )
      {
        v14 = 0;
        v15 = 5;
LABEL_44:
        UserSetLastError(v15);
        goto LABEL_45;
      }
    }
  }
  if ( v6 - 1 > 3 )
  {
LABEL_12:
    v14 = 0;
    v15 = 87;
    goto LABEL_44;
  }
  if ( (_DWORD)v4 )
  {
    v16 = 16 * v4;
    if ( (unsigned __int64)(16 * v4) > 0xFFFFFFFF )
      goto LABEL_12;
    if ( (unsigned int)v16 >= 0x2710000
      || (QuotaZInit = (struct tagRECT *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                           (NSInstrumentation::CLeakTrackingAllocator *)a1,
                                           (unsigned __int64)Src,
                                           (unsigned int)v16,
                                           0x63736355u)) == 0LL )
    {
      v14 = 0;
      v15 = 8;
      goto LABEL_44;
    }
    if ( v16 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v18, v17, v19) == 0 ? 3 : 0) & (unsigned __int8)v5) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v5[(unsigned __int64)v16 / 4] > MmUserProbeAddress || &v5[(unsigned __int64)v16 / 4] < v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(QuotaZInit, v5, (unsigned int)v16);
  }
  else if ( v5 )
  {
    goto LABEL_12;
  }
  v20 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, (__int64)Src, a3, a4);
  gptiCurrent = v20;
  v14 = 1;
  if ( v20 )
  {
    *((_DWORD *)v20 + 387) = 1;
    v22 = PsGetCurrentProcessWin32Process(v21);
    if ( v22 )
    {
      v21 = (CCursorClip *)-*(_QWORD *)v22;
      v23 = -(__int64)(*(_QWORD *)v22 != 0LL) & v22;
      if ( v23 )
      {
        if ( (*(_DWORD *)(v23 + 12) & 0x8000) != 0 )
        {
          v21 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v24 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v24 = 0;
          }
          if ( v24 )
          {
            while ( 1 )
            {
              v25 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v25[2] = 0LL;
              if ( !*(_DWORD *)(*v25 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v25);
            }
          }
        }
      }
    }
  }
  v28 = CCursorClip::SetShellClip(v21, QuotaZInit, v4);
  if ( v28 >= 0 )
    SetContentOrientation(v6);
  UserSessionSwitchLeaveCrit(v27, v26, v29, v30);
  if ( v28 < 0 )
  {
    v10 = v28;
    goto LABEL_43;
  }
LABEL_45:
  if ( !v14 && QuotaZInit )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
  return v14;
}
