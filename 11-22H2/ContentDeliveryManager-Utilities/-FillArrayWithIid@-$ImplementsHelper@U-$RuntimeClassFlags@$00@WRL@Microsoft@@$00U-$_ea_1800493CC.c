/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1800493CC
 * Callers:
 *     ?FillArrayWithIid@?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18004936C (-FillArrayWithIid@-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = 2LL * (unsigned int)*a2;
  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_caf66f56_2471_4426_b393_77a1640adf78;
  return result;
}
