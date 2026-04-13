/*
 * XREFs of ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18004D360
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x18006FDD0 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::ActivateInstance(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory *this,
        struct IInspectable **a2)
{
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  try
  {
    ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance();
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IInspectable **))v8)(
           v8,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        76LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\SubscriptionManager.h",
        (const char *)(unsigned int)v3,
        v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\SubscriptionManager.h",
                           v4);
  }
  return result;
}
