/*
 * XREFs of sub_1402724C0 @ 0x1402724C0
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 * Callees:
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402724C0(unsigned __int64 a1, _QWORD *a2, int a3, unsigned __int64 *a4, __int64 a5, char a6)
{
  __int64 v6; // r10
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned __int64 *v9; // r15
  _QWORD *v10; // r12
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  unsigned int v19; // r15d
  unsigned int v20; // edx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r10
  unsigned __int8 CurrentIrql; // bp
  __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rax
  char v28; // al
  __int64 v29; // r9
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // r11
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v41; // r9
  int v42; // eax
  char v44; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v45; // [rsp+28h] [rbp-D0h]
  int v46; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+40h] [rbp-B8h]
  __int64 v49; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+50h] [rbp-A8h]
  __int128 v51; // [rsp+60h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-88h]
  signed __int64 v53; // [rsp+78h] [rbp-80h]
  __int128 v54; // [rsp+80h] [rbp-78h]
  __int128 v55; // [rsp+90h] [rbp-68h]
  __int128 v56; // [rsp+A0h] [rbp-58h]
  unsigned int v58; // [rsp+108h] [rbp+10h]
  unsigned __int64 *v59; // [rsp+118h] [rbp+20h]

  v59 = a4;
  v6 = 0x3FFFFFFFFFLL;
  v7 = 0LL;
  v45 = 0x3FFFFFFFFFLL;
  v8 = 0LL;
  v9 = a4;
  v10 = a2;
  v11 = a1;
  v12 = (unsigned __int64)&a2[a3];
  v13 = 0x3FFFFFFFFFLL;
  v47 = v12;
  if ( (unsigned __int64)a2 < v12 )
  {
    do
    {
      LOBYTE(v12) = 0;
      v14 = 48LL * *v10 - 0x220000000000LL;
      if ( v14 != qword_140C53280 )
      {
        LOBYTE(v12) = *(_BYTE *)(v14 + 34) & 7;
        if ( (_BYTE)v12 != 7 || *(_QWORD *)(v14 + 8) != -3LL )
        {
          v15 = *v9;
          if ( (a6 & 0x40) != 0 )
          {
            v30 = (unsigned int)sub_1402806A0(v15) == 0;
            v33 = v15;
            if ( v30 )
            {
              if ( qword_140C50780 && (v15 & 0x10) == 0 )
                v33 = v15 & ~qword_140C50780;
              v33 = *(_QWORD *)(v31 + 48 * (v32 & (*(_QWORD *)(v33 >> 16) >> 12)) + 16);
            }
            *(_QWORD *)(v14 + 16) = sub_1402CCC50(
                                      32LL * (dword_140015AB0[((unsigned __int64)v33 >> 5) & 0x1F] & 0x1F),
                                      (unsigned int)dword_140015AB0[((unsigned __int64)v33 >> 5) & 0x1F]);
            v44 = v20;
          }
          else
          {
            v16 = *v9;
            if ( (*v9 & 0xC00) == 0x800 )
            {
              if ( qword_140C50780 && (v15 & 0x10) == 0 )
                v16 = v15 & ~qword_140C50780;
              v17 = *(_QWORD *)(48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16);
              v16 = v17;
            }
            else
            {
              v17 = *v9;
            }
            v18 = v17 >> 5;
            *(_QWORD *)(v14 + 16) = v16;
            if ( (a6 & 0x10) != 0 )
              *(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL;
            v19 = v18 & 0x1F;
            v44 = v19;
            v20 = v19;
            if ( v19 == 24 )
            {
              v44 = 24;
              if ( v11 <= 0x7FFFFFFEFFFFLL )
              {
                sub_1402ED128(1LL);
                v34 = sub_1403126F0(v11);
                LOBYTE(v35) = 17;
                v36 = v34;
                sub_1402806E0(1LL, v35);
                v6 = 0x3FFFFFFFFFLL;
                v13 = v45;
                v20 = (*(_DWORD *)(v36 + 48) >> 7) & 0x1F;
                v44 = 24;
              }
            }
            v9 = v59;
          }
          v58 = 1;
          if ( v20 )
          {
            if ( v20 == 31 )
            {
              v58 = 1;
            }
            else if ( v20 >> 3 == 3 )
            {
              if ( (v20 & 7) != 0 )
                v58 = 2;
            }
            else
            {
              v58 = v20 >> 3 != 1;
            }
          }
          else
          {
            v58 = 3;
          }
          if ( v13 == v6 )
          {
            v21 = (((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v22 = *(_QWORD *)v21;
            if ( v21 >= 0xFFFFF6FB7DBED000uLL
              && v21 <= 0xFFFFF6FB7DBED7F8uLL
              && (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v22 & 1) != 0
              && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
            {
              v37 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v37 )
              {
                v38 = *(_QWORD *)(v37 + 8 * ((v21 >> 3) & 0x1FF));
                if ( (v38 & 0x20) != 0 )
                  v22 |= 0x20uLL;
                if ( (v38 & 0x42) != 0 )
                  v22 |= 0x42uLL;
              }
            }
            v49 = v22;
            v45 = ((unsigned __int64)sub_140317A10(&v49) >> 12) & 0xFFFFFFFFFFLL;
            v8 = 48 * v45 - 0x220000000000LL;
          }
          v48 = (__int64)v9;
          v23 = (__int64)v9;
          if ( (a6 & 0x20) != 0 )
          {
            v23 = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFFLL;
            v48 = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFFLL;
          }
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v29 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v29 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v46 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              do
                sub_1402F32E0(&v46);
              while ( *(__int64 *)(v14 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
            v23 = v48;
          }
          *(_BYTE *)(v14 + 34) |= 0x20u;
          if ( a5 )
            v25 = a5 + 32;
          else
            v25 = 0LL;
          *(_QWORD *)v14 = v25;
          if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v58 )
          {
            sub_140267E78(v14, v58, 1);
            v23 = v48;
          }
          *(_WORD *)(v14 + 32) = 1;
          *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
          if ( (a6 & 8) != 0 )
            *(_BYTE *)(v14 + 35) ^= (a6 ^ *(_BYTE *)(v14 + 35)) & 7;
          v26 = *(_QWORD *)(v14 + 40);
          v13 = v45;
          v52 = 0LL;
          v53 = v26;
          v50 = 0LL;
          v51 = 0LL;
          v54 = 0LL;
          v55 = 0LL;
          v56 = 0LL;
          v27 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v14 + 40),
                  v45 & 0xFFFFFFFFFFLL | v26 & 0xFFFFFF0000000000uLL,
                  v26);
          for ( *((_QWORD *)&v56 + 1) = v27; v53 != v27; *((_QWORD *)&v56 + 1) = v27 )
          {
            v53 = v27;
            v27 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v14 + 40),
                    v45 & 0xFFFFFFFFFFLL | v27 & 0xFFFFFF0000000000uLL,
                    v27);
          }
          v28 = *(_BYTE *)(v14 + 34);
          *(_QWORD *)(v14 + 8) = v23;
          *(_BYTE *)(v14 + 34) = v28 & 0xF8 | 2;
          if ( a6 < 0 )
            *(_BYTE *)(v14 + 35) |= 0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v39 = KeGetCurrentIrql();
              if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v41 = *((_QWORD *)CurrentPrcb + 4375);
                v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v30 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
                *(_DWORD *)(v41 + 20) &= v42;
                if ( v30 )
                  sub_140418E4C(CurrentPrcb);
                v13 = v45;
              }
            }
          }
          LOBYTE(v12) = CurrentIrql;
          __writecr8(CurrentIrql);
          if ( (v15 & 0xC00) != 0x800 )
          {
            v12 = 32 * (((*v10 & 0xFFFFFFFFFFLL) << 7) | v44 & 0x1F | 0x40);
            if ( qword_140C50780 )
            {
              if ( (qword_140C50780 & v12) != 0 )
                v12 |= 0x10uLL;
              else
                v12 |= qword_140C50780;
            }
            *v9 = v12;
          }
          v6 = 0x3FFFFFFFFFLL;
          v11 = a1;
          if ( (a6 & 0x40) == 0 )
            ++v7;
        }
      }
      ++v9;
      ++v10;
      v59 = v9;
    }
    while ( (unsigned __int64)v10 < v47 );
    if ( v7 )
    {
      LODWORD(v47) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v47);
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      LOBYTE(v12) = -1;
      *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + v7)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return v12;
}
