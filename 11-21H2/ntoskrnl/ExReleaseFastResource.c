/*
 * XREFs of ExReleaseFastResource @ 0x14039CF80
 * Callers:
 *     sub_14039CA48 @ 0x14039CA48 (sub_14039CA48.c)
 * Callees:
 *     sub_14039D010 @ 0x14039D010 (sub_14039D010.c)
 *     sub_14039D3E4 @ 0x14039D3E4 (sub_14039D3E4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v2; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v5; // r9

  v2 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v5 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v5 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v5, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v2 & 0x80u) != 0 )
    return sub_14039D3E4(BugCheckParameter2);
  else
    return sub_14039D010(BugCheckParameter2);
}
