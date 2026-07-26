/*
 * XREFs of ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A83C4 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 */

char __fastcall ndisOidPreQosSetParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  int *v5; // rsi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v11 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x59u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v3,
      v1);
  v5 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    v2 = 1;
    *v5 = -1073741637;
    goto LABEL_21;
  }
  *v5 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x34u )
  {
    v6 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 52;
    *v5 = v6;
LABEL_10:
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
    v7 = ndisValidateQosParameters(v3, 1u, *(struct _NDIS_QOS_PARAMETERS **)(v1 + 40), *(_DWORD *)(v1 + 48), &v11);
    *v5 = v7;
    if ( v7 )
    {
      if ( v7 == -1073676268 )
        *(_DWORD *)(v1 + 68) = v11;
      goto LABEL_10;
    }
    v8 = v11;
    *v5 = 0;
    if ( *(_DWORD *)(v1 + 48) < v8 )
    {
      *(_DWORD *)(v1 + 68) = v8;
      v9 = -1073676268;
LABEL_19:
      *v5 = v9;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v1 + 52) < v8 )
    {
      *(_DWORD *)(v1 + 68) = v8;
      v9 = -1073676266;
      goto LABEL_19;
    }
    *(_DWORD *)(v1 + 60) = 0;
    *(_DWORD *)(v1 + 64) = v11;
  }
LABEL_21:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Au,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v3,
      v2,
      *v5);
  return v2;
}
