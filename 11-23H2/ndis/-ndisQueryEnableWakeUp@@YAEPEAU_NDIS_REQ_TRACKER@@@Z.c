/*
 * XREFs of ?ndisQueryEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00988AC
 * Callers:
 *     ?ndisOidPreEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095E70 (-ndisOidPreEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0098918 (-ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisQueryEnableWakeUp(struct _NDIS_REQ_TRACKER *a1)
{
  char v2; // r8
  struct _NDIS_OPEN_BLOCK *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = 0;
  v3 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 4);
  v5 = *(_QWORD *)a1;
  if ( v3 )
  {
    *((_DWORD *)a1 + 10) = ndisQueryOpenEnableWakeUp(v3, (struct _NDIS_OID_REQUEST *)v4);
    return 1;
  }
  if ( v5 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v4 + 48) >= 4u )
    {
      **(_DWORD **)(v4 + 40) = *(_DWORD *)(v5 + 1292);
      *(_QWORD *)(v4 + 52) = 4LL;
    }
    else
    {
      *(_DWORD *)(v4 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    return 1;
  }
  return v2;
}
