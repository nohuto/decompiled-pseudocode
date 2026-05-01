/*
 * XREFs of ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800E46E0
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B188C (-StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B2F60 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ @ 0x1801F04D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::ActivationDeferralComplete(struct _TP_TIMER **this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54322664>::GetImpl'::`2'::impl)
    && !(*(unsigned __int8 (__fastcall **)(struct _TP_TIMER *, struct _TP_TIMER *))(*(_QWORD *)this[12] + 32LL))(
          this[12],
          this[8]) )
  {
    UndockedSearchAppExperienceManager::StartDeferredSuspensionTimer(this);
  }
  UndockedSearchAppExperienceManager::UnboostPriority((UndockedSearchAppExperienceManager *)this);
  v2 = (__int64 *)this[99];
  if ( v2 )
  {
    v3 = *v2;
    *v2 = 0LL;
    v6 = 0LL;
    v5 = v3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
    v4 = this[100];
    this[100] = 0LL;
    this[99] = 0LL;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
}
