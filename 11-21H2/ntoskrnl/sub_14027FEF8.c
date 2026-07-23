/*
 * XREFs of sub_14027FEF8 @ 0x14027FEF8
 * Callers:
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140597FAC @ 0x140597FAC (sub_140597FAC.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140271020 @ 0x140271020 (sub_140271020.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_14027D364 @ 0x14027D364 (sub_14027D364.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_14027FE9C @ 0x14027FE9C (sub_14027FE9C.c)
 *     sub_1402803FC @ 0x1402803FC (sub_1402803FC.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14027FEF8(unsigned __int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, _DWORD *a5)
{
  _DWORD *v6; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  ULONG_PTR v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v20; // si
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned int v25; // ebx
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned __int8 v28; // [rsp+88h] [rbp+20h] BYREF

  v28 = a4;
  v6 = a5;
  v27 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = sub_140317A10(v27);
  v12 = 0LL;
  v13 = *(_QWORD *)a2 - 32LL;
  v26 = v9;
  if ( !*v6 )
  {
    if ( (unsigned int)sub_140274508(a2, 2LL, v11) )
    {
      if ( !*v6 )
      {
        if ( !a3 )
          goto LABEL_6;
        if ( *(_WORD *)(a3 + 32) < 0x7FFFu )
          goto LABEL_6;
        *v6 = 1;
        sub_140336AD8(a2);
        if ( !*v6 )
          goto LABEL_6;
      }
    }
    else
    {
      *v6 = 1;
    }
  }
  if ( a3 )
  {
    sub_140239060(a3);
    sub_140336AD8(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_6:
  _InterlockedAdd((volatile signed __int32 *)(v13 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v10) = v28;
    sub_140334790(a3, v10);
  }
  else
  {
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v20 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = v28;
        v23 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v24 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v20 = v28;
    }
    __writecr8(v20);
    v12 = 0LL;
  }
  v14 = 0LL;
  if ( a1[7] )
    v14 = sub_14027DA5C((__int64)(a1 + 7), 17, 0LL);
  if ( *(_QWORD *)(v13 + 216) )
  {
    v18 = sub_140347C10(v13, 0LL, 0LL);
    v12 = v18;
    if ( v18 )
      sub_14029F580(v18);
  }
  KeWaitForSingleObject((PVOID)(v13 + 56), WrPageIn, 0, 0, 0LL);
  if ( v12 )
  {
    sub_140347C10(v13, v12, 0LL);
    sub_140353BB0(v13);
  }
  sub_14027456C((PSLIST_ENTRY)v13);
  if ( a1[7] )
    sub_14027D364((__int64 *)a1 + 7, v14);
  if ( *v6 )
    return 3221226548LL;
  if ( a3 )
  {
    sub_14027FE9C(a3, &v28, v15);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    sub_1402F2700(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)sub_1402803FC(a1, *a1, v27, &v26) && sub_140271020(*a1, a2, v16, 0LL) )
      return 0LL;
    sub_140336AD8(a2);
    return 3221226548LL;
  }
  v25 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  sub_140336AD8(a2);
  return v25 - 1073740748;
}
