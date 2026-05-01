/*
 * XREFs of ?_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180554108
 * Callers:
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x18004B4D0 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewManager::_FindMatchingMTVHost(
        __int64 a1,
        int a2,
        struct IUnknown *a3,
        __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 i; // rbx
  __int64 *v13; // rbx

  if ( a4 )
    *a4 = 0LL;
  v9 = a5;
  if ( a5 )
    *a5 = -1LL;
  v10 = 0LL;
  if ( !*(_QWORD *)(a1 + 304) )
    return 2147647531LL;
  for ( i = 0LL; ; i += 16LL )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(i + *(_QWORD *)(a1 + 296)) + 24LL))(
      *(_QWORD *)(i + *(_QWORD *)(a1 + 296)),
      &a5);
    if ( (a2 & (unsigned int)a5) != 0 )
    {
      if ( (unsigned int)SHIsSameObject(a3, *(struct IUnknown **)(i + *(_QWORD *)(a1 + 296))) )
        break;
    }
    if ( (unsigned __int64)++v10 >= *(_QWORD *)(a1 + 304) )
      return 2147647531LL;
  }
  if ( a4 )
  {
    v13 = (__int64 *)(*(_QWORD *)(a1 + 296) + 16 * v10);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    *a4 = *v13;
  }
  if ( v9 )
    *v9 = v10;
  return 0LL;
}
