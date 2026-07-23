/*
 * XREFs of ExReleaseDisownedFastResourceExclusive @ 0x14063C690
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063CF10 @ 0x14063CF10 (sub_14063CF10.c)
 */

__int64 __fastcall ExReleaseDisownedFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v4; // al
  __int64 v5; // r8

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v4 = *(_BYTE *)(a2 + 17);
  if ( (v4 & 4) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, ((unsigned __int64)(v4 & 4) << 14) | 1, 0LL);
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (v4 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  return sub_14063CF10(BugCheckParameter2, a2, v5);
}
