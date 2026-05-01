/*
 * XREFs of ??$MakeAndInitialize@VSnapServiceProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSnapServiceProvider@@@Z @ 0x18016917C
 * Callers:
 *     ?SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801690F4 (-SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0SnapServiceProvider@@QEAA@XZ @ 0x180169204 (--0SnapServiceProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SnapServiceProvider,SnapServiceProvider,>(
        SnapServiceProvider **a1)
{
  unsigned int v2; // ebx
  SnapServiceProvider *v3; // rax
  SnapServiceProvider *v4; // rax
  SnapServiceProvider *v5; // rdi
  SnapServiceProvider *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (SnapServiceProvider *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = SnapServiceProvider::SnapServiceProvider(v3);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      (*(void (__fastcall **)(SnapServiceProvider *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
