/*
 * XREFs of ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009819C
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00963A0 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092A30 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreQueryPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  int v7; // edx
  char v8; // r9
  _NDIS_PM_PARAMETERS *p_PMCurrentParameters; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int16 v12; // r8
  __int128 v13; // xmm0
  int v15; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = MiniportFromReqTracker;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x30u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  v7 = 16;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_17;
  }
  v8 = 2;
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    p_PMCurrentParameters = &v6->PMCurrentParameters;
LABEL_13:
    v11 = *(_QWORD *)(v1 + 40);
    v12 = 20;
    v13 = *(_OWORD *)&p_PMCurrentParameters->Header.Type;
    if ( *(_DWORD *)(v1 + 48) >= 0x14u )
    {
      *(_OWORD *)v11 = v13;
      v7 = 20;
      *(_DWORD *)(v11 + 16) = p_PMCurrentParameters->MediaSpecificWakeUpEvents;
    }
    else
    {
      *(_OWORD *)v11 = v13;
      v8 = 1;
      v12 = 16;
    }
    *(_BYTE *)v11 = 0x80;
    *(_WORD *)(v11 + 2) = v12;
    *(_BYTE *)(v11 + 1) = v8;
    *(_DWORD *)(v1 + 52) = v7;
    *(_DWORD *)(v1 + 56) = 0;
    goto LABEL_17;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v5 + 308);
    goto LABEL_13;
  }
  v10 = *((_QWORD *)a1 + 1);
  if ( v10 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v10 + 728);
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_17:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = 1;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x31u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)v6,
      *((_DWORD *)a1 + 10),
      v15);
  }
  return 1;
}
