/*
 * XREFs of ?InternalAddRef@?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180010920
 * Callers:
 *     ??4?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180018FA0 (--4-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?0AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@2@UD2D_VECTOR_2F@@MV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@4@$$QEAUD2D_VECTOR_2F@@$$QEAM$$QEAV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18003A588 (--$-0AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@2@UD2D_VECTOR_.c)
 *     ??4?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180062BB4 (--4-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIComposit.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
