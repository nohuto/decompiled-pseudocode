/*
 * XREFs of sub_140270A00 @ 0x140270A00
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14024D050 @ 0x14024D050 (sub_14024D050.c)
 *     sub_140271020 @ 0x140271020 (sub_140271020.c)
 *     sub_140273A80 @ 0x140273A80 (sub_140273A80.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 */

char __fastcall sub_140270A00(__int64 a1)
{
  int v1; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 *v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // r12
  _DWORD *v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  volatile signed __int64 *v25; // rbx
  unsigned __int64 v26; // rdi
  unsigned int v27; // ecx
  int v28; // ebx
  __int64 v29; // rdx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int8 v35[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-CCh]
  __int64 v37; // [rsp+38h] [rbp-C8h]
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-88h]
  _QWORD v45[16]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v39 = 0LL;
  v42 = a1;
  LODWORD(CurrentThread) = v1 & 0xF80;
  v3 = a1;
  v38 = 0LL;
  if ( (_DWORD)CurrentThread == 128 )
    return (char)CurrentThread;
  if ( (v1 & 0x200000) == 0 )
  {
    LOBYTE(CurrentThread) = v1 & 0x70;
    if ( (v1 & 0x70) == 0x20 && (v1 & 0x400000) != 0 )
      return (char)CurrentThread;
  }
  LODWORD(CurrentThread) = sub_14030EC40(a1);
  if ( (_DWORD)CurrentThread )
    return (char)CurrentThread;
  CurrentThread = *(struct _KTHREAD **)(v4 + 72);
  v5 = *(_QWORD *)CurrentThread;
  if ( (*(_DWORD *)(*(_QWORD *)CurrentThread + 56LL) & 0x8000000) != 0 )
    return (char)CurrentThread;
  v6 = 0LL;
  v36 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(v5 + 32);
  v8 = 0;
  v40 = 0LL;
  v9 = *((_QWORD *)CurrentThread + 23) + 1664LL;
  v41 = v9;
  if ( !v7 )
    return (char)CurrentThread;
  v10 = *(unsigned int *)(v3 + 24);
  v37 = 0LL;
  v11 = *(unsigned __int8 *)(v3 + 32);
  v12 = *(unsigned __int64 **)(v3 + 80);
  v35[0] = 17;
  v13 = 8 * ((v10 | (v11 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v38) |= 4u;
  v15 = 8 * v14 - 0x98000000000LL;
  v44 = v15;
  *(_QWORD *)&v38 = v9;
  BYTE12(v38) = sub_1402CF4F0(v9);
  if ( v13 > v15 )
    goto LABEL_66;
  while ( 1 )
  {
    v18 = v6;
    if ( (unsigned __int64)v12 > *(_QWORD *)(v3 + 88) || !v7 )
    {
LABEL_61:
      v31 = v36;
LABEL_62:
      if ( v37 )
        sub_140334790(v37, v35[0]);
      if ( v31 )
        sub_1402CB710(&v38, v6, v45, v31);
      goto LABEL_66;
    }
    if ( v8
      && (v8 & 8) == 0
      && ((*(_BYTE *)(v41 + 184) & 7) == 2 ? (v19 = &unk_140C53D00) : (v19 = (_DWORD *)(v41 + 192)),
          (*v19 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      v28 = 1;
    }
    else
    {
      if ( v39 && (v13 & 0xFFF) != 0 )
        goto LABEL_19;
      v28 = 2;
    }
    if ( v37 )
    {
      sub_140334790(v37, v35[0]);
      v37 = 0LL;
    }
    if ( v36 )
    {
      if ( !(unsigned int)sub_1402CB710(&v38, v6, v45, v36) )
        goto LABEL_74;
      v36 = 0;
    }
    v29 = v39;
    if ( v39 )
    {
      sub_14020D8D0(v41, v39);
      v39 = 0LL;
    }
    if ( v28 == 1 )
    {
      sub_14024D050((__int64 *)&v38, v29);
      v30 = *(_DWORD *)(v42 + 48);
      sub_1402CF4F0(v41);
    }
    else
    {
      v30 = *(_DWORD *)(v42 + 48);
    }
    sub_14032CE60(v13, 0, (v30 >> 12) & 0x7F, BYTE12(v38), 0);
    v39 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_19:
    ++v8;
    if ( *(_QWORD *)v13 )
      goto LABEL_39;
    if ( ((unsigned __int16)v12 & 0xFFF) != 0 )
    {
      if ( v37 )
        break;
    }
    else if ( v37 )
    {
      sub_140334790(v37, v35[0]);
      v37 = 0LL;
    }
    if ( v36 )
    {
      if ( !(unsigned int)sub_1402CB710(&v38, v6, v45, v36) )
      {
LABEL_74:
        v31 = 0;
        goto LABEL_62;
      }
      v36 = 0;
    }
    v37 = sub_140273AF0(v12, v35);
    if ( v37 )
      break;
    v16 = v39;
    v33 = (4096 - ((unsigned __int16)v12 & 0xFFF)) & 0xFFFFFFF8;
    v12 = (unsigned __int64 *)((char *)v12 + v33);
    v13 += v33;
    if ( v39 && v39 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      sub_14020D8D0(v41, v39);
      v39 = 0LL;
    }
LABEL_40:
    v6 = v40;
    if ( v13 > v44 )
      goto LABEL_61;
    v3 = v42;
  }
  if ( (*(_BYTE *)v12 & 1) == 0 )
    goto LABEL_39;
  v20 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v21 = *v12;
          v22 = *v12;
          if ( (*v12 & 1) != 0 )
            break;
          if ( (*v12 & 0xC00) != 0x800 )
            goto LABEL_39;
          if ( (unsigned int)sub_140273A80(*v12, v16, v20, v17) )
          {
            v22 = v21;
            if ( qword_140C50780 && (v21 & 0x10) == 0 )
              v22 = v21 & ~qword_140C50780;
            break;
          }
        }
        v23 = (v22 >> 12) & 0xFFFFFFFFFFLL;
        if ( v23 > qword_140C50840 )
          continue;
        break;
      }
      v16 = 6 * v23;
      if ( !_bittest64((const signed __int64 *)(48 * v23 - 0x21FFFFFFFFD8LL), 0x36u) )
        continue;
      break;
    }
    v24 = 48 * v23 - 0x220000000000LL;
    v43 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v43);
        while ( *(__int64 *)(v24 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( *v12 != v21 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), v20);
      continue;
    }
    break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
  {
    v24 = sub_14059A31C(v24, 0LL);
    v20 = 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( !v24 )
    goto LABEL_39;
  v25 = (volatile signed __int64 *)(v24 + 24);
  if ( (*(_BYTE *)v12 & 1) == 0 || (--v7, (*(_DWORD *)(v24 + 16) & 0x400LL) == 0) || (*(_BYTE *)(v24 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64(v25, v20);
LABEL_39:
    ++v12;
    v13 += 8LL;
    goto LABEL_40;
  }
  if ( !(unsigned int)sub_140271020((__int64)(v13 << 25) >> 16, v24, v20, v42) )
  {
    _InterlockedAnd64(v25, 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_39;
  }
  v16 = 0x3FFFFFFFFFFFFFFFLL;
  v26 = 0xAAAAAAAAAAAAAAABuLL * ((v24 + 0x220000000000LL) >> 4);
  *v25 ^= (*v25 ^ (*v25 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64(v25, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v26 == -1LL )
    goto LABEL_39;
  v27 = v36;
  v45[v36] = v26;
  if ( !v27 )
  {
    v40 = v13;
    v36 = 1;
    goto LABEL_39;
  }
  v40 = v18;
  v36 = v27 + 1;
  if ( v27 != 15 )
    goto LABEL_39;
  sub_140334790(v37, v35[0]);
  v37 = 0LL;
  if ( (unsigned int)sub_1402CB710(&v38, v18, v45, 16LL) )
  {
    v36 = 0;
    v40 = v18;
    goto LABEL_39;
  }
LABEL_66:
  v32 = v39;
  if ( v39 )
  {
    sub_14020D8D0(v41, v39);
    v39 = 0LL;
  }
  LOBYTE(CurrentThread) = sub_14024D050((__int64 *)&v38, v32);
  return (char)CurrentThread;
}
