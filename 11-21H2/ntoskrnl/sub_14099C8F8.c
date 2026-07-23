/*
 * XREFs of sub_14099C8F8 @ 0x14099C8F8
 * Callers:
 *     sub_14099C9CC @ 0x14099C9CC (sub_14099C9CC.c)
 * Callees:
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_140995BB8 @ 0x140995BB8 (sub_140995BB8.c)
 */

unsigned __int64 sub_14099C8F8()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  v0 = 0LL;
  sub_1407EF098(1);
  v1 = qword_140C1F410;
  if ( (qword_140C1F410 & 7) == 0 )
  {
    v1 = 0LL;
    if ( (_BYTE)xmmword_140C1F400 )
      v1 = *((_QWORD *)&xmmword_140C1F400 + 1);
  }
  sub_1407EF120();
  if ( (v1 & 7) == 0 )
  {
    sub_140995BB8((__int64)v4);
    if ( LODWORD(v4[0]) == 1 )
    {
      v2 = v1 & 0xFFFFFFFFFFFFFFF8uLL | 1;
      if ( dword_140D04884 > 0 )
        v0 = 8LL;
      return v0 | v2 & 0xFFFFFFFFFFFFFFF7uLL;
    }
    else if ( LODWORD(v4[0]) == 4 )
    {
      return (dword_140C231B0 == 0 ? 8 : 0) | (((unsigned __int8)v1 ^ (unsigned __int8)dword_140D3B800[(int)v5]) & 7 ^ (unsigned __int64)v1) & 0xFFFFFFFFFFFFFFF7uLL;
    }
    else
    {
      return v1 & 0xFFFFFFFFFFFFFFF8uLL;
    }
  }
  return v1;
}
