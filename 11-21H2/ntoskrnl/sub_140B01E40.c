/*
 * XREFs of sub_140B01E40 @ 0x140B01E40
 * Callers:
 *     sub_140B01BE0 @ 0x140B01BE0 (sub_140B01BE0.c)
 * Callees:
 *     sub_140571FB4 @ 0x140571FB4 (sub_140571FB4.c)
 */

__int64 __fastcall sub_140B01E40(ULONG_PTR BugCheckParameter4, unsigned __int64 *a2)
{
  ULONG_PTR v2; // r8
  __int64 result; // rax

  v2 = BugCheckParameter4;
  if ( !_BitScanForward64(&BugCheckParameter4, *a2) )
    sub_140571FB4(0x1003uLL, v2);
  result = *(_QWORD *)(v2 + 8) | (1LL << BugCheckParameter4);
  *a2 &= ~(1LL << BugCheckParameter4);
  ++*(_BYTE *)(v2 + 1);
  *(_QWORD *)(v2 + 8) = result;
  return result;
}
