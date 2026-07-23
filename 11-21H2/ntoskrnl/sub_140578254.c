/*
 * XREFs of sub_140578254 @ 0x140578254
 * Callers:
 *     sub_1402FF310 @ 0x1402FF310 (sub_1402FF310.c)
 * Callees:
 *     sub_140578414 @ 0x140578414 (sub_140578414.c)
 */

unsigned __int64 __fastcall sub_140578254(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 result; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  _QWORD *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)*a1;
  v3 = *a2;
  v11 = 0LL;
  result = *((unsigned __int16 *)a2 + 4);
  WORD4(v11) = *((_WORD *)a2 + 4);
  for ( *(_QWORD *)&v11 = v3; v2 != a1; v2 = (_QWORD *)*v2 )
  {
    v7 = v2 - 26;
    result = *(v2 - 18);
    if ( (result & *a2) != 0 )
    {
      v8 = sub_140578414(v2 - 26, &v11);
      if ( v8 == -1 )
      {
        v3 |= *a2 & v7[8];
        *(_QWORD *)&v11 = v3;
        v8 = sub_140578414(v2 - 26, &v11);
      }
      v9 = dword_140D0E5E0[v8];
      v3 &= ~(1LL << (v9 & 0x3F));
      *(_DWORD *)((char *)v7 + 186) = 0;
      *((_WORD *)v7 + 95) = 0;
      *((_WORD *)v7 + 92) = v9 >> 6;
      v7[22] = 1LL << (v9 & 0x3F);
      v10 = (_QWORD *)*v2;
      *(_QWORD *)&v11 = v3;
      if ( (_QWORD *)v10[1] != v2 || (result = v2[1], *(_QWORD **)result != v2) )
        __fastfail(3u);
      *(_QWORD *)result = v10;
      v10[1] = result;
    }
  }
  return result;
}
