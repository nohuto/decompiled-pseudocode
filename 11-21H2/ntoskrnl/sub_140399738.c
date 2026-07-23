/*
 * XREFs of sub_140399738 @ 0x140399738
 * Callers:
 *     sub_14038A168 @ 0x14038A168 (sub_14038A168.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140399738()
{
  int v0; // r14d
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r8
  _QWORD *v4; // rdi
  __int64 i; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  _DWORD *v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 j; // rcx
  unsigned __int64 v14; // rbx
  _DWORD *v16; // rdx
  __int64 v17; // r8

  v0 = 0;
  v1 = 0LL;
  while ( 1 )
  {
    v2 = v1 & -(__int64)(v1 < qword_140C52A20);
    v3 = qword_140C52A20 - 1;
    while ( 1 )
    {
      if ( v3 - v2 == -1LL )
        goto LABEL_39;
      v4 = (_QWORD *)(qword_140C52A28 + 8 * (v2 >> 6));
      for ( i = ~*v4 | ((1LL << (v2 & 0x3F)) - 1); i == -1; i = ~*v4 )
      {
        if ( (unsigned __int64)++v4 > qword_140C52A28 + 8 * (v3 >> 6) )
          goto LABEL_39;
      }
      _BitScanForward64(&v6, ~i);
      v7 = v6 + (((__int64)v4 - qword_140C52A28) >> 3 << 6);
      if ( v7 > v3 )
      {
LABEL_39:
        v7 = -1LL;
      }
      else if ( v7 != -1LL )
      {
        break;
      }
      if ( !v2 )
        break;
      v17 = v1 + 1;
      if ( v1 + 1 > qword_140C52A20 )
        v17 = qword_140C52A20;
      v3 = v17 - 1;
      v2 = 0LL;
    }
    if ( v7 < v1 || v7 == -1LL )
      return (unsigned int)v0;
    if ( qword_140C52A20 > v7 )
    {
      v8 = v7;
      v9 = qword_140C52A28 + 4 * ((unsigned __int64)(qword_140C52A20 - 1) >> 5);
      v10 = (_DWORD *)(qword_140C52A28 + 4 * (v7 >> 5));
      if ( v10 != (_DWORD *)v9 && (*v10 | *((_DWORD *)qword_140015FA0 + (v7 & 0x1F))) == -1 )
      {
        v8 = (v7 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v10; (unsigned __int64)v10 < v9 && *v10 == -1; ++v10 )
          v8 += 32LL;
      }
      while ( v8 < qword_140C52A20 && _bittest64((const signed __int64 *)qword_140C52A28, v8) )
        ++v8;
      v11 = 0LL;
      if ( v10 == (_DWORD *)v9 )
        goto LABEL_20;
      v12 = v8 & 0x1F;
      if ( (~*((_DWORD *)qword_140015FA0 + v12) & *v10) != 0 )
        goto LABEL_20;
      v11 = 32 - v12;
      if ( v12 != 33 )
      {
        v16 = v10 + 1;
        while ( (unsigned __int64)v16 < v9 && !*v16 )
        {
          ++v16;
          v11 += 32LL;
          if ( v11 == -1LL )
            goto LABEL_25;
        }
LABEL_20:
        for ( j = v11 + v8;
              j < qword_140C52A20 && !_bittest64((const signed __int64 *)qword_140C52A28, j) && v11 != -1LL;
              ++j )
        {
          ++v11;
        }
      }
LABEL_25:
      if ( v11 )
        goto LABEL_26;
      goto LABEL_41;
    }
    v11 = 0LL;
LABEL_41:
    v8 = qword_140C52A20;
LABEL_26:
    v14 = v8 - v7;
    v0 = sub_14042A5E0(v7 << 12, v14 << 12);
    if ( v0 >= 0 )
    {
      v1 = v14 + v11 + v7;
      if ( v1 < qword_140C52A20 )
        continue;
    }
    return (unsigned int)v0;
  }
}
