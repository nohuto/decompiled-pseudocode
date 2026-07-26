/*
 * XREFs of ?ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008E0BC
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D854 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00943BC (-ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicateWoLPatternReject(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  char v2; // bp
  int v5; // edx
  __int64 v6; // rax
  UCHAR *v7; // rcx
  __int64 *i; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  void **v11; // rcx

  v2 = 0;
  if ( a2->StatusBufferSize >= 4 )
  {
    v5 = *(_DWORD *)a2->StatusBuffer;
    if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
      v6 = 968LL;
    else
      v6 = 960LL;
    v7 = &a1->Header.Type + v6;
    for ( i = *(__int64 **)v7; i; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 10) == v5 )
      {
        *(_QWORD *)v7 = *i;
        LODWORD(a2->NdisReserved[2]) = 0;
        v9 = i + 1;
        if ( v9 )
        {
          do
          {
            v10 = v9;
            v9 = (_QWORD *)*v9;
            v11 = (void **)(v10 - 1);
            if ( v11[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(v11, 0);
            ++LODWORD(a2->NdisReserved[2]);
          }
          while ( v9 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForPatterns(a1);
            ndisGetCombinedPMConfig(a1, &a1->PMCurrentParameters);
          }
        }
        return;
      }
      v7 = (UCHAR *)i;
    }
  }
}
