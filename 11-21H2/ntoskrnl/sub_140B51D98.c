/*
 * XREFs of sub_140B51D98 @ 0x140B51D98
 * Callers:
 *     sub_140AF65CC @ 0x140AF65CC (sub_140AF65CC.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_14057F840 @ 0x14057F840 (sub_14057F840.c)
 *     sub_140AF66DC @ 0x140AF66DC (sub_140AF66DC.c)
 */

__int64 *__fastcall sub_140B51D98(unsigned int a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // r12
  __int64 *v3; // r15
  unsigned __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

  v1 = a1;
  if ( !dword_140D686E0 )
  {
    dword_140D686E0 = 64;
    qword_140D686E8 = (__int64)&qword_140D68868;
  }
  v2 = qword_140D068D0;
  v3 = &qword_140D690E0[5 * a1];
  while ( 2 )
  {
    v4 = 0LL;
    v5 = (unsigned __int16)word_140D05000;
    if ( !_bittest64((const signed __int64 *)qword_140D686E8, v1) )
      v5 = v1;
    v6 = (unsigned __int64)sub_14057F840(v2, v5);
    if ( !v6 )
    {
      v7 = (unsigned __int16)word_140D05000;
      if ( v5 == (unsigned __int16)word_140D05000 )
        return 0LL;
      v5 = (unsigned __int16)word_140D05000;
      _bittestandset((signed __int32 *)qword_140D686E8, v1);
      v6 = (unsigned __int64)sub_14057F840(v2, v7);
      if ( !v6 )
        return 0LL;
    }
    do
    {
      v8 = *(_DWORD *)(v6 + 24);
      if ( v8 == 2 || v8 == 24 )
      {
        if ( *((_DWORD *)sub_1402C1550(*(_QWORD *)(v6 + 32)) + 2) == (_DWORD)v1
          || _bittest64((const signed __int64 *)qword_140D686E8, v1) )
        {
          v4 = v6;
          goto LABEL_29;
        }
        if ( !v4 )
          v4 = v6;
      }
      v9 = *(_QWORD *)v6;
      v10 = v6;
      if ( *(_QWORD *)v6 )
      {
        while ( 1 )
        {
          v6 = v9;
          if ( !*(_QWORD *)(v9 + 8) )
            break;
          v9 = *(_QWORD *)(v9 + 8);
        }
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)(v6 + 8) == v10 )
            break;
          v10 = v6;
        }
      }
    }
    while ( v6 );
    _bittestandset((signed __int32 *)qword_140D686E8, v1);
    if ( v4 )
    {
LABEL_29:
      sub_140AF66DC((unsigned __int64 *)&qword_140D690E0[5 * v1], v4, *(_QWORD *)(v4 + 32), *(_QWORD *)(v4 + 40));
      *(_DWORD *)(v4 + 24) |= 0x40000000u;
      return &qword_140D690E0[5 * v1];
    }
    if ( v5 != (unsigned __int16)word_140D05000 )
      continue;
    break;
  }
  v3[4] = 0LL;
  return 0LL;
}
