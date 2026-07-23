/*
 * XREFs of sub_140B53B88 @ 0x140B53B88
 * Callers:
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89E7C @ 0x140A89E7C (sub_140A89E7C.c)
 *     sub_140A9A588 @ 0x140A9A588 (sub_140A9A588.c)
 *     sub_140A9A8C4 @ 0x140A9A8C4 (sub_140A9A8C4.c)
 *     sub_140A9AE5C @ 0x140A9AE5C (sub_140A9AE5C.c)
 */

int sub_140B53B88()
{
  __int64 *v0; // rcx
  BOOL v1; // ebp
  unsigned __int64 v2; // rax
  __int64 *v3; // rsi
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdx
  int v8; // edx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v0 = qword_140D6A8E0;
  v13[0] = 0LL;
  v1 = (dword_140C1AA7C & 1) == 0;
  v2 = ((unsigned __int64)(unsigned int)dword_140D68150 - 2) >> 1;
  v3 = (__int64 *)((char *)qword_140D6A8E0 + 2 * v2);
  if ( qword_140D6A8E0 >= v3 )
    return v2;
  v4 = 0x100002601LL;
  while ( 1 )
  {
    v5 = *(unsigned __int16 *)v0;
    if ( (unsigned int)v5 <= 0x20 && _bittest64(&v4, v5) || (_WORD)v5 == 12288 )
    {
      v6 = v0;
      goto LABEL_29;
    }
    if ( (_DWORD)v5 == 42 && v1 )
    {
      dword_140C1AA70 = 1;
      return v2;
    }
    v6 = (__int64 *)((char *)v0 + 2);
    if ( (_DWORD)v5 == 34 )
      break;
    while ( v6 < v3 )
    {
      v7 = *(unsigned __int16 *)v6;
      if ( (unsigned int)v7 <= 0x20 )
      {
        if ( _bittest64(&v4, v7) )
          break;
      }
      if ( (_WORD)v7 == 12288 )
        break;
      v6 = (__int64 *)((char *)v6 + 2);
    }
LABEL_18:
    v8 = 2 * (((char *)v6 - (char *)v0) >> 1);
    if ( !v8 )
      goto LABEL_29;
    LODWORD(v2) = v8 + 2;
    LOWORD(v13[0]) = 2 * (((char *)v6 - (char *)v0) >> 1);
    WORD1(v13[0]) = v8 + 2;
    if ( (unsigned __int16)(v8 + 2) < (unsigned __int16)v8 )
      return v2;
    *((_QWORD *)&v13[0] + 1) = v0;
    if ( v1 )
    {
      v2 = sub_140A9A588((const void **)v13);
      v9 = (_QWORD *)v2;
      if ( v2 )
      {
        sub_140A89D58();
        sub_140A9A8C4(v9);
LABEL_26:
        LODWORD(v2) = sub_140A89E7C();
      }
    }
    else
    {
      v2 = sub_140A9AE5C((unsigned __int16 *)v13, 0x44456656u);
      v10 = (_QWORD *)v2;
      if ( v2 )
      {
        sub_140A89D58();
        v11 = (_QWORD *)qword_140C1ADC8;
        if ( *(__int64 **)qword_140C1ADC8 != &qword_140C1ADC0 )
          __fastfail(3u);
        *v10 = &qword_140C1ADC0;
        v10[1] = v11;
        *v11 = v10;
        qword_140C1ADC8 = (__int64)v10;
        goto LABEL_26;
      }
    }
    v4 = 0x100002601LL;
LABEL_29:
    v0 = (__int64 *)((char *)v6 + 2);
    if ( (__int64 *)((char *)v6 + 2) >= v3 )
      return v2;
  }
  v0 = (__int64 *)((char *)v0 + 2);
  while ( 1 )
  {
    v6 = (__int64 *)((char *)v6 + 2);
    if ( v6 >= v3 )
      return v2;
    if ( *(_WORD *)v6 == 34 )
      goto LABEL_18;
  }
}
