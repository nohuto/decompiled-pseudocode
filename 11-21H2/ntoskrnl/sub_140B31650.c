/*
 * XREFs of sub_140B31650 @ 0x140B31650
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall sub_140B31650(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR result; // rax

  if ( byte_140C4BE6C )
    KeBugCheckEx(0x5Cu, 0xA000uLL, BugCheckParameter2, off_140C07098, 0LL);
  result = off_140C07098;
  byte_140C4BE6C = 1;
  *(_QWORD *)off_140C07098 = sub_1403DA150;
  return result;
}
