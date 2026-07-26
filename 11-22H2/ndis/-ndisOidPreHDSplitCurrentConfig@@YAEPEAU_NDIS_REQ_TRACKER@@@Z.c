/*
 * XREFs of ?ndisOidPreHDSplitCurrentConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1770
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 */

unsigned __int8 __fastcall ndisOidPreHDSplitCurrentConfig(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rbp
  _DWORD *v4; // rdi
  unsigned __int8 v5; // bl
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  __int64 v7; // rcx
  KIRQL v8; // dl
  char v10[4]; // [rsp+38h] [rbp-20h]
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA6u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    v4 = (_DWORD *)((char *)a1 + 40);
    v5 = 1;
    *v4 = -1073741637;
    goto LABEL_16;
  }
  if ( !*(_QWORD *)a1 )
  {
    v5 = 0;
    v4 = (_DWORD *)((char *)a1 + 40);
    goto LABEL_16;
  }
  v5 = 1;
  if ( v1->MajorNdisVersion <= 6u && (v1->MajorNdisVersion != 6 || !v1->MinorNdisVersion) )
  {
    v4 = (_DWORD *)((char *)a1 + 40);
LABEL_11:
    *v4 = -1073741637;
    goto LABEL_16;
  }
  v4 = (_DWORD *)((char *)a1 + 40);
  if ( !v1->HDSplitCurrentConfig )
    goto LABEL_11;
  *v4 = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x1Cu )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
    HDSplitCurrentConfig = v1->HDSplitCurrentConfig;
    v7 = *(_QWORD *)(v3 + 40);
    v8 = NewIrql;
    *(_OWORD *)v7 = *(_OWORD *)&HDSplitCurrentConfig->Header.Type;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags;
    *(_DWORD *)(v7 + 24) = HDSplitCurrentConfig->MaxHeaderSize;
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(&v1->Lock, v8);
    *(_DWORD *)(v3 + 56) = 28;
    *(_DWORD *)(v3 + 52) = 28;
    *v4 = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 28;
    *v4 = -1073676268;
  }
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA7u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v1,
      *v4,
      *(_DWORD *)v10);
  }
  return v5;
}
