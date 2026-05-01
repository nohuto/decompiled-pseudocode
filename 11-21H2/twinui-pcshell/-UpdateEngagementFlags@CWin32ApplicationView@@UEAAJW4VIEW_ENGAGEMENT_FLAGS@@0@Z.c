/*
 * XREFs of ?UpdateEngagementFlags@CWin32ApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180313D50
 * Callers:
 *     <none>
 * Callees:
 *     ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x18002A150 (-v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::UpdateEngagementFlags(__int64 a1, int a2, int a3)
{
  int v6; // edx
  int ProcessId; // ebx
  unsigned int v9; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, (RTL_SRWLOCK *)(a1 + 48));
  v6 = a3 & a2 | ~a2 & *(_DWORD *)(a1 + 268);
  if ( *(_DWORD *)(a1 + 268) == v6 )
    goto LABEL_4;
  *(_DWORD *)(a1 + 268) = v6;
  v9 = 0;
  ProcessId = CWin32ApplicationView::v_GetProcessId((CWin32ApplicationView *)a1, &v9);
  if ( ProcessId >= 0 )
  {
    v13 = 0;
    v12 = v9;
    v11 = *(int *)(a1 + 268);
    SetCITInfo(5LL, &v11);
LABEL_4:
    ProcessId = 0;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  return (unsigned int)ProcessId;
}
