/*
 * XREFs of ?ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0075F8C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovReadVFConfigSpace(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  int *v4; // r11
  char v5; // bl
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Bu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  v4 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v5 = 0;
  *v4 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    v6 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 20;
    *v4 = v6;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x14u )
  {
    v6 = -1073676266;
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL) + *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
  v8 = v7;
  if ( v7 < 0x14 )
    v8 = 20;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    v9 = -1073676268;
LABEL_16:
    *(_DWORD *)(v1 + 68) = v8;
    *v4 = v9;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < v7 )
  {
    v9 = -1073676266;
    goto LABEL_16;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *v4 = -1073741637;
LABEL_21:
    v5 = 1;
    goto LABEL_22;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v10;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(v11 + 4)) )
    {
      *v4 = -1073741811;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Cu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v5,
      *v4);
  return v5;
}
