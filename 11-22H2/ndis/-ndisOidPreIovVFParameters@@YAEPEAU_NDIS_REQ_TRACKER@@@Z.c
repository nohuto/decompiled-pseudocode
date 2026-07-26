/*
 * XREFs of ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00799C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0075F6C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovVFParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // r15
  int *v4; // rsi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // rcx
  __int64 v10; // r10
  _LIST_ENTRY *VFByVFId; // rax
  void *v12; // r10

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x27u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  v4 = (int *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_18;
  v5 = 0;
  *v4 = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x660u )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x660u )
    {
      v5 = -1073676266;
      goto LABEL_8;
    }
    v7 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
    {
      v8 = 0;
      goto LABEL_21;
    }
    v9 = *(_QWORD *)(v7 + 4608);
    if ( v9 && *(_QWORD *)(v7 + 3568) && (*(_BYTE *)(v9 + 8) & 3) == 3 )
    {
      v10 = *(_QWORD *)(v1 + 40);
      *(_DWORD *)(v1 + 64) = 1632;
      VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(v10 + 1626));
      if ( !VFByVFId )
      {
        v6 = -1073741811;
        v5 = -1073741811;
        goto LABEL_9;
      }
      memmove(v12, &VFByVFId[6], 0x660uLL);
      *(_DWORD *)(v1 + 60) = 1632;
LABEL_19:
      *v4 = v5;
      goto LABEL_20;
    }
LABEL_18:
    v5 = -1073741637;
    goto LABEL_19;
  }
  v5 = -1073676268;
LABEL_8:
  v6 = v5;
  *(_DWORD *)(v1 + 68) = 1632;
LABEL_9:
  *v4 = v6;
LABEL_20:
  v8 = 1;
LABEL_21:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x28u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v8,
      v5);
  return v8;
}
