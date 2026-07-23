/*
 * XREFs of sub_140AA59E0 @ 0x140AA59E0
 * Callers:
 *     sub_140AA3CA0 @ 0x140AA3CA0 (sub_140AA3CA0.c)
 *     sub_140AA3D10 @ 0x140AA3D10 (sub_140AA3D10.c)
 *     sub_140AA3D60 @ 0x140AA3D60 (sub_140AA3D60.c)
 *     sub_140AA40C0 @ 0x140AA40C0 (sub_140AA40C0.c)
 *     sub_140AA40E0 @ 0x140AA40E0 (sub_140AA40E0.c)
 *     sub_140AA4100 @ 0x140AA4100 (sub_140AA4100.c)
 *     sub_140AA4120 @ 0x140AA4120 (sub_140AA4120.c)
 *     sub_140AA58C0 @ 0x140AA58C0 (sub_140AA58C0.c)
 * Callees:
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     MmIsNonPagedSystemAddressValid @ 0x14045BA00 (MmIsNonPagedSystemAddressValid.c)
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

BOOLEAN __fastcall sub_140AA59E0(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  BOOLEAN result; // al

  sub_1406021F8(BugCheckParameter2, a2);
  if ( sub_140359DE0(BugCheckParameter2) )
    sub_140A8C924(0xC4u, 0xDFuLL, BugCheckParameter2, 0LL, 0LL);
  result = MmIsNonPagedSystemAddressValid((PVOID)BugCheckParameter2);
  if ( !result )
    return sub_140A8C924(0xC4u, 0xE1uLL, BugCheckParameter2, 0LL, 0LL);
  return result;
}
