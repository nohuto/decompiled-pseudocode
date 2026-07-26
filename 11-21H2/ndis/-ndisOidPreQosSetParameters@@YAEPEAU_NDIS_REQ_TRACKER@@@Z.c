/*
 * XREFs of ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A1844 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 */

char __fastcall ndisOidPreQosSetParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  unsigned int v5; // r9d
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v10 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x59u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_21;
  }
  *((_DWORD *)a1 + 10) = 0;
  v5 = *(_DWORD *)(v1 + 48);
  if ( v5 < 0x34 )
  {
    v6 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 52;
LABEL_10:
    *((_DWORD *)a1 + 10) = v6;
LABEL_11:
    v2 = 1;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x34u )
  {
    v6 = -1073676266;
    goto LABEL_9;
  }
  if ( v3 )
  {
    v7 = ndisValidateQosParameters(v3, 1u, *(struct _NDIS_QOS_PARAMETERS **)(v1 + 40), v5, &v10);
    *((_DWORD *)a1 + 10) = v7;
    if ( v7 )
    {
      if ( v7 == -1073676268 )
        *(_DWORD *)(v1 + 68) = v10;
      goto LABEL_11;
    }
    v8 = v10;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < v8 )
    {
      *(_DWORD *)(v1 + 68) = v8;
      v6 = -1073676268;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v1 + 52) < v8 )
    {
      *(_DWORD *)(v1 + 68) = v8;
      v6 = -1073676266;
      goto LABEL_10;
    }
    *(_DWORD *)(v1 + 60) = 0;
    *(_DWORD *)(v1 + 64) = v10;
  }
LABEL_21:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Au,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)v3,
      v2,
      *((_DWORD *)a1 + 10));
  return v2;
}
