/*
 * XREFs of ExDeleteFastResource2 @ 0x140413494
 * Callers:
 *     ExDeleteFastResource @ 0x1403D49D0 (ExDeleteFastResource.c)
 * Callees:
 *     ExpIsFastResourceOwned @ 0x140415A5C (ExpIsFastResourceOwned.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteFastResource2(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v2; // rdx
  __int64 result; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (unsigned __int8)ExpIsFastResourceOwned(BugCheckParameter2, BugCheckParameter2) )
    KeBugCheckEx(0x1C6u, 4uLL, v2, 0LL, 0LL);
  result = 65470LL;
  *(_WORD *)(v2 + 26) &= 0xFFBEu;
  return result;
}
