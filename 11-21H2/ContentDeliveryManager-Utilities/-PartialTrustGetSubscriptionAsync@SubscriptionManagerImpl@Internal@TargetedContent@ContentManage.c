/*
 * XREFs of ?PartialTrustGetSubscriptionAsync@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@89@@Z @ 0x1800712A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  HRESULT v7; // eax
  int ActivationFactory; // eax
  int v9; // eax
  const char *v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  HSTRING v15; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v16; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0LL;
  v14 = 0LL;
  v7 = WindowsCreateStringReference(L"ContentManagement.TargetedContent.TargetedContentSubscription", 0x3Du, &v16, &v15);
  if ( v7 < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  try
  {
    ActivationFactory = RoGetActivationFactory(v15, &GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584, &v14);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v13);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v14 + 48LL))(v14, a2, a3, a4);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        167LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v9,
        v13);
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA9,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v10);
  }
  return result;
}
