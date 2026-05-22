/*
 * XREFs of ??$As@UICompositionSurfaceFacade@Composition@UI@Windows@@@?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurfaceFacade@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008DA44
 * Callers:
 *     ?GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurface@234@PEAPEAU5234@1@Z @ 0x18004B10C (-GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurfac.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurface>::As<Windows::UI::Composition::ICompositionSurfaceFacade>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rsi

  v2 = *a1;
  v4 = *a2;
  v5 = **v2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v5(v2, &GUID_e01622c8_2332_55c7_8868_a7312c5c229d, a2);
}
