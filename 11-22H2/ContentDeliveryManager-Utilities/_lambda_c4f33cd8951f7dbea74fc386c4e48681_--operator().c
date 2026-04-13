/*
 * XREFs of _lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator() @ 0x1800678A4
 * Callers:
 *     wistd::__function::__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl(void)_::operator() @ 0x180067930 (wistd--__function--__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_83dc6366a20d9229952004eea2bdcbca___ @ 0x1800660D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_83dc6366a20d9229952004eea2bdcbca___.c)
 *     ?InternalAddRef@?$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180069310 (-InternalAddRef@-$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@W.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax
  const char *v4; // r9
  int v5; // edi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = *a1;
  v1 = v9;
  Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::InternalAddRef(&v9);
  v8 = v1;
  Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::InternalAddRef(&v8);
  result = Windows::Internal::ComTaskPool::QueueTask__lambda_83dc6366a20d9229952004eea2bdcbca___(v2, &v8);
  v5 = result;
  if ( v8 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v8);
  try
  {
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v5,
        v6);
    if ( v1 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x38,
             (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
             v4);
  }
  return result;
}
