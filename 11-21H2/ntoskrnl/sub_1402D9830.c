/*
 * XREFs of sub_1402D9830 @ 0x1402D9830
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 * Callees:
 *     sub_1402D990C @ 0x1402D990C (sub_1402D990C.c)
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     sub_1402FF270 @ 0x1402FF270 (sub_1402FF270.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402D9830(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v12, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  sub_1402D990C(a1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  sub_1402FF270(a2, *(unsigned __int16 *)(a2 + 2), a1);
  return sub_1402FF140(a2, &dword_140D06E40, a2, *(unsigned __int16 *)(a2 + 2));
}
