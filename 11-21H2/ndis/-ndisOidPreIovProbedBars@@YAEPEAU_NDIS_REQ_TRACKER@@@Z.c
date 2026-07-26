/*
 * XREFs of ?ndisOidPreIovProbedBars@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0073EA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreIovProbedBars(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // bl
  int v5; // eax
  unsigned __int64 v6; // rdx
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x49u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      v3,
      v1);
  v4 = 0;
  if ( *(_DWORD *)(v1 + 4) )
  {
    v5 = -1073741637;
    v4 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = 0;
  v6 = *(unsigned int *)(v1 + 48);
  if ( (unsigned int)v6 < 8 )
  {
    *(_DWORD *)(v1 + 56) = 8;
    v5 = -1073676268;
LABEL_7:
    *((_DWORD *)a1 + 10) = v5;
    v4 = 1;
    goto LABEL_13;
  }
  if ( (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 40) + 4LL) + 24 < v6 )
  {
    v5 = -1073741811;
    goto LABEL_7;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
    v5 = -1073741637;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_13:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x4Au,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      v3,
      v4,
      *(_DWORD *)v8);
  }
  return v4;
}
