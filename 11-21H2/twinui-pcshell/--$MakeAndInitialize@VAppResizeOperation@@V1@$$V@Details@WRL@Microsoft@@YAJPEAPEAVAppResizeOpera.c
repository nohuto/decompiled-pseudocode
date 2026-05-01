/*
 * XREFs of ??$MakeAndInitialize@VAppResizeOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeOperation@@@Z @ 0x1805111B0
 * Callers:
 *     ?AppResizeOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805112EC (-AppResizeOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180103744 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0AppResizeOperation@@QEAA@XZ @ 0x180511284 (--0AppResizeOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeOperation,AppResizeOperation,>(
        AppResizeOperation **a1)
{
  AppResizeOperation *v2; // rax
  int inited; // edi
  AppResizeOperation *v4; // rsi
  AppResizeOperation *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (AppResizeOperation *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = AppResizeOperation::AppResizeOperation(v2);
    v6 = v4;
    v7 = 0LL;
    inited = CObjectWithThreadUseDetection::InitApartmentId((AppResizeOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(AppResizeOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      inited = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)inited;
}
