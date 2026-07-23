/*
 * XREFs of sub_1402F411C @ 0x1402F411C
 * Callers:
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 * Callees:
 *     sub_140240404 @ 0x140240404 (sub_140240404.c)
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402F411C(int a1)
{
  bool v1; // r10
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-68h] BYREF

  v1 = 1;
  v2 = 3LL;
  if ( a1 == 1 )
  {
    v2 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v1 = byte_140E01840 == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  if ( v1 )
  {
    if ( sub_140240404(&dword_140D31080) )
    {
      sub_1402F42D4((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, v2, (__int64)sub_14023B310, 0LL);
      _InterlockedAdd(&dword_140D31080, 1u);
    }
  }
  else
  {
    _InterlockedOr(v13, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *(_QWORD *)(*((_QWORD *)CurrentPrcb + 1) + 184LL);
    *((_QWORD *)CurrentPrcb + 1463) = 2097153LL;
    memset((char *)CurrentPrcb + 11712, 0, 0x100uLL);
    sub_140300030((char *)CurrentPrcb + 11704, *((unsigned __int16 *)CurrentPrcb + 5853), v5 + 368);
    KeRemoveProcessorAffinityEx((char *)CurrentPrcb + 11704, *((unsigned int *)CurrentPrcb + 9));
    sub_1402F42D4((_DWORD)CurrentPrcb, 0, (_DWORD)CurrentPrcb + 11704, 0, v2, (__int64)sub_14023B310, 0LL);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = *((_QWORD *)v9 + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(v9);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
