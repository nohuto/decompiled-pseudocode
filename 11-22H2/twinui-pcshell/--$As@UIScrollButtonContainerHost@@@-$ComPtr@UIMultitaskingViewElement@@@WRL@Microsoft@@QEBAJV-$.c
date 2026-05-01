/*
 * XREFs of ??$As@UIScrollButtonContainerHost@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainerHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x18058BE4C
 * Callers:
 *     ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x18058D110 (-UpdateViewport@CScrollViewer@@UEAAXXZ.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x18058D2A8 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainerHost>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_f85ba9ec_771f_4806_ba39_f860056371e5, a2);
}
