/*
 * XREFs of sub_14039D960 @ 0x14039D960
 * Callers:
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 * Callees:
 *     sub_140240404 @ 0x140240404 (sub_140240404.c)
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14039D960(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf

  v4 = a3;
  if ( a1 || a2 || !a4 )
    return sub_14039DA34(a1, a2, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  if ( sub_140240404(&dword_140D31080) )
  {
    LOBYTE(v6) = v4;
    sub_14039DA34(0LL, 0LL, v6);
    _InterlockedIncrement(&dword_140D31080);
  }
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
