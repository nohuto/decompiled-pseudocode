/*
 * XREFs of sub_140418160 @ 0x140418160
 * Callers:
 *     sub_140417DB0 @ 0x140417DB0 (sub_140417DB0.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 * Callees:
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403476D0 @ 0x1403476D0 (sub_1403476D0.c)
 *     sub_1403488C0 @ 0x1403488C0 (sub_1403488C0.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     sub_140417AE0 @ 0x140417AE0 (sub_140417AE0.c)
 */

void __fastcall sub_140418160(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = (IRP *)(a1 - 120);
  v6 = *a4;
  v7 = 0LL;
  if ( (*(_DWORD *)(*a4 + 80) & 0x4000000) == 0 )
    KeSetEvent((PRKEVENT)(v6 + 152), 0, 0);
  *(_DWORD *)(v6 + 56) = v5->IoStatus.Status;
  if ( (v5->Flags & 0x2000) != 0 )
    v7 = v5->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  sub_140417AE0((__int64)v5);
  sub_1403488C0((__int64)v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    sub_1403476D0((__int64)v5, v6);
  }
  else
  {
    v5->Tail.Overlay.Thread = CurrentThread;
    sub_1403489B0(v5);
  }
  v5->UserEvent = 0LL;
  sub_140234D58(v5, v6);
}
