/*
 * XREFs of ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1804080F8
 * Callers:
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x18040BAC0 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 *     ?RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180416340 (-RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0AppRequestOperation@@QEAA@XZ @ 0x1804090C4 (--0AppRequestOperation@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(
        AppRequestOperation **a1)
{
  AppRequestOperation *v2; // rax
  AppRequestOperation *v5; // [rsp+30h] [rbp+8h]

  *a1 = 0LL;
  v2 = (AppRequestOperation *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v5 = AppRequestOperation::AppRequestOperation(v2);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v5 + 2) + 104LL))((__int64)v5 + 16);
    (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v5 + 8LL))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v5 + 16LL))(v5);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
