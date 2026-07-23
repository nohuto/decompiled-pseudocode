/*
 * XREFs of sub_14039C830 @ 0x14039C830
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     sub_14039C944 @ 0x14039C944 (sub_14039C944.c)
 *     sub_14039D384 @ 0x14039D384 (sub_14039D384.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14039C830(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdi
  unsigned __int8 v8; // r9
  __int64 v9; // r11
  __int64 v10; // r10
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
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a4 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v10 + 20);
    *(_DWORD *)(v10 + 20) = a4;
  }
  LOBYTE(a4) = 1;
  v7 = sub_14039D384(CurrentThread, BugCheckParameter2, 0LL, a4);
  if ( !v7 )
    KeBugCheckEx(0xE3u, BugCheckParameter2, (ULONG_PTR)CurrentThread, 0LL, 0LL);
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
  if ( !*(_BYTE *)(v7 + 18) || *(_QWORD *)(v7 + 40) != v7 + 40 )
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  if ( *(char *)(BugCheckParameter2 + 26) >= 0 )
    KeBugCheckEx(0x1C6u, 0x16uLL, BugCheckParameter2, (ULONG_PTR)CurrentThread, 0LL);
  return sub_14039C944(BugCheckParameter2, v7);
}
