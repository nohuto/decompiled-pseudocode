/*
 * XREFs of sub_14033A920 @ 0x14033A920
 * Callers:
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232E74 @ 0x140232E74 (sub_140232E74.c)
 *     sub_140234EB4 @ 0x140234EB4 (sub_140234EB4.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 */

__int64 __fastcall sub_14033A920(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  ULONG_PTR v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  char v27; // al
  unsigned __int64 v28; // rax
  char v29; // al
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  int v32; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]
  unsigned __int64 v34; // [rsp+50h] [rbp-38h] BYREF
  int v35; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  result = sub_140273AF0((unsigned __int64)a3, 0LL);
  if ( result )
  {
    v8 = 48 * sub_14033AC10(a3) - 0x220000000000LL;
    v10 = sub_1402738F0(a3, 0LL);
    if ( !v10 )
    {
      LOBYTE(v9) = 17;
      sub_140334790(v8, v9, v11, v12);
      return 0LL;
    }
    v13 = sub_140317A10((unsigned __int64)a3);
    v34 = v13;
    if ( (v13 & 1) != 0 )
    {
      v17 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
      goto LABEL_5;
    }
    if ( (v13 & 0x400) == 0 && (v13 & 0x800) != 0 )
    {
      v17 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v10 + 34) & 0x20) == 0 )
      {
        if ( (sub_140326870(v10, 0) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
          v29 = *(_BYTE *)(v10 + 34);
          ++*(_WORD *)(v10 + 32);
          *(_BYTE *)(v10 + 34) = v29 & 0xF8 | 6;
          v30 = sub_140234EB4((__int64)a3);
          v33 = v30;
          v34 = v30;
          if ( (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 && (unsigned int)sub_140232E74(v17, *(_QWORD *)(v10 + 16)) )
            v6 = sub_14033C2A0(v10);
          if ( sub_140317A80((unsigned __int64)a3) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v31 = v33;
              if ( !HIBYTE(word_140C51864) && (v33 & 1) != 0 )
                v31 = v33 | 0x8000000000000000uLL;
              *a3 = v31;
              sub_1402294F0((__int64)a3, v31);
              goto LABEL_5;
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
            {
              v30 = v33;
              if ( (v33 & 1) != 0 )
                v30 = v33 | 0x8000000000000000uLL;
            }
            else
            {
              v30 = v33;
            }
          }
          *a3 = v30;
LABEL_5:
          v18 = *(_QWORD *)(v10 + 24);
          *(_QWORD *)(v10 + 24) = v18 ^ ((v18 + 1) ^ v18) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v35, v18, v15, v16);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          *(_BYTE *)(v8 + 34) &= ~0x20u;
          sub_140336AD8(v8);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v6 )
            sub_1402E20D0(v17, v6, 1);
          v19 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFFLL;
          v20 = 48 * v19 - 0x220000000000LL;
          v21 = *(_QWORD *)(v20 + 16);
          v23 = 48 * sub_14033AC10(a1) - 0x220000000000LL;
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v32, v22, v24, v25);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 = (unsigned __int8)v21 >> 5;
          v27 = *(_BYTE *)(v20 + 34) >> 6;
          if ( v27 != 1 )
          {
            if ( v27 )
            {
              if ( v27 == 2 )
                v26 |= 0x18u;
            }
            else
            {
              v26 |= 8u;
            }
          }
          v28 = sub_1402CBD10(a1, v19, v26);
          if ( (unsigned int)sub_140322F10(a2, a1, (_QWORD *)v20, 0, v28, 0, 0LL) )
            return 1LL;
          sub_140228660(v20, 0);
          sub_140228660(v23, 0);
          return 0LL;
        }
        sub_1403941B0(v10, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v14) = 17;
    sub_140334790(v8, v14, v15, v16);
    return 0LL;
  }
  return result;
}
