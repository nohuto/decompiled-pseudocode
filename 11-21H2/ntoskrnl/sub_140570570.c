/*
 * XREFs of sub_140570570 @ 0x140570570
 * Callers:
 *     sub_140540684 @ 0x140540684 (sub_140540684.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140570570(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  char v6; // r12
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD **v13; // rsi
  _QWORD *i; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 result; // rax
  int v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]

  v22 = a2;
  if ( a4 )
  {
    v5 = *(_BYTE *)a4;
    v6 = *(_BYTE *)a4;
  }
  else
  {
    v5 = 0;
    v6 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  while ( 1 )
  {
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 24) = v10 + 1;
        if ( v10 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v11 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v11 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v12 = *(_DWORD *)(v11 + 24) - 1;
        *(_DWORD *)(v11 + 24) = v12;
        if ( !v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v21, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  do
  {
    v13 = (_QWORD **)(16LL * v5 + a1 + 152);
    for ( i = *v13; i != v13; i = (_QWORD *)*i )
      sub_14042A5E0(i - 2, 88LL);
    ++v5;
  }
  while ( v5 <= v6 );
  sub_140224100(a1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
