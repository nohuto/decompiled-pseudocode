/*
 * XREFs of ?ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z @ 0x1C007604C
 * Callers:
 *     ?ndisOidPostIovFreeVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077190 (-ndisOidPostIovFreeVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CDB0 (WPP_RECORDER_SF_qqL.c)
 */

__int64 __fastcall ndisIovFreeVF(struct _NDIS_VF_BLOCK *a1)
{
  unsigned int v1; // ebx
  struct _NDIS_VF_BLOCK *v2; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rcx
  struct _NDIS_VF_BLOCK **v7; // rax
  __int64 v8; // rdx
  struct _NDIS_VF_BLOCK **v9; // rcx
  __int64 v10; // rdx
  struct _NDIS_VF_BLOCK **v11; // rcx
  KIRQL v12; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1;
  LOBYTE(v3) = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x25u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      0,
      a1);
  if ( *((_DWORD *)v2 + 19) )
  {
    v1 = -1073741811;
    goto LABEL_18;
  }
  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v2 + 6);
  v4 = *((_QWORD *)v2 + 7);
  v5 = *((_QWORD *)v2 + 8);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
  if ( v3 )
  {
    v6 = *(_QWORD *)v2;
    if ( *(struct _NDIS_VF_BLOCK **)(*(_QWORD *)v2 + 8LL) != v2 )
      goto LABEL_21;
    v7 = (struct _NDIS_VF_BLOCK **)*((_QWORD *)v2 + 1);
    if ( *v7 != v2 )
      goto LABEL_21;
    *v7 = (struct _NDIS_VF_BLOCK *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    --v3->NumAllocatedVFs;
  }
  if ( v4 )
  {
    v8 = *((_QWORD *)v2 + 2);
    if ( *(struct _NDIS_VF_BLOCK **)(v8 + 8) != (struct _NDIS_VF_BLOCK *)((char *)v2 + 16) )
      goto LABEL_21;
    v9 = (struct _NDIS_VF_BLOCK **)*((_QWORD *)v2 + 3);
    if ( *v9 != (struct _NDIS_VF_BLOCK *)((char *)v2 + 16) )
      goto LABEL_21;
    *v9 = (struct _NDIS_VF_BLOCK *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    --*(_DWORD *)(v4 + 800);
  }
  if ( v5 )
  {
    v10 = *((_QWORD *)v2 + 4);
    if ( *(struct _NDIS_VF_BLOCK **)(v10 + 8) == (struct _NDIS_VF_BLOCK *)((char *)v2 + 32) )
    {
      v11 = (struct _NDIS_VF_BLOCK **)*((_QWORD *)v2 + 5);
      if ( *v11 == (struct _NDIS_VF_BLOCK *)((char *)v2 + 32) )
      {
        *v11 = (struct _NDIS_VF_BLOCK *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        --*(_DWORD *)(v5 + 72);
        goto LABEL_17;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_17:
  v12 = NewIrql;
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v12);
  ExFreePoolWithTag(v2, 0);
  LOBYTE(v2) = 0;
LABEL_18:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x26u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      (char)v2,
      v1);
  return v1;
}
