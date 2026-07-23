/*
 * XREFs of sub_140276E5C @ 0x140276E5C
 * Callers:
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140236C98 @ 0x140236C98 (sub_140236C98.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_140246160 @ 0x140246160 (sub_140246160.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402708F4 @ 0x1402708F4 (sub_1402708F4.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

__int64 __fastcall sub_140276E5C(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // r11
  ULONG_PTR v15; // r15
  __int64 v16; // r13
  unsigned __int64 *v17; // r14
  ULONG_PTR v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  int v22; // eax
  int v23; // eax
  unsigned int *v25; // r9
  int v26; // r14d
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // edx
  int v30; // r11d
  unsigned int v31; // r10d
  ULONG_PTR v32; // rbx
  __int64 v33; // rsi
  unsigned int v34; // r14d
  __int64 v35; // r13
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rbx
  ULONG_PTR v39; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR v41; // [rsp+50h] [rbp-29h]
  unsigned __int16 *v42; // [rsp+58h] [rbp-21h]
  __int64 v43; // [rsp+60h] [rbp-19h]
  __int128 v44; // [rsp+68h] [rbp-11h] BYREF
  __int128 v45; // [rsp+78h] [rbp-1h]
  __int128 v46; // [rsp+88h] [rbp+Fh] BYREF

  v44 = 0LL;
  v2 = -1LL;
  v45 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v46 = a2;
  v4 = v3 & 0xFFFFFFFFFFLL;
  v42 = *(unsigned __int16 **)(qword_140C51F48 + 8 * ((v3 >> 43) & 0x3FF));
  v5 = 0LL;
  for ( i = 0; i < 0x10; i += v14 )
  {
    v7 = sub_140317A10(a2 + 8LL * i);
    v8 = v7;
    if ( !v7 || (v7 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C50780 )
    {
      if ( (v7 & 0x10) != 0 )
        v8 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v8 = ~qword_140C50780 & v7;
    }
    v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
    v10 = v9;
    if ( v9 > qword_140C50840 )
      return 0LL;
    if ( ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 0LL;
    v41 = 48 * v9 - 0x220000000000LL;
    BugCheckParameter2 = v41;
    if ( (unsigned int)sub_140277C50(v41) || i && v9 != v2 )
      return 0LL;
    a2 = v46;
    v2 = v9 + 1;
  }
  v15 = v9 - 15;
  v16 = v13 + 48 * v4;
  v17 = (unsigned __int64 *)(v46 + 120);
  v43 = v16;
  v46 = 0LL;
  while ( 1 )
  {
    if ( v10 == v15 )
    {
      v18 = v13 + 48 * v15;
      BugCheckParameter2 = v18;
    }
    else
    {
      sub_1402708F4(v17, (unsigned int)v14, (__int64 *)&BugCheckParameter2);
      v18 = BugCheckParameter2;
      v11 = 0LL;
      if ( !BugCheckParameter2 )
        goto LABEL_37;
      if ( BugCheckParameter2 != v41 )
        goto LABEL_66;
    }
    if ( (unsigned __int64 *)(*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v17 )
    {
      v39 = sub_140317A10(v17);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v17, v39, *(_QWORD *)(v18 + 8));
    }
    if ( (*(_BYTE *)(v18 + 34) & 7) == 6 )
      sub_1405AD6C8(v18, a2, v11, v12);
    if ( *(_WORD *)(v18 + 32) != (_WORD)v11
      || (*(_BYTE *)(v18 + 35) & 0x40) != 0
      || sub_140273354(v18)
      || (unsigned int)sub_140277C50(v19) )
    {
      break;
    }
    sub_140326870(v18);
    if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 3 )
      sub_14023CC50(v18, 12);
    sub_140274E48((__int64)v42, *(_QWORD *)(v18 + 16), 1);
    v20 = *(_QWORD *)(v18 + 16);
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4uLL;
      *(_QWORD *)(v18 + 16) = v20;
    }
    if ( (v20 & 2) != 0 )
      *(_QWORD *)(v18 + 16) = v20 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v18 + 35) &= 0xF8u;
    sub_14033C300(v18, 0LL);
    ++*((_DWORD *)&v46 + ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) >> 6));
    *(_QWORD *)(v18 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v18 + 34) &= 0xC7u;
    *(_BYTE *)(v18 + 35) &= ~0x20u;
    v21 = *(_BYTE *)(v18 + 34) & 0xEF;
    *(_BYTE *)(v18 + 34) = v21;
    *(_BYTE *)(v18 + 34) = v21 & 0xF8 | 1;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v18 + 16) = 0LL;
    v22 = sub_140317A80(v17);
    v11 = 0LL;
    if ( !v22 )
    {
      v14 = 1LL;
LABEL_31:
      v23 = v11;
      goto LABEL_32;
    }
    v36 = sub_140229550();
    v14 = 1LL;
    if ( !v36 )
      goto LABEL_31;
    v23 = 1;
LABEL_32:
    *v17 = 0LL;
    if ( v23 )
    {
      sub_1402294F0((__int64)v17, 0LL);
      v11 = 0LL;
    }
    v41 -= 48LL;
    v5 += v14;
    v10 -= v14;
    --v17;
    if ( v10 < v15 )
      goto LABEL_37;
    v13 = 0xFFFFDE0000000000uLL;
  }
  if ( v10 == v15 )
    goto LABEL_37;
LABEL_66:
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
  v25 = (unsigned int *)&v46;
  v26 = 1;
  v27 = v11;
  v28 = v11;
  do
  {
    v29 = *v25;
    v30 = v26;
    v31 = v27;
    if ( *v25 && v27 )
      v28 = 1;
    v26 = v11;
    v27 = *v25;
    if ( v31 >= v29 )
      v26 = v30;
    LODWORD(v11) = v11 + 1;
    ++v25;
    if ( v31 >= v29 )
      v27 = v31;
  }
  while ( (unsigned int)v11 < 4 );
  if ( v28 )
  {
    v37 = 16LL;
    v38 = 48 * v15 - 0x220000000000LL;
    do
    {
      if ( *(unsigned __int8 *)(v38 + 34) >> 6 != v26 )
        sub_140267E78(v38, v26, 1);
      v38 += 48LL;
      --v37;
    }
    while ( v37 );
  }
  v32 = 48 * v9 - 0x220000000000LL;
  BugCheckParameter2 = v32;
  if ( v5 == 16 )
  {
    *(_QWORD *)&v44 = v9 - 15;
    *((_QWORD *)&v44 + 1) = 0x200000001LL;
    LOBYTE(v45) = 2;
    v33 = *((_QWORD *)v42 + 2)
        + 24512LL * *(unsigned int *)(sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v9) >> 4)) + 8);
    sub_140246160(v42, v9 - 15, 16LL, 2, v26, 1, 1);
    sub_140236C98(v9 - 15, 16LL, 2, v26, *v42, 1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v33 + 22848));
LABEL_47:
    v34 = 0;
    do
    {
      if ( v9 == v15 )
        break;
      if ( !v33 )
      {
        sub_14033C3E0(v32, 0LL);
        sub_1402C6EB0(v9);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v34;
      v32 = BugCheckParameter2 - 48;
      --v9;
      BugCheckParameter2 -= 48LL;
    }
    while ( v34 < v5 );
    v35 = v43;
    sub_140239060(v43);
    *(_QWORD *)(v35 + 24) ^= (*(_QWORD *)(v35 + 24) ^ (*(_QWORD *)(v35 + 24) - v5)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v33 = 0LL;
    if ( v5 )
      goto LABEL_47;
  }
  if ( !v33 )
    return 0LL;
  sub_1402BEEA0(&v44);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v33 + 22848));
  return 1LL;
}
