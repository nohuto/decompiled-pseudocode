/*
 * XREFs of NdisMQueueDpcEx @ 0x1C003D4D0
 * Callers:
 *     ndisMiniportMessageIsr @ 0x1C0027D10 (ndisMiniportMessageIsr.c)
 *     ndisMiniportIsr @ 0x1C003D070 (ndisMiniportIsr.c)
 *     NdisMQueueDpc @ 0x1C0064450 (NdisMQueueDpc.c)
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012E94 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092358 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  void *v4; // r12
  __int64 v8; // r14
  unsigned int Number; // r15d
  unsigned __int64 v10; // rsi
  unsigned __int16 Group; // ax
  KAFFINITY v12; // rbp
  unsigned __int64 Mask; // rdi
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v15; // r10
  _BYTE v17[8]; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+28h] [rbp-40h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF

  v4 = (void *)MessageId;
  v8 = 1LL;
  Number = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(
    (NDIS_PCW_CONTEXT *)v17,
    *((struct _NDIS_MINIPORT_BLOCK **)NdisInterruptHandle + 12));
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v10 = *((_QWORD *)NdisInterruptHandle + 28)
        + ((unsigned __int64)((unsigned int)v4 * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v10 = *((_QWORD *)NdisInterruptHandle + 14);
  Group = TargetProcessors->Group;
  v12 = 0LL;
  Mask = TargetProcessors->Mask;
  ProcNumber.Group = Group;
  *(_WORD *)&ProcNumber.Number = 0;
  if ( (v18 & 0x1000000) != 0 )
    Number = KeGetPcr()->Prcb.Number;
  for ( ; Mask; Mask >>= 1 )
  {
    if ( (Mask & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      v15 = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != Number && (v18 & 0x1000000) != 0 )
          ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)v17, 0xCuLL, 1uLL);
        _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        if ( KeInsertQueueDpc((PRKDPC)(v10 + (v15 << 6)), v4, MiniportDpcContext) )
          v12 |= v8;
        else
          _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
      }
    }
    ++ProcNumber.Number;
    v8 *= 2LL;
  }
  return v12;
}
