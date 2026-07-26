/*
 * XREFs of ?ndisOidPostPMParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009B120 (-ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisOidPostPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0

  v1 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x34u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      *(_QWORD *)a1,
      v1);
  if ( *(_DWORD *)(v1 + 4) == 1 && *(_DWORD *)(v1 + 48) >= 0x10u )
  {
    if ( *(_DWORD *)(v1 + 32) == -50265850 )
      ndisXlateWakeUpEnableToPMParametersOid((struct _NDIS_OID_REQUEST *)v1);
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 )
    {
      v5 = (__int128 *)(v3 + 308);
    }
    else
    {
      v4 = *((_QWORD *)a1 + 1);
      if ( !v4 || (*(_DWORD *)(v1 + 88) & 0x4000) != 0 )
        goto LABEL_15;
      v5 = (__int128 *)(v4 + 728);
    }
    v6 = *(_QWORD *)(v1 + 40);
    v7 = *v5;
    if ( *(_DWORD *)(v1 + 48) >= 0x14u )
    {
      *(_OWORD *)v6 = v7;
      *(_DWORD *)(v6 + 16) = *((_DWORD *)v5 + 4);
    }
    else
    {
      *(_OWORD *)v6 = v7;
    }
  }
LABEL_15:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x35u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      *(_QWORD *)a1,
      v1);
}
