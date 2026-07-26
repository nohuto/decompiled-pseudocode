/*
 * XREFs of ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C478 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001D438 (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

void __fastcall ndisOidPostEthMulticastOid(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // rbp
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // eax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v1 + 4) == 1
    && (!v3 || !*(_DWORD *)(v3 + 464))
    && (!v4 || v4->MiniportHandle->MediaType == NdisMedium802_3) )
  {
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 464) && *((_DWORD *)a1 + 10) )
      {
        v5 = *(_QWORD *)(v3 + 400);
        memmove(*(void **)(v5 + 376), *(const void **)(v5 + 392), (unsigned int)(6 * *(_DWORD *)(v5 + 400)));
        *(_DWORD *)(v5 + 384) = *(_DWORD *)(v5 + 400);
      }
      ndisIfGetRcvAddressFromMiniport((struct _NDIS_MINIPORT_BLOCK *)v3);
    }
    if ( v4 )
    {
      if ( v4->MiniportHandle->MediaType == NdisMedium802_3 )
      {
        v6 = *((_DWORD *)a1 + 10);
        if ( v6 != -1073741637 )
        {
          ndisPostOpenSetMulticastList(v4, (struct _NDIS_OID_REQUEST *)v1, v6);
          if ( *(_DWORD *)(v1 + 32) == 16843011 )
          {
            v7 = *(_DWORD *)(v1 + 144);
            *(_DWORD *)(v1 + 144) = 0;
            *(_DWORD *)(v1 + 32) = v7;
          }
        }
      }
    }
  }
}
