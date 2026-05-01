/*
 * XREFs of ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C651C
 * Callers:
 *     ?GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x1804C6930 (-GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA-AV-$ComPtr@UIVirtualDesktopNewElement@@@WRL.c)
 *     ?GetNewTimelineButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x1804C6980 (-GetNewTimelineButton@CVirtualDesktopBarElement@@UEAA-AV-$ComPtr@UIVirtualDesktopNewElement@@@WR.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804C7660 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
