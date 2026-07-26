/*
 * XREFs of ?ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0075F6C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovGetVFVendorDeviceId(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  int *v4; // r11
  char v5; // bl
  int v6; // eax
  int v7; // edx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x47u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  v4 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v5 = 0;
  *v4 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    v6 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 10;
    *v4 = v6;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xAu )
  {
    v6 = -1073676266;
    goto LABEL_9;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *v4 = -1073741637;
LABEL_14:
    v5 = 1;
    goto LABEL_15;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v7;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL)) )
    {
      *v4 = -1073741811;
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x48u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v5,
      *(_DWORD *)v9);
  }
  return v5;
}
