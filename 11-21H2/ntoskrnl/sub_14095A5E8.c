/*
 * XREFs of sub_14095A5E8 @ 0x14095A5E8
 * Callers:
 *     sub_140749ECC @ 0x140749ECC (sub_140749ECC.c)
 * Callees:
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 */

__int64 __fastcall sub_14095A5E8(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  __int64 v4; // rdx
  char v6; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2 == 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    sub_14077198C(*(__int64 *)&qword_140D00AC0, v4, 1, 0LL, 0LL, (__int64)qword_1400180D8, 0, 0LL, 0, 0);
  }
  else
  {
    v6 = -1;
    return (unsigned int)sub_14077198C(
                           *(__int64 *)&qword_140D00AC0,
                           v4,
                           1,
                           0LL,
                           0LL,
                           (__int64)qword_1400180D8,
                           17,
                           (__int64)&v6,
                           1u,
                           0);
  }
  return v2;
}
