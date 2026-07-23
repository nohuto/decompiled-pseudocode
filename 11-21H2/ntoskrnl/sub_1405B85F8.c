/*
 * XREFs of sub_1405B85F8 @ 0x1405B85F8
 * Callers:
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1405B85F8(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  char v18; // al
  char v19; // cl
  unsigned __int64 v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rbx
  int v27; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v10 = 48 * a2 - 0x220000000000LL;
  v11 = 48 * a5 - 0x220000000000LL;
  *(_QWORD *)(v10 + 16) = sub_1402CCC50(128LL);
  sub_14033C3E0(v10, v12);
  v13 = sub_1402F2700(v11);
  v15 = *(_QWORD *)(v11 + 24);
  v16 = v13;
  v17 = v15 ^ ((v15 + 1) ^ v15) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v11 + 24) = v17;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&a5, v17, v15, v14);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  v18 = *(_BYTE *)(v10 + 34) | 0x10;
  *(_BYTE *)(v10 + 34) = v18;
  v19 = v18;
  if ( (v18 & 0xC0) != 0x40 )
  {
    sub_140267E78(v10, 1u, 1);
    v19 = *(_BYTE *)(v10 + 34);
  }
  v20 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v20 | 1;
  *(_BYTE *)(v10 + 34) = v19 & 0xF8 | 6;
  sub_140274508(v10, 1LL, v15);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = *((_QWORD *)CurrentPrcb + 4375);
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( v25 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  if ( a6 == 1 )
  {
    v26 = sub_1402E4D28(a2, 4);
    v27 = 0;
    LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)a4);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_33;
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v27 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_33;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_33;
    }
    if ( (v26 & 1) != 0 )
      goto LABEL_32;
  }
  else
  {
    v26 = sub_1402CBD10(a3, a2, -2147483644) | 4;
    if ( a6 == 3 && (dword_140D06880 & 0xC00000) != 0 && *(_BYTE *)(a1 + 912) != 1 )
    {
      *(_QWORD *)((a3 & 0xFFF) + *(_QWORD *)(a1 + 1928)) = v26;
      if ( !HIBYTE(word_140C51864) )
        v26 |= 0x8000000000000000uLL;
    }
    v27 = 0;
    LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)a4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = sub_140229550();
      if ( (_DWORD)CurrentThread )
      {
        v27 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_33;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_33;
      }
      if ( (v26 & 1) != 0 )
LABEL_32:
        v26 |= 0x8000000000000000uLL;
    }
  }
LABEL_33:
  *a4 = v26;
  if ( v27 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)a4, v26);
  return (char)CurrentThread;
}
