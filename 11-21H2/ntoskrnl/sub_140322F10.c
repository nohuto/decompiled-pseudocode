/*
 * XREFs of sub_140322F10 @ 0x140322F10
 * Callers:
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1402A0624 @ 0x1402A0624 (sub_1402A0624.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 *     sub_1405BA2B4 @ 0x1405BA2B4 (sub_1405BA2B4.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_14029A6AC @ 0x14029A6AC (sub_14029A6AC.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045C47C @ 0x14045C47C (sub_14045C47C.c)
 *     sub_14045C4F6 @ 0x14045C4F6 (sub_14045C4F6.c)
 *     sub_140583D88 @ 0x140583D88 (sub_140583D88.c)
 *     sub_140583DB8 @ 0x140583DB8 (sub_140583DB8.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 */

__int64 __fastcall sub_140322F10(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        char a4,
        unsigned __int64 a5,
        char a6,
        __int64 a7)
{
  int v7; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax
  char v15; // r15
  unsigned int v16; // eax
  unsigned __int64 v17; // rbx
  unsigned int v18; // r12d
  unsigned int v19; // esi
  unsigned __int8 v20; // r13
  ULONG_PTR v21; // r10
  char v22; // al
  __int64 v23; // r8
  char v24; // di
  __int64 v25; // r12
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v31; // rax
  char v32; // cl
  int v33; // esi
  int v34; // eax
  ULONG_PTR v35; // rdi
  ULONG_PTR v36; // rbx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  ULONG_PTR v40; // rbx
  char v41; // dl
  __int64 v42; // rcx
  __int64 v43; // r10
  int v44; // edx
  int v45; // eax
  char v46; // al
  unsigned __int64 v47; // rax
  unsigned __int8 v48; // [rsp+30h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-48h]
  unsigned int v50; // [rsp+40h] [rbp-40h]
  unsigned __int64 v51; // [rsp+48h] [rbp-38h]
  int v52; // [rsp+50h] [rbp-30h] BYREF
  int v53; // [rsp+54h] [rbp-2Ch] BYREF
  int v54; // [rsp+58h] [rbp-28h] BYREF
  int v55; // [rsp+5Ch] [rbp-24h] BYREF
  __int64 v56; // [rsp+60h] [rbp-20h]
  unsigned __int64 v57[3]; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR v60; // [rsp+D0h] [rbp+50h] BYREF

  v60 = (ULONG_PTR)a3;
  v7 = *(_DWORD *)(a1 + 184);
  v50 = 0;
  v9 = (__int64)(a2 << 25) >> 16;
  v51 = v9;
  v10 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = 1LL;
    v56 = 1LL;
    v50 = 1;
  }
  else
  {
    v56 = 0LL;
    v11 = 0LL;
    if ( (v7 & 7) == 0 && (((unsigned __int8)*a3 >> 1) & 7) != 0 )
      *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v10) = 0;
  v48 = 0;
  v13 = *((_DWORD *)CurrentThread + 346);
  if ( (v13 & 0x100) != 0 )
  {
    v14 = v13 >> 9;
  }
  else
  {
    v14 = (*((_DWORD *)CurrentThread + 344) >> 12) & 7;
    if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1124LL) & 0x100000) != 0 )
    {
      v32 = 2;
      if ( v14 < 2 )
        v32 = v14;
      LOBYTE(v14) = v32;
    }
  }
  v15 = a6;
  v16 = v14 & 7;
  v17 = a5;
  v18 = 5;
  v19 = 8 * v16;
  if ( v11 )
  {
    if ( (a6 & 2) != 0 )
    {
      LOBYTE(v10) = 9;
    }
    else if ( v16 < 5 )
    {
      LOBYTE(v10) = 7;
    }
    else if ( (a6 & 8) != 0 )
    {
      LOBYTE(v10) = 6;
    }
    else if ( (a5 & 1) != 0 && (a5 & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
    }
    v48 = v10;
    v20 = v10 | (16 * (a4 & 7));
  }
  else
  {
    v33 = 5;
    if ( v16 > 5 )
      v33 = v16;
    v20 = 0;
    v19 = 8 * v33;
  }
  if ( (a6 & 1) != 0 )
  {
    v35 = v60;
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v52, v10, (__int64)a3, v11);
      while ( *(__int64 *)(v35 + 24) < 0 );
    }
    v36 = v60;
    v37 = sub_14029A6AC(v60);
    v38 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v36 + 40) >> 43) & 0x3FFLL));
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v37 )
      sub_1402E20D0(v38, v37, 1);
    v17 = a5;
  }
  v21 = v60;
  BugCheckParameter2 = v60;
  v22 = *(_BYTE *)(v60 + 35);
  if ( (v22 & 8) == 0 )
    v18 = v22 & 7;
  if ( v18 < v19 >> 3 )
  {
    v53 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v53, v10, (__int64)a3, v11);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v15 = a6;
      v21 = BugCheckParameter2;
    }
    *(_BYTE *)(v21 + 35) = (v19 >> 3) | *(_BYTE *)(v21 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v60;
    v17 = a5;
    BugCheckParameter2 = v60;
  }
  if ( (*(_BYTE *)v21 & 1) == 0 )
  {
    v54 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v54, v10, (__int64)a3, v11);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v15 = a6;
      v21 = BugCheckParameter2;
    }
    if ( (*(_QWORD *)v60 & 1) == 0 )
      *(_QWORD *)v60 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v60;
    v17 = a5;
    BugCheckParameter2 = v60;
  }
  if ( (v17 & 1) == 0 )
    goto LABEL_35;
  v23 = 0x8000000000000000uLL;
  v24 = v7 & 7;
  if ( (v7 & 7) == 2 )
  {
    v17 |= 0x8000000000000000uLL;
    a5 = v17;
  }
  else if ( (dword_140D06880 & 0x8000) != 0 )
  {
    v39 = v51;
    if ( (v51 < 0xFFFFF68000000000uLL || v51 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v17 & 0x8000000000000000uLL) == 0
      && ((dword_140D06880 & 0x20000) != 0 || v24) )
    {
      v55 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v55, v39, v23, v11);
          while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
        v15 = a6;
      }
      v40 = v60;
      if ( !(unsigned int)sub_140313B20(v60, 1, 0LL) )
      {
        v41 = 38;
        if ( !v24 )
          v41 = 7;
        sub_14026C644(v40, v41);
      }
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v60;
      v17 = a5;
      BugCheckParameter2 = v60;
    }
  }
  if ( (dword_140D06880 & 0x4000) != 0 )
  {
    v31 = *(_QWORD *)(v21 + 40);
    if ( v31 < 0 && (((unsigned __int64)v31 >> 60) & 7) == 3 && (v24 == 4 || v24 == 1) )
    {
      *(_OWORD *)v57 = 0LL;
      if ( (sub_140313B20(v21, 0, v57) & 8) != 0 )
      {
        v34 = sub_14039FDB0(
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                v57,
                1024LL);
        if ( v34 < 0 )
          KeBugCheckEx(0x1Au, 0x515E4uLL, BugCheckParameter2, v34, 0LL);
      }
    }
  }
  if ( a7
    && (v25 = sub_14045C4F6(a7, v51, v23)) != 0
    && ((v44 = *(_DWORD *)(v42 + 56), (v44 & 0x20) == 0)
     || _bittest64((const signed __int64 *)(v43 + 40), 0x28u)
     || *(__int64 *)(v43 + 8) <= 0) )
  {
    if ( (v44 & 0x10) != 0 && v48 < 6u )
      v20 = v20 & 0xF0 | 6;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v56 )
  {
    v17 = v17 & 0x80FFFFFFFFFFFFFFuLL | ((unsigned __int64)v20 << 56);
    a5 = v17;
    LOBYTE(v19) = v19 | 1;
  }
  v26 = v17;
  if ( sub_140317A80(a2) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      if ( !HIBYTE(word_140C51864) && (v17 & 1) != 0 )
        v26 = v17 | 0x8000000000000000uLL;
      *(_QWORD *)a2 = v26;
      sub_1402294F0(a2, v26);
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v17 & 1) != 0 )
    {
      v27 = 0x8000000000000000uLL;
      v17 = a5;
      v26 |= 0x8000000000000000uLL;
      BugCheckParameter2 = v60;
      goto LABEL_32;
    }
    v17 = a5;
    BugCheckParameter2 = v60;
  }
  v27 = 0x8000000000000000uLL;
LABEL_32:
  *(_QWORD *)a2 = v26;
LABEL_33:
  if ( !v25 )
    goto LABEL_34;
  v45 = *(_DWORD *)(a7 + 56);
  if ( (v45 & 1) != 0 && (v17 & 0x42) == 0 )
    goto LABEL_34;
  if ( (v45 & 2) != 0 && (v17 & v27) != 0 )
    goto LABEL_34;
  LOBYTE(v19) = v19 | 4;
  if ( (v45 & 0x20) != 0 )
  {
    v46 = sub_1405A6E74(&v60, &a5);
    v21 = v60;
    v17 = a5;
    BugCheckParameter2 = v60;
    LOBYTE(v19) = (v19 ^ (4 * v46)) & 4 ^ v19;
  }
  else
  {
    v21 = BugCheckParameter2;
  }
  if ( (v19 & 4) != 0 )
  {
    v47 = sub_140317A10((unsigned __int64)&a5);
    sub_14045C47C(v25, (v47 >> 12) & 0xFFFFFFFFFFLL, v17);
LABEL_34:
    v21 = BugCheckParameter2;
  }
LABEL_35:
  v28 = v56;
  if ( v56 && (v19 & 1) == 0 )
    *(_BYTE *)v56 = v20;
  if ( (v15 & 2) != 0 )
  {
    sub_140583D88(a1, 1LL);
  }
  else if ( (v15 & 4) == 0 )
  {
    v29 = v50;
    if ( *(__int64 *)(v21 + 40) >= 0 )
      v29 = v50 | 2;
    if ( v28 || (v7 & 7) == 0 )
      v29 = (unsigned int)v29 | 4;
    sub_1403234A0(a1, v51, 1LL, v29);
  }
  if ( (DWORD1(xmmword_140D06900) & 0x8000001) != 0 )
    sub_140583DB8(BugCheckParameter2, v7 & 7, v51);
  return 1LL;
}
