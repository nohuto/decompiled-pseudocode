/*
 * XREFs of ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180531DD8
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x180519FD8 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z @ 0x180531688 (--0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z.c)
 *     ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x1805345C0 (-_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z.c)
 */

__int64 __fastcall CDragVisual::CreateInstance(unsigned int a1, struct IDragVisualHost *a2, __int64 a3, _QWORD *a4)
{
  CDragVisual *v7; // rax
  CDragVisual *v8; // rax
  CDragVisual *v9; // rbx
  int v10; // edi

  *a4 = 0LL;
  v7 = (CDragVisual *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 && (v8 = CDragVisual::CDragVisual(v7, a2), (v9 = v8) != 0LL) )
  {
    v10 = CDragVisual::_Initialize(v8, a1);
    if ( v10 >= 0 )
      v10 = (**(__int64 (__fastcall ***)(CDragVisual *, GUID *, _QWORD *))v9)(
              v9,
              &GUID_fddf6c78_7133_462a_9ca9_020619164eb1,
              a4);
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
