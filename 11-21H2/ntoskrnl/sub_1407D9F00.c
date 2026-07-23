/*
 * XREFs of sub_1407D9F00 @ 0x1407D9F00
 * Callers:
 *     sub_140882180 @ 0x140882180 (sub_140882180.c)
 * Callees:
 *     sub_1402009E4 @ 0x1402009E4 (sub_1402009E4.c)
 *     sub_14035FA80 @ 0x14035FA80 (sub_14035FA80.c)
 *     sub_14035FAC0 @ 0x14035FAC0 (sub_14035FAC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407D9BE8 @ 0x1407D9BE8 (sub_1407D9BE8.c)
 *     sub_1407D9CC0 @ 0x1407D9CC0 (sub_1407D9CC0.c)
 *     sub_1407DA200 @ 0x1407DA200 (sub_1407DA200.c)
 *     sub_140882104 @ 0x140882104 (sub_140882104.c)
 */

char sub_1407D9F00()
{
  _SLIST_ENTRY *v0; // rbx
  _SLIST_ENTRY *v1; // rdi
  void *v2; // r12
  PSLIST_ENTRY v3; // rax
  __int64 v4; // rdx
  _SLIST_ENTRY *v5; // rcx
  _SLIST_ENTRY *v6; // r15
  _SLIST_ENTRY *v7; // rsi
  _SLIST_ENTRY *v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbp
  _SLIST_ENTRY *Next; // r14
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  _SLIST_ENTRY *v21; // rcx
  _SLIST_ENTRY *v22; // r14
  unsigned __int64 v23; // rbp
  __int64 v24; // rax
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-88h] BYREF
  __int128 v28; // [rsp+38h] [rbp-80h] BYREF
  __int128 v29; // [rsp+48h] [rbp-70h] BYREF
  __int128 v30; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 Src; // [rsp+68h] [rbp-50h] BYREF
  int v32; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+74h] [rbp-44h]
  int v34; // [rsp+7Ch] [rbp-3Ch]

  v28 = 0LL;
  DWORD2(v28) = 1;
  v0 = 0LL;
  v30 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v29 = 0LL;
  v27 = sub_1407D9BE8();
  if ( v27 < 0 )
    return 0;
  v3 = ExpInterlockedFlushSList(&ListHead);
  if ( !v3 )
    return 1;
  do
  {
    v5 = v3;
    v6 = v0;
    v3 = v3->Next;
    v5->Next = v0;
    v0 = v5;
  }
  while ( v3 );
  while ( 1 )
  {
    v7 = v0;
    v33 = 0LL;
    v8 = v0;
    v0 = v6;
    v9 = MEMORY[0xFFFFF78000000004] * HIDWORD(*((_QWORD *)&v7[1].Next + 1));
    v10 = (MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*((_QWORD *)&v7[1].Next + 1)) >> 24;
    HIDWORD(v33) = dword_140C5451C
                 + ((((MEMORY[0xFFFFF78000000004] * ((unsigned __int64)v7[1].Next >> 32)) << 8)
                   + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v7[1].Next) >> 24)) >> 10);
    v32 = HIDWORD(v33);
    v34 = dword_140C5451C + (((v9 << 8) + v10) >> 10);
    Src = 163851LL;
    sub_1407D9CC0(&Src, v4, MEMORY[0xFFFFF78000000004]);
    if ( *((int *)&v7->Next + 2) > 1 )
      break;
    *((_QWORD *)&v29 + 1) = *((unsigned int *)&v7->Next + 3);
    *(_QWORD *)&v29 = 94215LL;
    sub_1407D9CC0((unsigned __int64 *)&v29, v11, v12);
    if ( *((int *)&v7->Next + 2) > 1 )
      break;
    v13 = *((_QWORD *)&v7[3].Next + 1);
    Next = v7[3].Next;
    if ( v13 == 1 )
    {
      LODWORD(v13) = LODWORD(v7[4].Next) + 1;
    }
    else if ( v13 && !sub_14035FAC0(*((_QWORD *)&v7[3].Next + 1)) )
    {
      v15 = v27;
      goto LABEL_14;
    }
    v2 = &v7[4].Next + 1;
    v1 = (_SLIST_ENTRY *)((char *)v7 + 72);
    if ( (_SLIST_ENTRY *)(&v7[4].Next + 1) < v7[2].Next )
    {
      while ( sub_1407DA200(v13, (_DWORD)v1, (unsigned int)&v28, (_DWORD)Next, 0) )
      {
        v1 = (_SLIST_ENTRY *)((char *)v1 + 8);
        if ( v1 >= v7[2].Next )
          goto LABEL_12;
      }
      v15 = -1073741432;
      goto LABEL_17;
    }
LABEL_12:
    v15 = v27;
    if ( v27 < 0 )
      goto LABEL_17;
LABEL_13:
    v16 = (unsigned int)*((_QWORD *)&v7[1].Next + 1);
    v17 = HIDWORD(*((_QWORD *)&v7[1].Next + 1));
    *(_QWORD *)&v30 = 147463LL;
    v18 = (MEMORY[0xFFFFF78000000004] * v17) << 8;
    v19 = dword_140C5451C + (unsigned int)((v18 + (((unsigned __int64)MEMORY[0xFFFFF78000000004] * v16) >> 24)) >> 10);
    *((_QWORD *)&v30 + 1) = (unsigned int)v19;
    sub_1407D9CC0((unsigned __int64 *)&v30, v18, v19);
LABEL_14:
    sub_14035FA80(v8, 0);
    if ( !v6 )
      goto LABEL_20;
    v6 = v6->Next;
  }
  v22 = v7[2].Next;
  if ( (unsigned __int64)v22 > *((_QWORD *)&v7[2].Next + 1) )
    goto LABEL_12;
  while ( 1 )
  {
    v23 = (unsigned __int64)v22->Next;
    v27 = 0;
    v24 = sub_140882104(&unk_140C4E978, &v27, 1LL);
    if ( !v24 )
      break;
    v25 = (unsigned __int64 *)(16LL * (unsigned int)v27 + ((v24 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
    v26 = *v25 & 0xFFFFFFFFFFFC6007uLL;
    v25[1] = v23;
    *v25 = v26 | 0x6007;
    v22 = (_SLIST_ENTRY *)((char *)v22 + 8);
    v27 = 0;
    if ( (unsigned __int64)v22 > *((_QWORD *)&v7[2].Next + 1) )
    {
      v15 = 0;
      goto LABEL_13;
    }
  }
  v7[2].Next = v22;
  v15 = -1073741670;
LABEL_17:
  if ( *((int *)&v7->Next + 2) <= 1 )
  {
    memmove(v2, v1, ((char *)v7[2].Next - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v7[2].Next = (_SLIST_ENTRY *)((char *)v7[2].Next - 8 * (((char *)v1 - (_BYTE *)v2) >> 3));
  }
  sub_1402009E4(v7);
LABEL_20:
  if ( v15 >= 0 )
    return 1;
  if ( v6 )
  {
    do
    {
      v21 = v0;
      v0 = v0->Next;
      sub_1402009E4(v21);
    }
    while ( v0 );
  }
  return 0;
}
