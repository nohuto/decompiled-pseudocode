/*
 * XREFs of sub_18001DA7C @ 0x18001DA7C
 * Callers:
 *     sub_18009FCC0 @ 0x18009FCC0 (sub_18009FCC0.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 * Callees:
 *     memcmp @ 0x1800FEEAF (memcmp.c)
 */

char __fastcall sub_18001DA7C(_QWORD *a1, _BYTE *a2)
{
  __int64 v2; // rax
  char v3; // bl
  size_t v4; // r8

  v2 = -1LL;
  v3 = 0;
  do
    ++v2;
  while ( a2[v2] );
  v4 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  if ( v4 == v2 && !memcmp(a1, a2, v4) )
    return 1;
  return v3;
}
