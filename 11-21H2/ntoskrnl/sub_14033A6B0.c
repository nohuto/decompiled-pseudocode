/*
 * XREFs of sub_14033A6B0 @ 0x14033A6B0
 * Callers:
 *     sub_1402CFF00 @ 0x1402CFF00 (sub_1402CFF00.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14033A6B0(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // rax
  unsigned __int16 v6; // bx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // si
  char v17; // cl
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v27; // r8
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rbx
  unsigned __int64 v31; // r14
  int v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+10h] BYREF

  v4 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = sub_1402CCC50(128LL);
  v6 = *(_WORD *)(a1 + 78);
  v7 = v5;
  v8 = sub_1402CBD10((unsigned __int64)v4, 0LL, (v6 >> 3) & 0x1F | 0xA0000000);
  v9 = sub_14033AC10(v4);
  if ( (v6 & 0x100) != 0 )
  {
    v30 = *(_QWORD *)(a1 + 16);
    v31 = (a2 - *(_QWORD *)a1) >> 12;
    v32 = 1;
    v12 = 1;
    v11 = *(_QWORD *)(v30 + 8 * v31);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)v10;
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(v10 + 35) & 0x10) != 0 )
    {
      v12 = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 40) &= ~0x8000000000000000uLL;
      v12 = 1;
      *(_QWORD *)(v10 + 16) = v7;
    }
    sub_14033C3E0(v10, v9);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
      v14 = (unsigned int)v13 | *(_DWORD *)(v15 + 20);
      *(_DWORD *)(v15 + 20) = v14;
    }
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v32, v13, v14, v15);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    v17 = *(_BYTE *)(v10 + 34);
    *(_QWORD *)(v10 + 40) &= ~0x8000000000000000uLL;
    *(_QWORD *)v10 = 0LL;
    if ( (v17 & 0xC0) != 0x40 )
    {
      sub_140267E78(v10, 1u, 1);
      v17 = *(_BYTE *)(v10 + 34);
    }
    v18 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v10 + 32) = 1;
    *(_QWORD *)(v10 + 8) = v4;
    *(_QWORD *)(v10 + 24) = v18 | 1;
    *(_BYTE *)(v10 + 34) = v17 & 0xF8 | 6;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v27 = *((_QWORD *)CurrentPrcb + 4375);
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v29 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  v19 = v8 ^ (v8 ^ (v11 << 12)) & 0xFFFFFFFFFF000LL;
  if ( !sub_140317A80((unsigned __int64)v4) )
    goto LABEL_11;
  if ( !(unsigned int)sub_140229550() )
  {
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v19 & 1) != 0 )
      v19 |= 0x8000000000000000uLL;
LABEL_11:
    *v4 = v19;
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140C51864) && (v19 & 1) != 0 )
    v19 |= 0x8000000000000000uLL;
  *v4 = v19;
  sub_1402294F0((__int64)v4, v19);
LABEL_12:
  v23 = 48 * v9 - 0x220000000000LL;
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v33, v20, v21, v22);
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
