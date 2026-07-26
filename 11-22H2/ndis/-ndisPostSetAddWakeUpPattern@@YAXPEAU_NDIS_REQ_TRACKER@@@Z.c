/*
 * XREFs of ?ndisPostSetAddWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0097E30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094784 (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094830 (-ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisPostSetAddWakeUpPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  void *v8; // rbx
  __int64 v9; // rcx
  void *v10; // rcx
  void *OidContext; // rcx
  PVOID *v12; // rbx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *(_DWORD *)(v1 + 88);
  if ( (v6 & 0x40000) == 0 && (v6 & 0x80000) == 0 )
  {
    if ( !*((_DWORD *)a1 + 10) )
    {
      if ( v4 )
      {
        if ( v4->MajorNdisVersion <= 6u && (v4->MajorNdisVersion != 6 || v4->MinorNdisVersion < 0x14u) )
        {
          ndisMiniportPostAddWakeUpPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
          goto LABEL_15;
        }
        ndisMiniportPostAddWOLPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
      }
      else
      {
        if ( !v5 )
          goto LABEL_15;
        v7 = *(_QWORD *)(v5 + 16);
        if ( *(_BYTE *)(v7 + 100) <= 6u && (*(_BYTE *)(v7 + 100) != 6 || *(_BYTE *)(v7 + 101) < 0x14u) )
          goto LABEL_15;
      }
      v8 = *(void **)(v1 + 144);
      *(_DWORD *)(v1 + 152) = *(_DWORD *)(*((_QWORD *)v8 + 3) + 148LL);
      ExFreePoolWithTag(*((PVOID *)v8 + 3), 0);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)v8;
      *(_QWORD *)(v1 + 40) = *((_QWORD *)v8 + 1);
      *(_DWORD *)(v1 + 48) = *((_DWORD *)v8 + 4);
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(v1 + 144) = 0LL;
LABEL_15:
      if ( *((_QWORD *)a1 + 3) )
      {
        v9 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v9 + 40) = *(_DWORD *)(v1 + 152);
        *(_QWORD *)v9 = *(_QWORD *)(v3 + 496);
        *(_QWORD *)(v3 + 496) = v9;
      }
      return;
    }
    if ( v3 )
    {
      v10 = *(void **)(v1 + 160);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    if ( *(_QWORD *)a1 )
    {
      OidContext = v4->OidContext;
      v4->OidContext = 0LL;
      if ( OidContext )
        ExFreePoolWithTag(OidContext, 0);
    }
    v12 = *(PVOID **)(v1 + 144);
    if ( v12 )
    {
      ExFreePoolWithTag(v12[3], 0);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)v12;
      *(_QWORD *)(v1 + 40) = v12[1];
      *(_DWORD *)(v1 + 48) = *((_DWORD *)v12 + 4);
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(v1 + 144) = 0LL;
    }
    *(_DWORD *)(v1 + 152) = 0;
  }
}
