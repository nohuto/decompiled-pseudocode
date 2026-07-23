/*
 * XREFs of sub_140213558 @ 0x140213558
 * Callers:
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_1403D5614 @ 0x1403D5614 (sub_1403D5614.c)
 * Callees:
 *     sub_1402137E4 @ 0x1402137E4 (sub_1402137E4.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_1403D240C @ 0x1403D240C (sub_1403D240C.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 */

__int64 __fastcall sub_140213558(__int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rbp
  unsigned __int8 v9; // cl
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  volatile signed __int32 *v15; // rbx
  __int64 result; // rax
  int v17; // eax
  bool v18; // zf
  int v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v7 = sub_14033D7D0(a3);
  if ( v6 <= qword_140C50840 && ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v8 = 48 * v6 - 0x220000000000LL;
    if ( !*(_WORD *)(v8 + 32) )
      sub_140593B18(a2, 3uLL);
    v9 = *(_BYTE *)(v8 + 34);
    if ( (v9 & 0xC0) == 0xC0 )
    {
      sub_1403D240C(v8, v7);
      v9 = *(_BYTE *)(v8 + 34);
    }
    if ( v9 >> 6 != v7 )
      v4 = sub_14026C61C(v4, v8);
  }
  else
  {
    v4 &= 7u;
    v17 = sub_1402137E4(a2);
    if ( v17 )
    {
      if ( v17 == 2 )
        v4 |= 0x18u;
    }
    else
    {
      v4 |= 8u;
    }
  }
  v10 = sub_1402CBD10(a1, a2, v4 | 0x80000000);
  v11 = 0;
  if ( (unsigned int)sub_140317A80(a1) )
  {
    if ( (unsigned int)sub_140229550(v13, v12) )
    {
      v11 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_10;
      v18 = (v10 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_10;
      v18 = (v10 & 1) == 0;
    }
    if ( !v18 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_10:
  *a1 = v10;
  if ( v11 )
    sub_1402294F0(a1, v10);
  v14 = sub_1402D03D0((__int64)((_QWORD)a1 << 25) >> 16);
  sub_14028FB74(v14, 1LL);
  v19 = 0;
  v15 = (volatile signed __int32 *)(48
                                  * (((unsigned __int64)sub_140317A10(
                                                          (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL)
                                                        - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                  - 0x21FFFFFFFFE8LL);
  while ( _interlockedbittestandset64(v15, 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v19);
    while ( *(__int64 *)v15 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v15 ^= (*(_QWORD *)v15 ^ (*(_QWORD *)v15 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
