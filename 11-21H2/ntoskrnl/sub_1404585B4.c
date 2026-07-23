/*
 * XREFs of sub_1404585B4 @ 0x1404585B4
 * Callers:
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x140257A90 (KeRemoveDeviceQueue.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_14050905C @ 0x14050905C (sub_14050905C.c)
 *     sub_140513AD4 @ 0x140513AD4 (sub_140513AD4.c)
 */

__int64 __fastcall sub_1404585B4(PDMA_ADAPTER DmaAdapter)
{
  char v1; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r9
  ULONG v5; // r8d
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned int v8; // edx
  struct _DMA_OPERATIONS *v9; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf

  v1 = 0;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v1 = 1;
  }
  while ( 1 )
  {
    v5 = *(_DWORD *)&DmaAdapter[15].Version;
    if ( v5 )
      IoFreeMapRegisters(DmaAdapter, DmaAdapter[14].DmaOperations, v5);
    result = (__int64)KeRemoveDeviceQueue((PKDEVICE_QUEUE)&DmaAdapter[11]);
    v7 = result;
    if ( !result )
      break;
    DmaAdapter[21].DmaOperations = (PDMA_OPERATIONS)result;
    *(_DWORD *)&DmaAdapter[15].Version = *(_DWORD *)(result + 40);
    v8 = *(_DWORD *)(result + 40);
    if ( v8 && DmaAdapter[9].DmaOperations )
    {
      v9 = (struct _DMA_OPERATIONS *)sub_140456F16((__int64)DmaAdapter, v8);
      DmaAdapter[14].DmaOperations = v9;
      if ( !v9 )
      {
        sub_140513AD4(DmaAdapter);
        result = sub_14050905C(DmaAdapter, *(unsigned int *)(v7 + 40));
        break;
      }
    }
    else
    {
      DmaAdapter[14].DmaOperations = 0LL;
      *(_DWORD *)&DmaAdapter[15].Version = 0;
    }
    DmaAdapter[21].DmaOperations = (PDMA_OPERATIONS)v7;
    result = sub_14042A5E0(*(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56));
    if ( (_DWORD)result == 1 )
      break;
    if ( (_DWORD)result == 3 )
      *(_DWORD *)&DmaAdapter[15].Version = 0;
  }
  if ( v1 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
