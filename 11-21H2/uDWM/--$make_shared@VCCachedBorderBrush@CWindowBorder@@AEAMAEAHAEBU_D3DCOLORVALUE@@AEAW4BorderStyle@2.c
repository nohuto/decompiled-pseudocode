/*
 * XREFs of ??$make_shared@VCCachedBorderBrush@CWindowBorder@@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@2@AEAW4ShadowStyle@2@UD2D_VECTOR_2F@@MV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@4@$$QEAUD2D_VECTOR_2F@@$$QEAM$$QEAV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18003A4B4
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003929C (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 * Callees:
 *     ??$?0AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@2@UD2D_VECTOR_2F@@MV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@4@$$QEAUD2D_VECTOR_2F@@$$QEAM$$QEAV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18003A588 (--$-0AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@2@UD2D_VECTOR_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_shared<CWindowBorder::CCachedBorderBrush,float &,int &,_D3DCOLORVALUE const &,enum CWindowBorder::BorderStyle &,enum CWindowBorder::ShadowStyle &,D2D_VECTOR_2F,float,Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax

  v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  v14 = 0LL;
  if ( v13 )
    v14 = std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>(
            v13,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9);
  *a1 = v14 + 16;
  result = a1;
  a1[1] = v14;
  return result;
}
