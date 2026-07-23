/*
 * XREFs of sub_140B53D38 @ 0x140B53D38
 * Callers:
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89E7C @ 0x140A89E7C (sub_140A89E7C.c)
 *     sub_140A9AE5C @ 0x140A9AE5C (sub_140A9AE5C.c)
 */

int sub_140B53D38()
{
  unsigned __int64 v0; // rax
  __int64 *v1; // rcx
  __int64 *v2; // rsi
  __int64 v3; // r12
  unsigned __int64 v4; // rdx
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdx
  int v7; // edx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = 0LL;
  LODWORD(v0) = dword_140D68154;
  if ( dword_140D68154 == -1 )
  {
    dword_140D68154 = 0;
    return v0;
  }
  v1 = qword_140D6A0E0;
  v0 = ((unsigned __int64)(unsigned int)dword_140D68154 - 2) >> 1;
  v2 = (__int64 *)((char *)qword_140D6A0E0 + 2 * v0);
  if ( qword_140D6A0E0 >= v2 )
    return v0;
  v3 = 0x100002601LL;
  while ( 1 )
  {
    v4 = *(unsigned __int16 *)v1;
    if ( ((unsigned int)v4 > 0x20 || !_bittest64(&v3, v4)) && (_WORD)v4 != 12288 )
      break;
    v5 = v1;
LABEL_25:
    v1 = (__int64 *)((char *)v5 + 2);
    if ( (__int64 *)((char *)v5 + 2) >= v2 )
      return v0;
  }
  v5 = (__int64 *)((char *)v1 + 2);
  if ( (_DWORD)v4 != 34 )
  {
    while ( v5 < v2 )
    {
      v6 = *(unsigned __int16 *)v5;
      if ( (unsigned int)v6 <= 0x20 )
      {
        if ( _bittest64(&v3, v6) )
          break;
      }
      if ( (_WORD)v6 == 12288 )
        break;
      v5 = (__int64 *)((char *)v5 + 2);
    }
LABEL_19:
    v7 = 2 * (((char *)v5 - (char *)v1) >> 1);
    if ( v7 )
    {
      LODWORD(v0) = v7 + 2;
      LOWORD(v11) = 2 * (((char *)v5 - (char *)v1) >> 1);
      WORD1(v11) = v7 + 2;
      if ( (unsigned __int16)(v7 + 2) < (unsigned __int16)v7 )
        return v0;
      *((_QWORD *)&v11 + 1) = v1;
      v0 = sub_140A9AE5C((unsigned __int16 *)&v11, 0x45586656u);
      v8 = (_QWORD *)v0;
      if ( v0 )
      {
        sub_140A89D58();
        v9 = (_QWORD *)qword_140C1ADB8;
        if ( *(__int64 **)qword_140C1ADB8 != &qword_140C1ADB0 )
          __fastfail(3u);
        *v8 = &qword_140C1ADB0;
        v8[1] = v9;
        *v9 = v8;
        qword_140C1ADB8 = (__int64)v8;
        LODWORD(v0) = sub_140A89E7C();
      }
    }
    goto LABEL_25;
  }
  v1 = (__int64 *)((char *)v1 + 2);
  while ( 1 )
  {
    v5 = (__int64 *)((char *)v5 + 2);
    if ( v5 >= v2 )
      return v0;
    if ( *(_WORD *)v5 == 34 )
      goto LABEL_19;
  }
}
