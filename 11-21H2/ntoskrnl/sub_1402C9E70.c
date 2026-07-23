/*
 * XREFs of sub_1402C9E70 @ 0x1402C9E70
 * Callers:
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402CC0F0 @ 0x1402CC0F0 (sub_1402CC0F0.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

__int64 __fastcall sub_1402C9E70(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int8 v5; // si
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r10
  __int64 v13; // rdi
  __int64 v14; // r9
  _BYTE *v15; // rdi
  __int64 v16; // rax
  volatile signed __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rdi
  unsigned __int8 i; // di
  __int64 v22; // rdx
  ULONG_PTR v23; // r14
  unsigned __int64 *v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h]
  __int64 v27; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR v28; // [rsp+98h] [rbp+20h]

  if ( !*a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 2);
  v26 = 0LL;
  v27 = v3;
  v4 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(qword_140C51F48
                 + 8
                 * ((*(_QWORD *)(48 * (((unsigned __int64)sub_140317A10(&v27) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  do
  {
    v7 = *(_QWORD *)&a1[8 * v5 + 16];
    v27 = v7;
    v8 = sub_140317A10(&v27);
    v10 = 6 * ((v8 >> 12) & 0xFFFFFFFFFFLL);
    v11 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v28 = v11;
    v12 = (unsigned __int64 *)(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
    v24 = v12;
    if ( (*v12 & 2) != 0 || (unsigned __int16)*v12 >> 12 == *(_DWORD *)(v6 + 1172) )
      v13 = 88LL * ((unsigned __int16)*v12 >> 12) + v6 + 3712;
    else
      v13 = v6 + 3584;
    if ( v13 != v4 )
    {
      if ( v4 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
      v4 = v13;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 32));
      v12 = v24;
      v11 = v28;
    }
    v14 = *(unsigned __int8 *)(8 * v10 - 0x21FFFFFFFFDELL);
    v15 = (_BYTE *)(8 * v10 - 0x21FFFFFFFFDELL);
    if ( (v14 & 7) != 6 )
      sub_1405AD6C8(v11, v11, v9, v14);
    v16 = 0LL;
    if ( (v7 & 0x42) != 0 && (v14 & 0x10) == 0 )
    {
      LOBYTE(v11) = (*v12 & 0x400) == 0;
      if ( ((unsigned __int8)v11 & (unsigned __int8)~((unsigned __int8)v14 >> 3)) != 0 )
      {
        v16 = sub_140232694(v12, 1, 0);
        LOBYTE(v14) = *v15;
      }
      *v15 = v14 | 0x10;
    }
    *(_QWORD *)&a1[8 * v5 + 16] = v16;
    v17 = (volatile signed __int64 *)(8 * v10 - 0x21FFFFFFFFE8LL);
    v18 = *v17 ^ (*v17 ^ (*v17 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
    *v17 = v18;
    if ( (v18 & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v23 = v28;
      if ( (unsigned int)sub_1402BF640(v28, 1uLL) == 3 && *(__int64 *)(v23 + 40) >= 0 )
        ++v26;
    }
    _InterlockedAnd64(v17, 0x7FFFFFFFFFFFFFFFuLL);
    ++v5;
  }
  while ( v5 < *a1 );
  if ( v4 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
  v19 = v26;
  v20 = *((_QWORD *)a1 + 1);
  if ( a1[1] )
  {
    sub_140239060(*((_QWORD *)a1 + 1));
  }
  else
  {
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v25);
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
  }
  if ( (*(_BYTE *)(v20 + 34) & 7) != 6 || (v11 = *a1, (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v11) )
    sub_1405AD6C8(v20, v11, 0x3FFFFFFFFFFFFFFFLL, 0x7FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) - v11)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( i = 0; i < *a1; ++i )
  {
    v22 = *(_QWORD *)&a1[8 * i + 16];
    if ( v22 )
      sub_1402E20D0(v6, v22, 1LL);
  }
  result = v19;
  *a1 = 0;
  return result;
}
