/*
 * XREFs of ExReleaseDisownedFastResource @ 0x14039CB30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039CBAC @ 0x14039CBAC (sub_14039CBAC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063CF10 @ 0x14063CF10 (sub_14063CF10.c)
 */

__int64 __fastcall ExReleaseDisownedFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v2; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8

  v2 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  if ( (v2 & 0x80u) != 0 )
    return sub_14063CF10(BugCheckParameter2, a2, CurrentThread);
  else
    return sub_14039CBAC(BugCheckParameter2, a2, CurrentThread);
}
