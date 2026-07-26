/*
 * XREFs of ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A2620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A2008 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A2768 (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3184 (-ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // r15
  int v5; // ecx
  int v6; // ecx
  char v7; // bl
  __int64 v8; // rsi
  unsigned __int8 OffloadEncapsulation; // al

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAAu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      v4,
      v3);
  *((_DWORD *)a1 + 10) = -1073741637;
  v5 = *(_DWORD *)(v3 + 4);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v8 = *((_QWORD *)a1 + 4);
      if ( (*(_DWORD *)(v8 + 88) & 0x20) == 0
        || (OffloadEncapsulation = ndisOidPreOpenSetEncapsulation(
                                     *((struct _NDIS_OPEN_BLOCK **)a1 + 3),
                                     *((struct _NDIS_OID_REQUEST **)a1 + 4),
                                     (int *)a1 + 10),
            OffloadEncapsulation != 1) )
      {
        if ( *(_QWORD *)a1 )
          OffloadEncapsulation = ndisOidPreMiniportSetEncapsulation(
                                   *(struct _NDIS_MINIPORT_BLOCK **)a1,
                                   (struct _NDIS_OID_REQUEST *)v8,
                                   (int *)a1 + 10);
        else
          OffloadEncapsulation = 0;
      }
      goto LABEL_14;
    }
    if ( v6 != 1 )
    {
      v7 = 1;
      goto LABEL_15;
    }
  }
  OffloadEncapsulation = ndisOidPreQueryOffloadEncapsulation(a1);
LABEL_14:
  v7 = OffloadEncapsulation;
LABEL_15:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xABu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      v4,
      v7,
      *((_DWORD *)a1 + 10));
  return v7;
}
