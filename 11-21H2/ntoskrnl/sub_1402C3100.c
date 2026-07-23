/*
 * XREFs of sub_1402C3100 @ 0x1402C3100
 * Callers:
 *     sub_140239CA8 @ 0x140239CA8 (sub_140239CA8.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1405A0774 @ 0x1405A0774 (sub_1405A0774.c)
 * Callees:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_140226AE0 @ 0x140226AE0 (sub_140226AE0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

__int64 __fastcall sub_1402C3100(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, int a4)
{
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // rbp
  __int64 v8; // r12
  __int16 v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  bool v33; // zf
  __int64 v34; // [rsp+30h] [rbp-58h]
  int v35; // [rsp+90h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h]
  unsigned __int8 v37; // [rsp+A0h] [rbp+18h]
  int v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v25 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
      if ( (v26 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v26 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v8 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  v9 = *(_WORD *)(a2 + 32);
  v10 = 0;
  v34 = 0LL;
  v11 = 0LL;
  if ( !v9 )
    sub_140326870(a2);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = (unsigned __int64 *)(a2 + 16);
  if ( (v12 & 0x400) != 0 )
  {
    if ( qword_140C50780 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140C50780;
    sub_1402206C0(*(_QWORD *)(v12 >> 16), v12 >> 16, a3, 2);
    v12 = *(_QWORD *)(a2 + 16);
    v14 = v12 & 0xFFFFFFFFFFFFF7FFuLL;
    if ( (v12 & 0x400) == 0 )
      v14 = v12 & 0xFFFFFFFFFFFFFFF1uLL;
    v13 = (unsigned __int64 *)(a2 + 16);
  }
  else
  {
    v14 = 0LL;
  }
  v36 = 0LL;
  if ( v9 )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v24 = *(_BYTE *)(a2 + 34);
    if ( (v24 & 0x20) != 0 && (v24 & 8) == 0 )
    {
      v27 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v27 + 16) == v27 + 16 )
        v27 = 0LL;
      v36 = v27;
    }
    v15 = 3;
  }
  else
  {
    if ( (v12 & 0x400) == 0 )
    {
      v11 = sub_140232694(v13, 0, 1);
      v34 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    }
    v15 = 4;
  }
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) )
  {
    v28 = *(_BYTE *)(a2 + 35);
    if ( (v28 & 0x10) == 0 )
      *(_BYTE *)(a2 + 35) = v28 | 0x10;
  }
  if ( !(unsigned int)sub_140317A80(BugCheckParameter2) )
    goto LABEL_19;
  if ( !(unsigned int)sub_140229550() )
  {
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
LABEL_19:
    *(_QWORD *)BugCheckParameter2 = v14;
    goto LABEL_20;
  }
  if ( !HIBYTE(word_140C51864) && (v14 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v14;
  sub_1402294F0(BugCheckParameter2, v14);
LABEL_20:
  if ( v15 == 4 )
    sub_1402C6EB0(v7);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 48 * v8 - 0x220000000000LL;
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v35);
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
    sub_1405AD6C8(v19, v16, v17, v18);
  v20 = *(_QWORD *)(v19 + 24);
  v21 = (v20 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v19 + 24) = v20 ^ (v21 ^ v20) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v20 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    sub_1402BF640(v19, v21);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = v37;
  if ( v37 != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v37 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = *((_QWORD *)CurrentPrcb + 4375);
          v32 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v33 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
  }
  if ( v36 )
    sub_140226AE0(v36);
  if ( v11 && v38 )
  {
    if ( (_BYTE)v22 == 17 )
      v10 = 1;
    sub_1402E20D0(v34, v11, v10);
  }
  return v15;
}
