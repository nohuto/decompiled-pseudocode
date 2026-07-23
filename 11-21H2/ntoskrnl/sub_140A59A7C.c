/*
 * XREFs of sub_140A59A7C @ 0x140A59A7C
 * Callers:
 *     sub_1403C205C @ 0x1403C205C (sub_1403C205C.c)
 *     sub_14056918C @ 0x14056918C (sub_14056918C.c)
 * Callees:
 *     sub_1403C2120 @ 0x1403C2120 (sub_1403C2120.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_14054E00C @ 0x14054E00C (sub_14054E00C.c)
 *     sub_140A5A148 @ 0x140A5A148 (sub_140A5A148.c)
 */

char __fastcall sub_140A59A7C(__int64 *a1)
{
  __int64 v1; // rsi
  bool v3; // bl
  int v4; // eax
  unsigned int v5; // ecx

  v1 = *a1;
  v3 = byte_140D06888 != 0;
  LOBYTE(v4) = sub_1403C2120(a1[7], 0x1000uLL, 2u);
  if ( v3 )
  {
    LOBYTE(v4) = sub_1403C2120(v1 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 2u);
    if ( byte_140E01840 )
      LOBYTE(v4) = sub_1403C2120(a1[1], 0x1000uLL, 2u);
  }
  v5 = *((_DWORD *)a1 + 105);
  if ( v5 )
  {
    if ( byte_140D06888 )
      LOBYTE(v4) = sub_14054E00C(v5);
  }
  else
  {
    v4 = sub_140A5A148(a1 + 48, v1 - 12208);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  return v4;
}
