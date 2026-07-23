/*
 * XREFs of sub_14064D8A0 @ 0x14064D8A0
 * Callers:
 *     sub_14064DC1C @ 0x14064DC1C (sub_14064DC1C.c)
 * Callees:
 *     sub_14064ED40 @ 0x14064ED40 (sub_14064ED40.c)
 */

__int64 __fastcall sub_14064D8A0(int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int16 v6; // ax
  int v8; // r9d
  unsigned __int16 v9; // bx
  int v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+6Ch] [rbp+24h]

  v12 = HIDWORD(a4);
  v11 = 0;
  v6 = *(_WORD *)a2 & 0xFFFE;
  *a3 = 0;
  v8 = 0;
  v9 = 0;
  if ( v6 )
  {
    do
    {
      v8 = sub_14064ED40(
             a1,
             *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 2LL * v9),
             (unsigned int)&v11,
             v8,
             (__int64)&qword_140C0DEC0);
      if ( v8 < 0 )
        break;
      ++v9;
      *a3 += v11;
    }
    while ( v9 < (unsigned __int16)(*(_WORD *)a2 >> 1) );
  }
  return (unsigned int)v8;
}
