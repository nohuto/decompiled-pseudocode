/*
 * XREFs of ??$MakeAndInitialize@VPWSLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutItem@@@Z @ 0x180497588
 * Callers:
 *     ?PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180497820 (-PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PWSLayoutItem@@QEAA@XZ @ 0x180497610 (--0PWSLayoutItem@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutItem,PWSLayoutItem,>(PWSLayoutItem **a1)
{
  unsigned int v2; // ebx
  PWSLayoutItem *v3; // rax
  PWSLayoutItem *v4; // rax
  PWSLayoutItem *v5; // rdi
  PWSLayoutItem *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (PWSLayoutItem *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = PWSLayoutItem::PWSLayoutItem(v3);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      (*(void (__fastcall **)(PWSLayoutItem *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
