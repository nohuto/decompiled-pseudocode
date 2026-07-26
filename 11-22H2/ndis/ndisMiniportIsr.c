/*
 * XREFs of ndisMiniportIsr @ 0x1C003D070
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012E94 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     NdisMQueueDpcEx @ 0x1C003D4D0 (NdisMQueueDpcEx.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092358 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

char __fastcall ndisMiniportIsr(__int64 a1, __int64 a2)
{
  char v3; // di
  char v4; // si
  _GROUP_AFFINITY TargetProcessors; // [rsp+20h] [rbp-20h] BYREF
  char v7; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+30h] BYREF

  v8 = 0;
  v7 = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)&TargetProcessors, *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 96));
  v3 = TargetProcessors.Reserved[1];
  if ( (TargetProcessors.Reserved[1] & 2) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&TargetProcessors, 1u);
    v3 = TargetProcessors.Reserved[1];
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(a2 + 16))(*(_QWORD *)(a2 + 8), &v7, &v8);
  if ( (v3 & 2) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&TargetProcessors, 1u, 0xEuLL);
  if ( v4 && (TargetProcessors.Group & 2) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&TargetProcessors, 1uLL, 1uLL);
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a2 + 104), 1u);
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 32), 0LL, 0LL) )
    {
      if ( (TargetProcessors.Reserved[1] & 0x1000) != 0 )
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&TargetProcessors, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    *(_QWORD *)&TargetProcessors.Group = 0LL;
    TargetProcessors.Mask = v8;
    NdisMQueueDpcEx((NDIS_HANDLE)a2, 0, &TargetProcessors, 0LL);
  }
  return v4;
}
