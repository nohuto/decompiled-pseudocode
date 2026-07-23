/*
 * XREFs of MmForceSectionClosedEx @ 0x14058C7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023E9A0 @ 0x14023E9A0 (sub_14023E9A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall MmForceSectionClosedEx(__int64 *a1, unsigned int a2)
{
  char v2; // bl
  int v4; // edi
  int v5; // eax

  v2 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 )
    KeBugCheckEx(0x1Au, 0x43000uLL, a2, 0LL, 0LL);
  if ( (a2 & 1) != 0 )
    v4 = sub_14023E9A0(a1, a2 & 0xFD, 0);
  else
    v4 = 1;
  if ( (v2 & 2) != 0 )
    v5 = sub_14023E9A0(a1, v2 & 0xFE, 0);
  else
    v5 = 1;
  return v4 != 2 && v5 != 2;
}
