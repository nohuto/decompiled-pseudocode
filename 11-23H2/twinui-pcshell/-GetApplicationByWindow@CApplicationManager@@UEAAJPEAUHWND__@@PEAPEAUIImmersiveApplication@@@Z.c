/*
 * XREFs of ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1800521D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801646E0 (-GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationByWindow(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplication **a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned int ApplicationByWindowInternal; // edi

  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  ApplicationByWindowInternal = CApplicationManager::GetApplicationByWindowInternal(
                                  (CApplicationManager *)((char *)this + 72),
                                  a2,
                                  &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                  (void **)a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return ApplicationByWindowInternal;
}
