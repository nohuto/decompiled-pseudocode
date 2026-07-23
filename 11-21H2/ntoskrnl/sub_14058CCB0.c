/*
 * XREFs of sub_14058CCB0 @ 0x14058CCB0
 * Callers:
 *     sub_14038A168 @ 0x14038A168 (sub_14038A168.c)
 * Callees:
 *     sub_14058CF54 @ 0x14058CF54 (sub_14058CF54.c)
 */

__int64 __fastcall sub_14058CCB0(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rdi
  __int64 i; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  _DWORD *v13; // rdx
  unsigned __int64 v14; // r9
  _DWORD *v15; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 v17; // rbx

  v1 = 0LL;
  do
  {
    v3 = v1 & -(__int64)(v1 < qword_140C52A20);
    v4 = qword_140C52A20 - 1;
    while ( 1 )
    {
      result = v4 - v3 + 1;
      if ( v4 - v3 == -1LL )
        goto LABEL_4;
      v7 = (_QWORD *)(qword_140C52A28 + 8 * (v3 >> 6));
      result = ~*v7;
      for ( i = result | ((1LL << (v3 & 0x3F)) - 1); i == -1; i = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > qword_140C52A28 + 8 * (v4 >> 6) )
          goto LABEL_4;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~i);
      v6 = result + (((__int64)v7 - qword_140C52A28) >> 3 << 6);
      if ( v6 > v4 )
      {
LABEL_4:
        v6 = -1LL;
      }
      else if ( v6 != -1LL )
      {
        break;
      }
      if ( !v3 )
        break;
      v9 = v1 + 1;
      if ( v1 + 1 > qword_140C52A20 )
        v9 = qword_140C52A20;
      v4 = v9 - 1;
      v3 = 0LL;
    }
    if ( v6 < v1 || v6 == -1LL )
      break;
    if ( qword_140C52A20 <= v6 )
    {
      v10 = 0LL;
LABEL_42:
      v11 = qword_140C52A20;
      goto LABEL_43;
    }
    v11 = v6;
    v12 = qword_140C52A28 + 4 * ((unsigned __int64)(qword_140C52A20 - 1) >> 5);
    v13 = (_DWORD *)(qword_140C52A28 + 4 * (v6 >> 5));
    if ( v13 != (_DWORD *)v12 && (*v13 | *((_DWORD *)qword_140015FA0 + (v6 & 0x1F))) == -1 )
    {
      v11 = (v6 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
      for ( ++v13; (unsigned __int64)v13 < v12 && *v13 == -1; ++v13 )
        v11 += 32LL;
    }
    while ( v11 < qword_140C52A20 && _bittest64((const signed __int64 *)qword_140C52A28, v11) )
      ++v11;
    v10 = 0LL;
    if ( v13 != (_DWORD *)v12 )
    {
      v14 = v11 & 0x1F;
      if ( (~*((_DWORD *)qword_140015FA0 + v14) & *v13) == 0 )
      {
        v10 = 32 - v14;
        if ( v14 == 33 )
          goto LABEL_41;
        v15 = v13 + 1;
        while ( (unsigned __int64)v15 < v12 && !*v15 )
        {
          ++v15;
          v10 += 32LL;
          if ( v10 == -1LL )
            goto LABEL_41;
        }
      }
    }
    for ( j = v10 + v11; j < qword_140C52A20 && !_bittest64((const signed __int64 *)qword_140C52A28, j) && v10 != -1LL; ++j )
      ++v10;
LABEL_41:
    if ( !v10 )
      goto LABEL_42;
LABEL_43:
    v17 = v11 - v6;
    result = sub_14058CF54(a1, v6, v17);
    v1 = v17 + v10 + v6;
  }
  while ( v1 < qword_140C52A20 );
  return result;
}
