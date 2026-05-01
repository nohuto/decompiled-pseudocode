/*
 * XREFs of ?InternalRelease@?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003E92C
 * Callers:
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18002836C (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 *     ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18004F6C0 (--_E-$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801422FC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::InternalRelease(
        volatile signed __int64 **a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v3; // r11
  signed __int64 v4; // rax
  unsigned int v5; // edi
  signed __int64 v6; // rtt

  v2 = 0;
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v4 = *((_QWORD *)v3 + 7);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 == 0x7FFFFFFF )
        return 2147483646;
      v5 = v4 - 1;
      v6 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 7, v4 - 1, v4);
      if ( v6 == v4 )
        goto LABEL_6;
    }
    v5 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
LABEL_6:
    if ( !v5 )
    {
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v3 + 56))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v5;
  }
  return v2;
}
