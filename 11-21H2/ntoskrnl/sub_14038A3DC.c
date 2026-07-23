/*
 * XREFs of sub_14038A3DC @ 0x14038A3DC
 * Callers:
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14038A3DC(__int64 a1)
{
  int v1; // ebp
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 i; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  _DWORD *v14; // rdx
  unsigned __int64 v15; // r9
  _DWORD *v16; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 v18; // rbx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = v3 & -(__int64)(v3 < qword_140C52A10);
    v5 = qword_140C52A10 - 1;
    while ( 1 )
    {
      if ( v5 - v4 == -1LL )
        goto LABEL_7;
      v6 = (_QWORD *)(qword_140C52A18 + 8 * (v4 >> 6));
      for ( i = ~*v6 | ((1LL << (v4 & 0x3F)) - 1); i == -1; i = ~*v6 )
      {
        if ( (unsigned __int64)++v6 > qword_140C52A18 + 8 * (v5 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v9, ~i);
      v8 = v9 + (((__int64)v6 - qword_140C52A18) >> 3 << 6);
      if ( v8 > v5 )
      {
LABEL_7:
        v8 = -1LL;
      }
      else if ( v8 != -1LL )
      {
        break;
      }
      if ( !v4 )
        break;
      v10 = v3 + 1;
      if ( v3 + 1 > qword_140C52A10 )
        v10 = qword_140C52A10;
      v5 = v10 - 1;
      v4 = 0LL;
    }
    if ( v8 < v3 || v8 == -1LL )
      return (unsigned int)v1;
    if ( qword_140C52A10 > v8 )
    {
      v12 = v8;
      v13 = qword_140C52A18 + 4 * ((unsigned __int64)(qword_140C52A10 - 1) >> 5);
      v14 = (_DWORD *)(qword_140C52A18 + 4 * (v8 >> 5));
      if ( v14 != (_DWORD *)v13 && (*v14 | *((_DWORD *)qword_140015FA0 + (v8 & 0x1F))) == -1 )
      {
        v12 = (v8 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v14; (unsigned __int64)v14 < v13 && *v14 == -1; ++v14 )
          v12 += 32LL;
      }
      while ( v12 < qword_140C52A10 && _bittest64((const signed __int64 *)qword_140C52A18, v12) )
        ++v12;
      v11 = 0LL;
      if ( v14 == (_DWORD *)v13 )
        goto LABEL_38;
      v15 = v12 & 0x1F;
      if ( (~*((_DWORD *)qword_140015FA0 + v15) & *v14) != 0 )
        goto LABEL_38;
      v11 = 32 - v15;
      if ( v15 != 33 )
      {
        v16 = v14 + 1;
        while ( (unsigned __int64)v16 < v13 && !*v16 )
        {
          ++v16;
          v11 += 32LL;
          if ( v11 == -1LL )
            goto LABEL_43;
        }
LABEL_38:
        for ( j = v11 + v12;
              j < qword_140C52A10 && !_bittest64((const signed __int64 *)qword_140C52A18, j) && v11 != -1LL;
              ++j )
        {
          ++v11;
        }
      }
LABEL_43:
      if ( v11 )
        goto LABEL_45;
      goto LABEL_44;
    }
    v11 = 0LL;
LABEL_44:
    v12 = qword_140C52A10;
LABEL_45:
    v18 = v12 - v8;
    v1 = sub_14042A5E0(v8 << 12, v18 << 12);
    if ( v1 >= 0 )
    {
      v3 = v18 + v11 + v8;
      if ( v3 < qword_140C52A10 )
        continue;
    }
    return (unsigned int)v1;
  }
}
