/*
 * XREFs of sub_1403128B0 @ 0x1403128B0
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403137B0 @ 0x1403137B0 (sub_1403137B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403128B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r12
  int v12; // eax
  char v13; // al
  char v14; // cl
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  __int64 v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  __int64 v31; // r9
  int v32; // edx
  int v33; // [rsp+68h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(a2 + 64);
  v6 = a4;
  v7 = *(_QWORD *)(a2 + 72);
  v8 = a3;
  v9 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v33, a2, a3, a4);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v12 = sub_1403137B0(a1, v8, v5);
  if ( v6 )
  {
    if ( v12 != v6 )
      goto LABEL_39;
  }
  else if ( !v12 )
  {
    goto LABEL_39;
  }
  if ( a5 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
  {
LABEL_39:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_53;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_53;
    v21 = KeGetCurrentIrql();
    if ( v21 > 0xFu )
      goto LABEL_53;
    if ( CurrentIrql > 0xFu )
      goto LABEL_53;
    if ( v21 < 2u )
      goto LABEL_53;
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = *((_QWORD *)CurrentPrcb + 4375);
    v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
    *(_DWORD *)(v23 + 20) &= v24;
    if ( !v25 )
      goto LABEL_53;
LABEL_52:
    sub_140418E4C(CurrentPrcb);
LABEL_53:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v13 = *(_BYTE *)(v5 + 34) >> 6;
  if ( v13 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_53;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_53;
    v26 = KeGetCurrentIrql();
    if ( v26 > 0xFu )
      goto LABEL_53;
    if ( CurrentIrql > 0xFu )
      goto LABEL_53;
    if ( v26 < 2u )
      goto LABEL_53;
    CurrentPrcb = KeGetCurrentPrcb();
    v27 = *((_QWORD *)CurrentPrcb + 4375);
    v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v25 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
    *(_DWORD *)(v27 + 20) &= v28;
    if ( !v25 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v14 = 1;
  if ( v13 )
  {
    if ( v13 == 2 )
      v14 = 25;
  }
  else
  {
    v14 = 9;
  }
  v15 = (((0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v14 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_61:
    v15 |= 0x100uLL;
    goto LABEL_23;
  }
  v16 = (__int64)(v7 << 25) >> 16;
  if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    v15 = v7 == 0xFFFFF6FB7DBEDF68uLL
        ? (((0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v14 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
        : (((0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | qword_140016200[v14 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)sub_14023261C(v7) )
      v15 |= 4uLL;
  }
  if ( v7 <= 0xFFFFF6BFFFFFFF78uLL )
    v15 |= 4uLL;
  if ( v16 < 0xFFFF800000000000uLL )
  {
    v17 = HIBYTE(word_140C51864);
    goto LABEL_22;
  }
  if ( byte_140C53F50[((v16 >> 39) & 0x1FF) - 256] != 1 && (v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v16 < qword_140C540C0 || v16 > qword_140C51BF0 )
      v17 = (unsigned __int8)word_140C51864;
    else
      v17 = HIBYTE(word_140C51864);
LABEL_22:
    if ( !v17 )
      goto LABEL_23;
    goto LABEL_61;
  }
LABEL_23:
  v18 = word_140C51864 & 1;
  *(_QWORD *)(v9 + 56) = v7;
  *(_QWORD *)(v9 + 48) = v5;
  v19 = v15 & 0xFAFFFFFFFFFFFEFFuLL | ((v18 | 0xA000000000000LL) << 8);
  if ( (unsigned int)sub_140317A80(v7) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      if ( !HIBYTE(word_140C51864) )
        v19 |= 0x8000000000000000uLL;
      *(_QWORD *)v7 = v19;
      sub_1402294F0(v7, v19);
      goto LABEL_25;
    }
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      v19 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)v7 = v19;
LABEL_25:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = *((_QWORD *)v30 + 4375);
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
        *(_DWORD *)(v31 + 20) &= v32;
        if ( v25 )
          sub_140418E4C(v30);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
