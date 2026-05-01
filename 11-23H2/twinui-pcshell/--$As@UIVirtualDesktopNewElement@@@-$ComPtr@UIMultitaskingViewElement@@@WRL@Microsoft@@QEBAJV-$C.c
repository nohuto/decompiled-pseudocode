/*
 * XREFs of ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180580EAC
 * Callers:
 *     ?GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x1805812C0 (-GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA-AV-$ComPtr@UIVirtualDesktopNewElement@@@WRL.c)
 *     ?GetNewTimelineButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x180581310 (-GetNewTimelineButton@CVirtualDesktopBarElement@@UEAA-AV-$ComPtr@UIVirtualDesktopNewElement@@@WR.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x180581FE0 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_b5c10705_700e_44ce_a812_dbd79f732700, a2);
}
