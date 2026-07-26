/*
 * XREFs of ?ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0023F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 *     ?ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z @ 0x1C0090BD8 (-ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z.c)
 */

char __fastcall ndisOidPreOffloadHwCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  _DWORD *v5; // rdi

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC1u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
LABEL_10:
    *v5 = -1073741637;
    v4 = 1;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    v5 = (_DWORD *)((char *)a1 + 40);
    goto LABEL_6;
  }
  v5 = (_DWORD *)((char *)a1 + 40);
  if ( !*(_QWORD *)(v1 + 4096) )
    goto LABEL_10;
  *v5 = 0;
  v4 = 1;
  if ( *(_DWORD *)(v3 + 48) >= 0x70u )
  {
    ndisCopyNdisOffload(
      *(struct _NDIS_OFFLOAD **)(v3 + 40),
      (struct _NDIS_OFFLOAD *)(*(_QWORD *)(v1 + 4096) + 656LL),
      *(_DWORD *)(v3 + 48),
      (unsigned int *)(v3 + 52),
      1);
    *v5 = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 112;
    *v5 = -1073676268;
  }
LABEL_6:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      194,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      *v5,
      v4);
  return v4;
}
