/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180075F20
 * Callers:
 *     ?FillArrayWithIid@?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180075F14 (-FillArrayWithIid@-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = 2LL * (unsigned int)*a2;
  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_5095e466_bb07_4fb0_a18b_88f3bf86b2bd;
  return result;
}
