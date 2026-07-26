/*
 * XREFs of ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D688 (-ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D854 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008E7C0 (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008E86C (-ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisOidPostPMAddWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  int v5; // eax
  PVOID *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  PVOID *v12; // r14
  void *v13; // rcx
  void *v14; // rcx
  void *OidContext; // rcx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      v12 = *(PVOID **)(v1 + 144);
      if ( v12 )
      {
        ExFreePoolWithTag(v12[3], 0);
        *(_DWORD *)(v1 + 32) = *(_DWORD *)v12;
        *(_QWORD *)(v1 + 40) = v12[1];
        *(_DWORD *)(v1 + 48) = *((_DWORD *)v12 + 4);
        ExFreePoolWithTag(v12, 0);
        *(_QWORD *)(v1 + 144) = 0LL;
        v3 = *((_QWORD *)a1 + 3);
      }
      if ( v3 )
      {
        v13 = *(void **)(v1 + 160);
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
      }
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v14 = *(void **)(v1 + 160);
          if ( v14 )
            ExFreePoolWithTag(v14, 0);
        }
      }
      if ( *(_QWORD *)a1 )
      {
        OidContext = v4->OidContext;
        v4->OidContext = 0LL;
        if ( OidContext )
          ExFreePoolWithTag(OidContext, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        if ( v4->MajorNdisVersion > 6u || v4->MajorNdisVersion == 6 && v4->MinorNdisVersion >= 0x14u )
        {
          ndisMiniportPostAddWOLPattern(*(struct _NDIS_MINIPORT_BLOCK **)a1, (struct _NDIS_OID_REQUEST *)v1);
          if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqWmi )
          {
            ndisEnablePMParamForPattern(*(struct _NDIS_PM_WOL_PATTERN **)(v1 + 40), &v4->PMWmiParameters);
            ndisGetCombinedPMConfig(v4, &v4->PMCurrentParameters);
          }
        }
        else
        {
          ndisMiniportPostAddWakeUpPattern(*(struct _NDIS_MINIPORT_BLOCK **)a1, (struct _NDIS_OID_REQUEST *)v1);
          v6 = *(PVOID **)(v1 + 144);
          ExFreePoolWithTag(v6[3], 0);
          *(_DWORD *)(v1 + 32) = *(_DWORD *)v6;
          *(_QWORD *)(v1 + 40) = v6[1];
          *(_DWORD *)(v1 + 48) = *((_DWORD *)v6 + 4);
          ExFreePoolWithTag(v6, 0);
          *(_QWORD *)(v1 + 144) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = *(_DWORD *)(v1 + 152);
        }
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v7 = *(_QWORD *)(v1 + 40);
        v8 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v8 + 196) = *(_DWORD *)(v7 + 148);
        *(_DWORD *)(v8 + 40) = *(_DWORD *)(v7 + 148);
        *(_QWORD *)v8 = *(_QWORD *)(v3 + 504);
        *(_QWORD *)(v3 + 504) = v8;
      }
      v9 = *((_QWORD *)a1 + 1);
      if ( v9 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v10 = *(_QWORD *)(v1 + 40);
          v11 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v11 + 196) = *(_DWORD *)(v10 + 148);
          *(_DWORD *)(v11 + 40) = *(_DWORD *)(v10 + 148);
          *(_QWORD *)v11 = *(_QWORD *)(v9 + 712);
          *(_QWORD *)(v9 + 712) = v11;
        }
      }
    }
  }
}
