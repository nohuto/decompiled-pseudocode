/*
 * XREFs of ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C009E048
 * Callers:
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0028170 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0003A10 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0027E80 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisPcwAddCyclesToCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K1@Z @ 0x1C008C720 (-ndisPcwAddCyclesToCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K1@Z.c)
 */

void __fastcall ndisPostSetMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_RECEIVE_SCALE_PARAMETERS *RssParametersBuffer; // r9
  _DWORD *InformationBuffer; // rbx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int16 v11; // cx
  __int64 v12; // rdx
  unsigned int Number; // ecx
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v18; // [rsp+50h] [rbp-28h]
  KIRQL NewIrql; // [rsp+90h] [rbp+18h] BYREF

  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Du,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !a3 && ndisShouldCacheRSSParameters(a2) )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    RssParametersBuffer = (_NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
    a1->CombinedNdisRSSParameters = RssParametersBuffer;
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v8 = InformationBuffer[4] + *((unsigned __int16 *)InformationBuffer + 6);
    if ( *((_BYTE *)InformationBuffer + 1) < 2u )
      v9 = 0;
    else
      v9 = InformationBuffer[7] + InformationBuffer[8] * InformationBuffer[9];
    v10 = 1108;
    if ( v8 <= InformationBuffer[6] + (unsigned int)*((unsigned __int16 *)InformationBuffer + 10) )
      v8 = InformationBuffer[6] + *((unsigned __int16 *)InformationBuffer + 10);
    if ( v8 > v9 )
      v9 = v8;
    if ( v9 > 0x454 || (v10 = v9) != 0 )
      memmove(RssParametersBuffer, a2->DATA.QUERY_INFORMATION.InformationBuffer, v10);
    v11 = *((_WORD *)InformationBuffer + 2);
    if ( (v11 & 0x10) != 0 || !*((_BYTE *)InformationBuffer + 8) )
    {
      a1->CombinedNdisRSSParameters = 0LL;
    }
    else if ( (v11 & 4) == 0 )
    {
      NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)&v15, a1);
      if ( (v16 & 0x800) != 0 )
      {
        Number = v18;
        if ( v18 == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v18 = Number;
        }
        v12 = ndisPcwOffsetToPerCpuData;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v15 + ndisPcwPerCpuDataStride * Number + 88);
      }
      if ( (v17 & 0x800) != 0 )
        ndisPcwAddCyclesToCycleCounter((struct NDIS_PCW_CONTEXT *)&v15, v12, 2048LL, *(_QWORD *)&a2->NdisReserved[72]);
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = a3;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Eu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a2,
      v14);
  }
}
