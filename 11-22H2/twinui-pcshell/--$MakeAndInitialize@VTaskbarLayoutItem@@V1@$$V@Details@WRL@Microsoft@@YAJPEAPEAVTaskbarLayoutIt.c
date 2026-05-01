/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutItem@@@Z @ 0x1803EB588
 * Callers:
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803EBA98 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0TaskbarLayoutItem@@QEAA@XZ @ 0x1803EB614 (--0TaskbarLayoutItem@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
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
  v3 = (TaskbarLayoutItem *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
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
