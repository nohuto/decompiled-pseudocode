/*
 * XREFs of ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1802E78F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18006DFA0 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800E8B48 (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1802E7990 (-SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v7,
    (struct IIAMServiceProvider *)((a1 + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 152) >> 64)));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(v5) = CApplicationManager::SetApplicationWindowSafe(v5 + 96, a2, a3);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v7);
  return (unsigned int)v5;
}
