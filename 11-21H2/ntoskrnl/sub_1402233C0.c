/*
 * XREFs of sub_1402233C0 @ 0x1402233C0
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402233C0(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v14);
    while ( *(__int64 *)(v1 + 24) < 0 );
  }
  v4 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (unsigned int)sub_140317A80(v4) && (unsigned int)sub_140229550(v6, v5) )
  {
    *v4 = 0LL;
    sub_1402294F0(v4, 0LL);
  }
  else
  {
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
