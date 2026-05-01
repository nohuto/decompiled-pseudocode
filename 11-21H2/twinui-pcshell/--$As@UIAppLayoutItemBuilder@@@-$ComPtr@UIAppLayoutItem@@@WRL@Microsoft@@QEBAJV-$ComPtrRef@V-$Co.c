/*
 * XREFs of ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180512354
 * Callers:
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180513410 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x180614194 (-_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x1806145F8 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x180614B9C (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 *     ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x18061863C (-_CommitLayoutItems@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, a2);
}
