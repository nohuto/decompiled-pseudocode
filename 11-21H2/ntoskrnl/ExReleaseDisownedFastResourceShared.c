/*
 * XREFs of ExReleaseDisownedFastResourceShared @ 0x14063C7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039CBAC @ 0x14039CBAC (sub_14039CBAC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063CF10 @ 0x14063CF10 (sub_14063CF10.c)
 */

LONG_PTR __fastcall ExReleaseDisownedFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v2; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v5; // al
  __int64 v6; // r8

  v2 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && !*((_DWORD *)CurrentThread + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v5 = *(_BYTE *)(a2 + 17);
  if ( (v5 & 4) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v5 & 4) << 14, 0LL);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (v5 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  if ( (v2 & 0x80u) == 0 )
    return sub_14039CBAC(BugCheckParameter2, (__int64 *)a2);
  else
    return sub_14063CF10(BugCheckParameter2, a2, v6);
}
