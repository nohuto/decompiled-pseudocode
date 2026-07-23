/*
 * XREFs of ExReleaseFastResourceExclusive @ 0x14063C8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D3E4 @ 0x14039D3E4 (sub_14039D3E4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  ULONG_PTR v4; // r9
  char v5; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v4 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v4 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v4, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  v5 = *(_BYTE *)(a2 + 17);
  if ( (v5 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v5 & 4) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, ((unsigned __int64)(v5 & 4) << 14) | 1, 0LL);
  return sub_14039D3E4(BugCheckParameter2, a2);
}
