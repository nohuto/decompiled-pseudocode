/*
 * XREFs of ??$As@UIGlyphButton@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGlyphButton@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B7814
 * Callers:
 *     ?_RepaintCloseButton@CSwitchItemElement@@IEAAXXZ @ 0x1804B8C9C (-_RepaintCloseButton@CSwitchItemElement@@IEAAXXZ.c)
 *     ?SetDisabledButton@CScrollButtonContainer@@UEAAXW4ScrollButton@@@Z @ 0x1804D4120 (-SetDisabledButton@CScrollButtonContainer@@UEAAXW4ScrollButton@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IGlyphButton>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_5bed2cad_118b_40f9_a117_1e4d56972a52, a2);
}
