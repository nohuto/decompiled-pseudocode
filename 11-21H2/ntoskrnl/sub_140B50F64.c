/*
 * XREFs of sub_140B50F64 @ 0x140B50F64
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_14022F96C @ 0x14022F96C (sub_14022F96C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140B50F64(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a1 = (unsigned int)CurrentIrql + 1;
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    *(_DWORD *)(v4 + 20) |= a2;
  }
  sub_14042A5E0(a1, a2);
  sub_14022F96C(0);
  sub_14042A5E0(v6, v5);
  LOBYTE(v7) = 1;
  sub_14042A5E0(v7, v8);
  sub_14042A5E0(0LL, DesiredTime);
  sub_14022F96C(1);
  *(_DWORD *)(v2 + 37004) = DesiredTime;
  *(_DWORD *)(v2 + 37000) = 0;
  *(_BYTE *)(v2 + 37128) = 1;
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
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
