/*
 * XREFs of sub_14039CA48 @ 0x14039CA48
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140220DF0 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402AEF40 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 * Callees:
 *     ExReleaseFastResource @ 0x14039CF80 (ExReleaseFastResource.c)
 *     sub_14039D384 @ 0x14039D384 (sub_14039D384.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14039CA48(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rax
  unsigned __int8 v8; // r9
  __int64 v9; // r11
  void *v10; // rbx
  __int64 v11; // r10
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a4 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v11 + 20);
    *(_DWORD *)(v11 + 20) = a4;
  }
  LOBYTE(a4) = 1;
  v7 = sub_14039D384(CurrentThread, BugCheckParameter1, 0LL, a4);
  v10 = (void *)v7;
  if ( !v7 )
    KeBugCheckEx(0xE3u, BugCheckParameter1, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *(_BYTE *)(v7 + 17) &= ~2u;
  if ( dword_140D06B08 )
  {
    if ( ((unsigned __int8)dword_140D06B08 & v8) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(v9 << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  ExReleaseFastResource(BugCheckParameter1, (ULONG_PTR)v10);
  ExFreePoolWithTag(v10, 0);
}
