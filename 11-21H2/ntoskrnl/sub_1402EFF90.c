/*
 * XREFs of sub_1402EFF90 @ 0x1402EFF90
 * Callers:
 *     sub_14079FBD4 @ 0x14079FBD4 (sub_14079FBD4.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402EFF90(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  _InterlockedOr(v15, 0);
  if ( *(_QWORD *)(a1 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = 0;
    while ( 1 )
    {
      v6 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v6 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v8 = *(_DWORD *)(v6 + 24);
          *(_DWORD *)(v6 + 24) = v8 + 1;
          if ( v8 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v7 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v7 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v9 = *(_DWORD *)(v7 + 24) - 1;
          *(_DWORD *)(v7 + 24) = v9;
          if ( !v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v16);
      while ( *(_QWORD *)(a1 + 64) );
    }
    sub_140224100(a1);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = *((_QWORD *)v11 + 4375);
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(v11);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
