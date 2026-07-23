/*
 * XREFs of sub_1402C2AD0 @ 0x1402C2AD0
 * Callers:
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033F8E0 @ 0x14033F8E0 (sub_14033F8E0.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

__int64 sub_1402C2AD0(__int64 a1, unsigned __int64 a2, int a3, ...)
{
  unsigned __int64 v3; // rbx
  char v4; // si
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  ULONG_PTR v10; // r15
  char v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  BOOL v14; // r12d
  unsigned __int64 v15; // rcx
  int v16; // ebx
  volatile signed __int32 *v17; // rbp
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v22; // rbx
  __int64 v23; // rdi
  unsigned __int64 v24; // r9
  __int64 *v25; // rdx
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v33; // rax
  ULONG_PTR v34; // rbx
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  signed __int64 v37; // rax
  __int64 v38; // r14
  char v39; // cl
  char v40; // cl
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // [rsp+20h] [rbp-58h] BYREF
  signed __int64 v47[10]; // [rsp+28h] [rbp-50h] BYREF
  int v49; // [rsp+88h] [rbp+10h] BYREF
  int v50; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v51 = va_arg(va1, _QWORD);
  v50 = a3;
  v3 = v51;
  v4 = a3;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47[0] = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64 *)va) >> 12) & 0xFFFFFFFFFFLL);
  v10 = v47[0] - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v11 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v11 = (*(_BYTE *)v10 >> 1) & 7;
  v12 = *(_QWORD *)(v10 + 40);
  v13 = 0LL;
  v14 = v12 >= 0;
  if ( (v4 & 4) != 0 )
    goto LABEL_42;
  if ( v12 < 0 )
  {
    if ( (v12 & 0x10000000000LL) == 0 )
    {
      v33 = *(_QWORD *)(v10 + 8);
      if ( v33 >= 0 )
      {
        if ( v33 )
          goto LABEL_42;
      }
    }
    if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
      goto LABEL_42;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
      goto LABEL_42;
    if ( (sub_140313B20(v10) & 0xFFFFFFFD) != 0 )
      goto LABEL_42;
    v8 = 0xFFFFF68000000000uLL;
    v15 = (__int64)(v7 << 25) >> 16;
    if ( v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_42;
  }
  if ( *(_WORD *)(v10 + 32) == 1 && (*(_BYTE *)(v10 + 34) & 0xC0) == 0x40 && (*(_BYTE *)(v10 + 35) & 0x40) == 0 )
  {
    v16 = 1;
    goto LABEL_12;
  }
LABEL_42:
  v16 = 0;
LABEL_12:
  v17 = (volatile signed __int32 *)(v10 + 24);
  v49 = 0;
  while ( _interlockedbittestandset64(v17, 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v49);
    while ( *(__int64 *)v17 < 0 );
  }
  if ( v16 && (*(_QWORD *)v17 & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v10 + 32) == 1 )
  {
    v18 = 4;
    v19 = *(unsigned __int8 *)(16 * (v47[0] >> 4) - 0x220000000000LL + 34) >> 6;
    if ( !v19 || v19 == 3 )
    {
      v18 = 12;
    }
    else if ( v19 == 2 )
    {
      v18 = 28;
    }
    v20 = sub_1402CBD10(0LL, 0xAAAAAAAAAAAAAAABuLL * (v47[0] >> 4), v18 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = v20;
    v23 = *((_QWORD *)CurrentPrcb + 4199);
    if ( !v23
      || (v24 = sub_1402C6260(v23 + 12448, 3LL, 1LL, 0LL),
          v25 = (__int64 *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          *(_QWORD *)(v23 + 12344) = v25,
          !v24) )
    {
      v24 = (*((_QWORD *)CurrentPrcb + 4272) & 0xFFFFFFFFFFFFF000uLL)
          + ((*((_QWORD *)CurrentPrcb + 4272) & 0xFFFLL) << 12);
      v25 = (__int64 *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    *v25 = v22;
    v26 = (_QWORD *)v24;
    v27 = (_QWORD *)(v24 + 4088);
    do
    {
      if ( *v26 | *v27 )
        break;
      ++v26;
      --v27;
    }
    while ( v26 <= v27 );
    sub_1402BEDD0(v24, 0x11u);
    if ( v26 > v27 )
    {
      sub_14033F8E0(a1, v10);
      goto LABEL_52;
    }
    v13 = 0LL;
  }
  if ( (v51 & 4) == 0 )
  {
    v28 = 0LL;
    if ( (v51 & 0x42) != 0 )
    {
      v13 = sub_14033C2A0(v10);
      if ( v13 )
        v28 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    }
    if ( v14 )
    {
      v29 = -1LL;
    }
    else
    {
      v36 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v37 = *(_QWORD *)v36;
      if ( v36 >= 0xFFFFF6FB7DBED000uLL
        && v36 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v37 & 1) != 0
        && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        v44 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v44 )
        {
          v45 = *(_QWORD *)(v44 + 8 * ((v36 >> 3) & 0x1FF));
          if ( (v45 & 0x20) != 0 )
            v37 |= 0x20uLL;
          if ( (v45 & 0x42) != 0 )
            v37 |= 0x42uLL;
        }
      }
      v47[0] = v37;
      v29 = ((unsigned __int64)sub_140317A10(v47) >> 12) & 0xFFFFFFFFFFLL;
    }
    v30 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (v50 & 1) != 0
      && (*(_QWORD *)v17 & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v10 + 32) == 1
      && (*(_BYTE *)(v10 + 34) & 0x10) == 0
      && (unsigned int)sub_140273234(v10) == 5 )
    {
      *(_BYTE *)(v10 + 35) = *(_BYTE *)(v10 + 35) & 0xF8 | 4;
    }
    if ( (*(_BYTE *)(v10 + 34) & 7) != 6 )
      sub_1405AD6C8(v10, v8, v30, v9);
    v31 = (v30 & *(_QWORD *)v17) - 1;
    *(_QWORD *)v17 ^= v30 & (*(_QWORD *)v17 ^ v31);
    if ( !v31 )
    {
      sub_1402BF640(v10, 0LL);
      v30 = 0x3FFFFFFFFFFFFFFFLL;
    }
    if ( v29 != -1LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      v34 = 48 * v29 - 0x220000000000LL;
      v50 = 0;
      v17 = (volatile signed __int32 *)(v34 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v50);
          while ( *(__int64 *)v17 < 0 );
        }
        while ( _interlockedbittestandset64(v17, 0x3FuLL) );
        v30 = 0x3FFFFFFFFFFFFFFFLL;
      }
      if ( (*(_BYTE *)(v34 + 34) & 7) != 6 )
        sub_1405AD6C8(v34, v31, v30, v9);
      v35 = (v30 & *(_QWORD *)v17) - 1;
      *(_QWORD *)v17 ^= v30 & (*(_QWORD *)v17 ^ v35);
      if ( !v35 )
        sub_1402BF640(v34, 0LL);
    }
    goto LABEL_36;
  }
LABEL_52:
  v38 = sub_14033AC10(v7);
  v39 = *(_BYTE *)(v10 + 34) & 0xC7;
  *(_WORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(v10 + 34) = v39;
  v40 = *(_BYTE *)(v10 + 35);
  *(_QWORD *)v17 &= 0xC000000000000000uLL;
  *(_BYTE *)(v10 + 35) = v40 & 0xDF;
  v13 = sub_140232694((unsigned __int64 *)(v10 + 16), 0, 0);
  v28 = 0LL;
  if ( v13 )
    v28 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
  sub_1402C6EB0(v47[0] / 48);
  _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  v46 = 0;
  v17 = (volatile signed __int32 *)(48 * v38 - 0x220000000000LL + 24);
  while ( _interlockedbittestandset64(v17, 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v46);
    while ( *(__int64 *)v17 < 0 );
  }
  sub_140273FD0(48 * v38 - 0x220000000000LL, v41, v42, v43);
LABEL_36:
  _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
    sub_1402E20D0(v28, v13, 1LL);
  LOBYTE(v50) = v11;
  BYTE1(v50) = (2 * v14) | 1;
  return (unsigned __int16)v50;
}
