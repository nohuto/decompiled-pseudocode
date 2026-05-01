/*
 * XREFs of ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E9C8
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180092F30 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801711C8 (-StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::ActivationDeferralComplete(std::_Ref_count_base **this)
{
  std::_Ref_count_base *v2; // rax
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(std::_Ref_count_base *, std::_Ref_count_base *))(*(_QWORD *)this[12] + 32LL))(
          this[12],
          this[8]) )
    UndockedSearchAppExperienceManager::StartDeferredSuspensionTimer(this);
  UndockedSearchAppExperienceManager::UnboostPriority((UndockedSearchAppExperienceManager *)this);
  v2 = this[87];
  if ( v2 )
  {
    v5 = 0LL;
    v3 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
    this[87] = 0LL;
    v4 = this[88];
    this[88] = 0LL;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
}
