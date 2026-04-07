/*
 * XREFs of ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x1800C658C
 * Callers:
 *     _CLivePreview::OnWindowShowHide_::_1_::dtor$3 @ 0x180067B12 (_CLivePreview--OnWindowShowHide_--_1_--dtor$3.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$1 @ 0x1800C8909 (_CLivePreview--_FadeOutToGlass_--_1_--dtor$1.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$3 @ 0x1800C8921 (_CLivePreview--_FadeOutToGlass_--_1_--dtor$3.c)
 * Callees:
 *     ?Attach@?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z @ 0x1800078F4 (-Attach@-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z.c)
 */

unsigned int __fastcall wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(
        __int64 a1)
{
  unsigned int result; // eax

  if ( *(_BYTE *)(a1 + 16) )
    return Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach(*(CBaseObject ***)a1, *(CBaseObject **)(a1 + 8));
  return result;
}
