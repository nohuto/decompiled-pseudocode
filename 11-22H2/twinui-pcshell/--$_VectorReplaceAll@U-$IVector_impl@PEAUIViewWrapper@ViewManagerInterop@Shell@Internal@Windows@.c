/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@123@IPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@@Z @ 0x180395C1C
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@@Z @ 0x18039F1C0 (-ReplaceAll@-$IVector_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Colle.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,1>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // ebp
  unsigned int v7; // ebx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *a3);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
