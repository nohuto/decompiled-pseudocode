/*
 * XREFs of sub_1405127BC @ 0x1405127BC
 * Callers:
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     sub_1405129B0 @ 0x1405129B0 (sub_1405129B0.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140504438 @ 0x140504438 (sub_140504438.c)
 *     sub_14051295C @ 0x14051295C (sub_14051295C.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 */

void __fastcall sub_1405127BC(PDMA_ADAPTER DmaAdapter)
{
  unsigned __int8 CurrentIrql; // di
  __int64 *v3; // rax
  char v4; // si
  int v5; // eax
  __int64 v6; // r9
  char v7; // bp
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 && *(_DWORD *)&DmaAdapter[32].Version )
  {
    if ( LOBYTE(DmaAdapter[13].DmaOperations) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&DmaAdapter[29].DmaOperations, CriticalWorkQueue);
  }
  else
  {
    ((void (*)(void))sub_14051295C)();
    do
    {
      v3 = sub_140504438((__int64)DmaAdapter);
      if ( !v3 )
        break;
      DmaAdapter[21].DmaOperations = (PDMA_OPERATIONS)v3;
      v4 = 0;
      *(_DWORD *)&DmaAdapter[15].Version = *((_DWORD *)v3 + 10);
      v5 = *((_DWORD *)v3 + 4);
      LODWORD(DmaAdapter[38].DmaOperations) = 0;
      HIDWORD(DmaAdapter[23].DmaOperations) = v5;
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v4 = 1;
      }
      v7 = sub_140517830(DmaAdapter);
      if ( v4 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v8 = KeGetCurrentIrql();
            if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v10 = *((_QWORD *)CurrentPrcb + 4375);
              v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
              *(_DWORD *)(v10 + 20) &= v11;
              if ( v12 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    while ( v7 );
  }
}
