/*
 * XREFs of ?_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18049B3BC
 * Callers:
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180052B00 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewManager::_FindMatchingMTVHost(
        __int64 a1,
        int a2,
        struct IUnknown *a3,
        __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 i; // rbx
  __int64 *v13; // rbx

  if ( a4 )
    *a4 = 0LL;
  v9 = a5;
  if ( a5 )
    *a5 = -1LL;
  v10 = 0LL;
  if ( !*(_QWORD *)(a1 + 296) )
    return 2147647531LL;
  for ( i = 0LL; ; i += 16LL )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(i + *(_QWORD *)(a1 + 288)) + 24LL))(
      *(_QWORD *)(i + *(_QWORD *)(a1 + 288)),
      &a5);
    if ( (a2 & (unsigned int)a5) != 0 )
    {
      if ( (unsigned int)SHIsSameObject(a3, *(struct IUnknown **)(i + *(_QWORD *)(a1 + 288))) )
        break;
    }
    if ( (unsigned __int64)++v10 >= *(_QWORD *)(a1 + 296) )
      return 2147647531LL;
  }
  if ( a4 )
  {
    v13 = (__int64 *)(*(_QWORD *)(a1 + 288) + 16 * v10);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    *a4 = *v13;
  }
  if ( v9 )
    *v9 = v10;
  return 0LL;
}
