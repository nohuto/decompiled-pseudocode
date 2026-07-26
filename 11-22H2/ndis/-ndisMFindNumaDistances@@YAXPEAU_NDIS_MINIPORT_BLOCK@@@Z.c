/*
 * XREFs of ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034770
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00348A8 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMFindNumaDistances(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int16 *Pool2; // rax
  __int64 v3; // rbx
  USHORT HighestNodeNumber; // ax
  ULONG SystemInformationLength; // ebp
  _WORD *v6; // rax
  _WORD *v7; // rdi
  __int64 v8; // r8
  USHORT *p_NodeId; // rdx
  __int64 v10; // rax

  Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 2LL * ndisMaxNumberOfProcessors, 538985550);
  v3 = 0LL;
  a1->NumaDistances = Pool2;
  if ( Pool2 )
  {
    a1->NumaNodeId = -1;
    if ( (int)ndisMFindNumaNode(a1) >= 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      SystemInformationLength = 4 * HighestNodeNumber + 4;
      v6 = (_WORD *)ExAllocatePool2(66LL, 4LL * HighestNodeNumber + 4, 538985550);
      v7 = v6;
      if ( v6 )
      {
        if ( NtQuerySystemInformationEx(
               SystemNodeDistanceInformation,
               &a1->NumaNodeId,
               2u,
               v6,
               SystemInformationLength,
               0LL) >= 0
          && ndisMaxNumberOfProcessors )
        {
          v8 = ndisMaxNumberOfProcessors;
          p_NodeId = &ndisCpuInfo->NodeId;
          do
          {
            v10 = *p_NodeId;
            p_NodeId += 10;
            a1->NumaDistances[v3++] = v7[2 * v10];
            --v8;
          }
          while ( v8 );
        }
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x72u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  }
}
