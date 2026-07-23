/*
 * XREFs of sub_1403C7090 @ 0x1403C7090
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_1403C6E24 @ 0x1403C6E24 (sub_1403C6E24.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall sub_1403C7090(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        int a7)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  int v11; // ebp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned int v16; // ebp
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // al
  __int64 v23; // r9
  unsigned __int8 v24; // r14
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbx
  int v27; // r12d
  unsigned __int64 *v28; // r14
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  int v32; // r12d
  bool v33; // zf
  __int64 v34; // rcx
  volatile LONG *v35; // rbx
  bool v36; // zf
  unsigned __int64 v38; // [rsp+78h] [rbp+10h]
  unsigned __int64 v40; // [rsp+88h] [rbp+20h]
  unsigned __int8 v41[8]; // [rsp+98h] [rbp+30h]

  v8 = qword_14001C780[a5];
  v9 = a3;
  v38 = v8;
  v10 = a1;
  v11 = a6 & 7;
  v40 = a4 / v8;
  v12 = a4 / v8;
  v13 = v8 * (a4 / v8);
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v9 <= qword_140C50840 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    a7 = *(unsigned __int8 *)(48 * v9 - 0x21FFFFFFFFDELL) >> 6;
  if ( a7 )
  {
    if ( a7 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v16 = v11 | 0xA0000000;
  if ( !(a4 % v8) )
    goto LABEL_6;
  v28 = (unsigned __int64 *)(v14 + 8 * v13);
  v29 = v14 + 8 * a4;
  v30 = sub_1402CBD10(0LL, v13 + v9, v16);
  if ( (unsigned __int64)v28 >= v29 )
    goto LABEL_33;
  do
  {
    v31 = v30;
    v32 = 0;
    if ( !sub_140317A80((unsigned __int64)v28) )
      goto LABEL_29;
    if ( (unsigned int)sub_140229550() )
    {
      v32 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_29;
      v33 = (v30 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_29;
      v33 = (v30 & 1) == 0;
    }
    if ( !v33 )
      v31 = v30 | 0x8000000000000000uLL;
LABEL_29:
    *v28 = v31;
    if ( v32 )
      sub_1402294F0((__int64)v28, v31);
    ++v28;
    v30 ^= (v30 ^ (v30 + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( (unsigned __int64)v28 < v29 );
  v10 = a1;
  v8 = v38;
LABEL_33:
  v12 = v40;
  v9 = a3;
LABEL_6:
  v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !a5 )
  {
    v34 = 1LL;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v34;
    }
    while ( v34 );
  }
  v18 = sub_1402CBD10(0LL, v9, v16 | 0x4000000);
  v19 = 0LL;
  v20 = v17 + 8 * v12;
  v21 = v18;
  if ( a5 )
  {
    v22 = sub_1402CF4F0(v10);
  }
  else
  {
    v35 = (volatile LONG *)sub_140282AD0(v10);
    v22 = ExAcquireSpinLockExclusive(v35);
    *((_DWORD *)v35 + 1) = 0;
  }
  v41[0] = v22;
  v24 = v22;
  if ( v17 < v20 )
  {
    v25 = v8 << 12;
    while ( 1 )
    {
      if ( !a5 )
        goto LABEL_14;
      if ( v19 )
      {
        if ( (v17 & 0xFFF) != 0 )
          goto LABEL_14;
        sub_14020D8D0(v10, v19);
      }
      v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      sub_14031DE00(v10, v19, 0LL, v23);
LABEL_14:
      v26 = v21;
      v27 = 0;
      if ( sub_140317A80(v17) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v27 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v36 = (v21 & 1) == 0;
            goto LABEL_51;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v36 = (v21 & 1) == 0;
LABEL_51:
          if ( !v36 )
            v26 = v21 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v17 = v26;
      if ( v27 )
        sub_1402294F0(v17, v26);
      v17 += 8LL;
      v21 ^= (v21 ^ (v25 + v21)) & 0xFFFFFFFFFF000LL;
      if ( v17 >= v20 )
      {
        v24 = v41[0];
        break;
      }
    }
  }
  if ( a5 )
  {
    if ( v19 )
      sub_14020D8D0(v10, v19);
    sub_1402B0CE0(v10, v24);
  }
  else
  {
    sub_14030FA80(v10, v24);
  }
}
