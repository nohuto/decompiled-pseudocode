/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIContentDeliveryManagerConfiguration@ContentManagement@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180049378
 * Callers:
 *     ?FillArrayWithIid@?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180049348 (-FillArrayWithIid@-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@Con.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = 2LL * (unsigned int)*a2;
  *(GUID *)(a3 + 16LL * (unsigned int)(*a2)++) = GUID_b327e68c_b800_42f5_b32c_2ceb8ba5921d;
  return result;
}
