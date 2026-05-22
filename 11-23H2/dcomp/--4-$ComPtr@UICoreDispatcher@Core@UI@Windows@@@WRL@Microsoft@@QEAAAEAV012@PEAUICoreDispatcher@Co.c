/*
 * XREFs of ??4?$ComPtr@UICoreDispatcher@Core@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICoreDispatcher@Core@UI@Windows@@@Z @ 0x1801094FC
 * Callers:
 *     ?get_Dispatcher@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUICoreDispatcher@Core@45@@Z @ 0x180109DA0 (-get_Dispatcher@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUICoreDispatcher@Core@4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::UI::Core::ICoreDispatcher>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v5);
  }
  return a1;
}
