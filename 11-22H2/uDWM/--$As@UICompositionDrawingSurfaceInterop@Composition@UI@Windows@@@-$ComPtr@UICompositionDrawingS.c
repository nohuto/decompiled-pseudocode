/*
 * XREFs of ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017D7C
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18002C904 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009F5C0 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_fd04e6e3_fe0c_4c3c_ab19_a07601a576ee, a2);
}
