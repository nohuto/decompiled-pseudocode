/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180049360
 * Callers:
 *     ?FillArrayWithIid@?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180049310 (-FillArrayWithIid@-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@Targ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = 2LL * (unsigned int)*a2;
  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584;
  return result;
}
