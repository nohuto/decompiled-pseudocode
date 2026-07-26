/*
 * XREFs of ?ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0075F6C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovFreeVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v4; // bl
  int v5; // r11d
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _BYTE *OidSourceHandle; // rax
  _LIST_ENTRY *VFByVFId; // rax
  _LIST_ENTRY *v9; // r10
  char v11[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x23u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_18;
  LOBYTE(v5) = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    *(_DWORD *)(v1 + 56) = 10;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_7;
  SriovCurrentCapabilities = v3->SriovCurrentCapabilities;
  if ( SriovCurrentCapabilities
    && v3->NicSwitchCurrentCapabilities
    && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3
    && (OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1)) != 0LL
    && *OidSourceHandle == 18 )
  {
    VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 8LL));
    if ( VFByVFId && VFByVFId[3].Blink == v9 && HIDWORD(VFByVFId[4].Blink) == v5 )
    {
      *(_QWORD *)(v1 + 144) = VFByVFId;
LABEL_7:
      v4 = v5;
      goto LABEL_19;
    }
    *((_DWORD *)a1 + 10) = -1073741811;
  }
  else
  {
LABEL_18:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_19:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x24u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v4,
      *(_DWORD *)v11);
  }
  return v4;
}
