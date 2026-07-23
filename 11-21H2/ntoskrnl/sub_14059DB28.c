/*
 * XREFs of sub_14059DB28 @ 0x14059DB28
 * Callers:
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 * Callees:
 *     sub_140231B9C @ 0x140231B9C (sub_140231B9C.c)
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_14025A2B4 @ 0x14025A2B4 (sub_14025A2B4.c)
 *     sub_14026FA0C @ 0x14026FA0C (sub_14026FA0C.c)
 *     sub_1402708F4 @ 0x1402708F4 (sub_1402708F4.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 */

__int64 __fastcall sub_14059DB28(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  ULONG_PTR v23; // rbx
  _QWORD *v24; // r12
  __int64 v25; // rax
  ULONG_PTR v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // [rsp+20h] [rbp-10h] BYREF
  int v34; // [rsp+70h] [rbp+40h] BYREF
  __int64 v35; // [rsp+78h] [rbp+48h]
  __int64 v36; // [rsp+80h] [rbp+50h] BYREF

  v35 = a2;
  v7 = a5;
  v36 = 0LL;
  v33 = 0LL;
  v12 = 48 * a5 - 0x220000000000LL;
  v34 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v34, a2, a3, a4);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = sub_140317A10(a3);
  if ( (v13 & 0x400) != 0 )
  {
    v14 = -1LL;
  }
  else
  {
    if ( qword_140C50780 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C50780;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  }
  sub_1402E4724(v7, (__int64 *)a3, v14);
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
  *(_WORD *)(v12 + 32) = 1;
  *(_BYTE *)(v12 + 34) |= 0x20u;
  *(_QWORD *)v12 = (a1 + 32) & -(__int64)(a1 != 0);
  *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = *(_QWORD *)a2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)a2 + 72LL));
  ++*(_QWORD *)(v15 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  v16 = v35;
  v17 = *(_QWORD *)(v35 + 8) + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v17) & 0xFFFFFFFFF000LL) != 0 )
    v18 = sub_14026FA0C(v17, 0xFFFFFFFFF000LL, &v33, (__int64)&v36);
  else
    v18 = sub_1402708F4((unsigned __int64 *)v17, 0LL, &v36);
  v22 = v18;
  if ( v18 < 0 )
    goto LABEL_29;
  if ( (*(_BYTE *)(v36 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33 )
    {
      LOBYTE(v19) = 2;
      sub_140334790(v33, v19, v20, v21);
    }
    v22 = -1073740023;
LABEL_29:
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&a5, v19, v20, v21);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    sub_140231B9C(v12);
    sub_140336AD8(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v22;
  }
  v23 = 0xAAAAAAAAAAAAAAABuLL * ((v36 + 0x220000000000LL) >> 4);
  if ( (a4 & 1) != 0 )
  {
    v24 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v24 == 1 )
    {
      sub_140232E08(v24);
      *(_DWORD *)(a1 + 192) |= 8u;
    }
  }
  *(_QWORD *)(a1 + 168) = sub_140317A10(a3);
  *(_QWORD *)(a1 + 232) = a3;
  if ( (int)sub_14033D760((__int64)KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x80u;
  v25 = a7;
  v26 = a5;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = v26;
  v27 = sub_1403342D0(v16, a3, *(_DWORD *)(v25 + 64));
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v16;
  v28 = a6;
  *(_QWORD *)(a1 + 248) = v12;
  *(_QWORD *)(a1 + 96) = v27;
  *(_QWORD *)(a1 + 240) = a3;
  *(_DWORD *)(a1 + 184) = 4096;
  sub_14027449C(v28, 1);
  *(_QWORD *)(a1 + 160) = v28;
  sub_1402E7D60(v26, v23, 0LL, 68);
  if ( v14 != -1 )
    sub_14025A2B4(a1, (_QWORD *)(48 * v14 - 0x220000000000LL));
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 )
  {
    LOBYTE(v29) = 2;
    sub_140334790(v33, v29, v30, v31);
  }
  LOBYTE(v29) = 2;
  sub_140334790(v28, v29, v30, v31);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
