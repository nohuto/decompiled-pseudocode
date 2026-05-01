/*
 * XREFs of ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1804E3648
 * Callers:
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804EB7B0 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 *     ?RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804F1570 (-RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0AppRequestOperation@@QEAA@XZ @ 0x1804E5A30 (--0AppRequestOperation@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(
        AppRequestOperation **a1)
{
  AppRequestOperation *v2; // rax
  unsigned int v3; // esi
  AppRequestOperation *v4; // rbx

  *a1 = 0LL;
  v2 = (AppRequestOperation *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = AppRequestOperation::AppRequestOperation(v2);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v4 + 2) + 104LL))((__int64)v4 + 16);
    if ( v4 )
      (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    v3 = 0;
    if ( v4 )
      (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
