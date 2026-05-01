/*
 * XREFs of ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x1802618E4
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?OnApplicationViewChanged@CopilotHotkeyManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802720C0 (-OnApplicationViewChanged@CopilotHotkeyManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopilotHotkeyManager::ClearFastpathRegistrationProperties(CopilotHotkeyManager *this)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 23, &v2);
  std::wstring::assign((char *)this + 384, 0LL, 0LL);
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 94) = 0;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
