/*
 * XREFs of sub_14033B770 @ 0x14033B770
 * Callers:
 *     sub_14024E3F0 @ 0x14024E3F0 (sub_14024E3F0.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_14045B962 @ 0x14045B962 (sub_14045B962.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

__int64 __fastcall sub_14033B770(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  _QWORD *v10; // r15
  unsigned int v11; // r10d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // r12
  unsigned int v15; // ebp
  signed __int32 v16; // ecx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  _QWORD *v26; // r12
  __int64 v27; // r13
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  int v31; // edx
  unsigned int v32; // r15d
  unsigned __int64 v33; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v35; // rbx
  unsigned int v36; // ebp
  unsigned int v37; // ebp
  char v38; // bp
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  char v41; // al
  unsigned __int64 v42; // rbx
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-58h]
  __int128 v52; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v53; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v54; // [rsp+C0h] [rbp+18h]

  v7 = a3;
  v8 = a2;
  v52 = 0LL;
  if ( !a3 )
    return 1LL;
  v51 = a2 + 8 * a3;
  v10 = 0LL;
  sub_140339C20(0LL, a5 + 1, (__int64)&v52);
  v12 = v11;
  v13 = v11 + 1;
  v14 = v11;
  v53 = v11;
  v15 = v11;
  if ( a7 != (_QWORD *)v11 && (*(_DWORD *)(a1 + 4) & 8) != 0 )
  {
    v12 = 0x20000;
    v15 = v11 + 1;
    v14 = ((a6 & 2) != 0) - 1LL;
    if ( (a6 & 2) != 0 )
      v12 = v11;
    v53 = v12;
  }
LABEL_3:
  v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v52, v13);
  v17 = DWORD2(v52) & v16 | HIDWORD(v52);
  while ( 1 )
  {
    if ( v15 && (v18 = sub_1402EB440(a1, 3, v17, 0, (_QWORD *)v14, v12), v18 != -1)
      || (v18 = sub_1403250B0(a1, v17, 0), v18 != -1) )
    {
      v19 = 48 * v18 - 0x220000000000LL;
      *(_QWORD *)v19 = v10;
      v10 = (_QWORD *)v19;
      if ( !--v7 )
      {
        v20 = (__int64)a7;
        if ( a7 )
          v21 = sub_1402CBD10(v8, 0LL, 536870913) | 0x40;
        else
          v21 = sub_1402CBD10(v8, 0LL, -1610612732);
        v22 = 0LL;
        v49 = 0LL;
        v54 = sub_1402CF4F0((__int64)&unk_140C53A80);
        v25 = 0xFFFFFFFFFF000LL;
        v26 = a7;
        while ( 1 )
        {
          v27 = *(_QWORD *)v19;
          v21 ^= (v21 ^ (0xAAAAAAAAAAAAB000uLL * ((v19 + 0x220000000000LL) >> 4))) & 0xFFFFFFFFFF000LL;
          if ( v22 )
          {
            if ( (v8 & 0xFFF) != 0 )
              goto LABEL_13;
            sub_14020D8D0((__int64)&unk_140C53A80, v22);
          }
          v22 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v49 = v22;
          sub_14031DE00((__int64)&unk_140C53A80, v22, 0LL, v24);
LABEL_13:
          v47 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v47, v25, v23, v24);
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
          if ( v20 )
          {
            sub_1402E5708(v19, 1u, 1u);
            sub_14045B962(v19, v19, a4, 0, 0);
            *(_QWORD *)(v19 + 8) = v8;
            sub_14033C300(v19, 3LL);
            *v26 = 0xAAAAAAAAAAAAAAABuLL * ((v19 + 0x220000000000LL) >> 4);
          }
          else
          {
            v28 = *(_QWORD *)v8;
            if ( sub_140317A80(v8)
              && (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v28 & 1) != 0
              && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
            {
              v45 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v45 )
              {
                v46 = *(_QWORD *)(v45 + 8 * ((v8 >> 3) & 0x1FF));
                if ( (v46 & 0x20) != 0 )
                  v28 |= 0x20uLL;
                if ( (v46 & 0x42) != 0 )
                  v28 |= 0x42uLL;
              }
            }
            if ( v28 )
              v29 = v28 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
            else
              v29 = sub_1402CCC50(128LL);
            v48 = v29;
            sub_14033C3A0(&v48, 0LL);
            v30 = v48;
            *(_QWORD *)v19 &= 0xFFFFFFFFFFFFC00FuLL;
            *(_QWORD *)(v19 + 16) = v30 & 0xFFFFFFFFFC00FFFFuLL;
            v32 = sub_14033D7D0((unsigned int)(v31 + 4));
            *(_WORD *)(v19 + 32) = 1;
            v50 = sub_140317A10(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v33 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFFLL;
            sub_14033C3E0(v19, v33);
            CurrentThread = KeGetCurrentThread();
            v35 = 48 * v33 - 0x220000000000LL;
            v36 = *((_DWORD *)CurrentThread + 346);
            if ( (v36 & 0x100) != 0 )
              v37 = v36 >> 9;
            else
              LOBYTE(v37) = sub_14033D720(CurrentThread);
            sub_140239060(v35);
            *(_QWORD *)(v35 + 24) ^= (*(_QWORD *)(v35 + 24) ^ (*(_QWORD *)(v35 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v32 )
              sub_140267E78(v19, v32, 1);
            sub_14033C33C(v19, 0LL, 1LL);
            v38 = *(_BYTE *)(v19 + 35) ^ v37;
            v39 = *(_QWORD *)(v19 + 24) & 0xC000000000000000uLL | 1;
            *(_QWORD *)(v19 + 8) = v8;
            *(_QWORD *)(v19 + 24) = v39;
            LOBYTE(v39) = *(_BYTE *)(v19 + 34);
            *(_BYTE *)(v19 + 35) ^= v38 & 7;
            *(_BYTE *)(v19 + 34) = v39 & 0xF8 | 6;
            *(_BYTE *)(v19 + 34) |= 0x10u;
            sub_14033C300(v19, 2LL);
            v40 = *(_QWORD *)v19 ^ (*(_QWORD *)v19 ^ (a4 >> 3)) & 0xFFFFFFFFFFELL;
            *(_QWORD *)v19 = v40;
            if ( a4 && (v40 & 1) == 0 )
              *(_QWORD *)v19 = v40 | 1;
            v41 = *(_BYTE *)(v19 + 35);
            *(_QWORD *)(v19 + 16) |= 0x3E0uLL;
            v22 = v49;
            v20 = (__int64)a7;
            *(_BYTE *)(v19 + 35) = v41 & 0xF8 | 5;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v42 = v21;
          if ( sub_140317A80(v8) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              if ( !HIBYTE(word_140C51864) && (v21 & 1) != 0 )
                v42 = v21 | 0x8000000000000000uLL;
              *(_QWORD *)v8 = v42;
              sub_1402294F0(v8, v42);
              goto LABEL_28;
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v21 & 1) != 0 )
              v42 = v21 | 0x8000000000000000uLL;
          }
          *(_QWORD *)v8 = v42;
LABEL_28:
          v8 += 8LL;
          ++v26;
          v19 = v27;
          v25 = 0xFFFFFFFFFF000LL;
          if ( v8 >= v51 )
          {
            if ( v22 )
              sub_14020D8D0((__int64)&unk_140C53A80, v22);
            sub_1402B0CE0((__int64)&unk_140C53A80, v54);
            return 1LL;
          }
        }
      }
      v12 = v53;
      v13 = 1;
      goto LABEL_3;
    }
    if ( (a6 & 2) != 0 )
      break;
    sub_1405B8348(a1);
    v12 = v53;
  }
  if ( v10 )
  {
    do
    {
      v44 = (_QWORD *)*v10;
      sub_140268408((__int64)v10);
      v10 = v44;
    }
    while ( v44 );
  }
  return 0LL;
}
