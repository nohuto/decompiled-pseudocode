/*
 * XREFs of sub_140554ED0 @ 0x140554ED0
 * Callers:
 *     sub_140553F1C @ 0x140553F1C (sub_140553F1C.c)
 *     sub_14055D6F4 @ 0x14055D6F4 (sub_14055D6F4.c)
 * Callees:
 *     sub_140553E38 @ 0x140553E38 (sub_140553E38.c)
 */

__int64 __fastcall sub_140554ED0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  const signed __int64 *v11; // r12
  unsigned __int64 v12; // rsi
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r8
  _DWORD *v17; // rdx
  unsigned __int64 i; // rax

  v6 = a4;
  if ( a3 )
  {
    v11 = *(const signed __int64 **)(a2 + 8);
    v12 = a4 + a5;
    while ( 1 )
    {
      if ( v12 <= v6 )
        return 0LL;
      v13 = (_DWORD *)v11 + ((v12 - 1) >> 5);
      v14 = (_DWORD *)v11 + (v6 >> 5);
      if ( v14 != v13 && (*v14 | *((_DWORD *)qword_140015FA0 + (v6 & 0x1F))) == -1 )
      {
        v6 = (v6 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v14; v14 < v13 && *v14 == -1; ++v14 )
          v6 += 32LL;
      }
      while ( v6 < v12 && _bittest64(v11, v6) )
        ++v6;
      v15 = 0LL;
      if ( v14 != v13 )
      {
        v16 = v6 & 0x1F;
        if ( (~*((_DWORD *)qword_140015FA0 + v16) & *v14) == 0 )
        {
          v15 = 32 - v16;
          if ( v16 == 33 )
            goto LABEL_28;
          v17 = v14 + 1;
          while ( v17 < v13 && !*v17 )
          {
            ++v17;
            v15 += 32LL;
            if ( v15 == -1LL )
              goto LABEL_28;
          }
        }
      }
      for ( i = v15 + v6; i < v12 && !_bittest64(v11, i) && v15 != -1LL; ++i )
        ++v15;
LABEL_28:
      if ( !v15 )
        return 0LL;
      if ( v15 > *a3 )
      {
        sub_140553E38(a1, (__int128 *)a2, v6, *a3, a6);
        *a3 = 0LL;
        return 3221225507LL;
      }
      sub_140553E38(a1, (__int128 *)a2, v6, v15, a6);
      *a3 -= v15;
      v6 += v15;
      if ( v6 >= v12 )
        return 0LL;
    }
  }
  sub_140553E38(a1, (__int128 *)a2, a4, a5, a6);
  return 0LL;
}
