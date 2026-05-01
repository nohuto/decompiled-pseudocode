/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutItem@@@Z @ 0x18031D0F4
 * Callers:
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18031D718 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0TaskbarLayoutItem@@QEAA@XZ @ 0x18031D17C (--0TaskbarLayoutItem@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutItem,TaskbarLayoutItem,>(
        TaskbarLayoutItem **a1)
{
  unsigned int v2; // ebx
  TaskbarLayoutItem *v3; // rax
  TaskbarLayoutItem *v4; // rax
  TaskbarLayoutItem *v5; // rdi
  TaskbarLayoutItem *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (TaskbarLayoutItem *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = TaskbarLayoutItem::TaskbarLayoutItem(v3);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      (*(void (__fastcall **)(TaskbarLayoutItem *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
