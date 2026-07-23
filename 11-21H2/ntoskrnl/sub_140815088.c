/*
 * XREFs of sub_140815088 @ 0x140815088
 * Callers:
 *     sub_140814FBC @ 0x140814FBC (sub_140814FBC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 */

_QWORD *__fastcall sub_140815088(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rax
  __int128 v6; // xmm0

  v2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = (_QWORD *)sub_14081538C(3LL, 544LL);
      v2 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x220uLL);
        v6 = *a2;
        v2[4] = a1;
        *((_DWORD *)v2 + 11) = 1;
        *((_OWORD *)v2 + 1) = v6;
      }
    }
  }
  return v2;
}
