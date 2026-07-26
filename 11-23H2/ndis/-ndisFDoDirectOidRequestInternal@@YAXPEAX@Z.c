/*
 * XREFs of ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x1C00B5310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007C88 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001E0DC (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00B54DC (ndisFInvokeDirectOidRequest.c)
 */

void __fastcall ndisFDoDirectOidRequestInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rbx
  __int64 v3; // rbp
  unsigned int DirectOidRequestCount; // ecx
  int v5; // edi
  bool v6; // zf
  KIRQL v7; // dl
  char v8[4]; // [rsp+40h] [rbp-28h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v1,
      v3);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(v1, &NewIrql);
  DirectOidRequestCount = v1->DirectOidRequestCount;
  if ( DirectOidRequestCount < 0x4E20 )
  {
    v6 = (v1->Flags & 0x10000) == 0;
    v1->LockThread = 0LL;
    v7 = NewIrql;
    if ( v6 )
    {
      v1->DirectOidRequestCount = DirectOidRequestCount + 1;
      KeReleaseSpinLock(&v1->Lock, v7);
      *(_DWORD *)(v3 + 88) |= 0x20000u;
      v5 = ndisFInvokeDirectOidRequest(&v1->Header, (struct _NDIS_OID_REQUEST *)v3);
      if ( v5 == 259 )
        goto LABEL_12;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(v1, &NewIrql);
      --v1->DirectOidRequestCount;
      v1->LockThread = 0LL;
      v7 = NewIrql;
    }
    else
    {
      v5 = -1073676286;
    }
    KeReleaseSpinLock(&v1->Lock, v7);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v1->DirectOidRequestCount;
      WPP_RECORDER_SF_qqDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x1Au,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)v1,
        v3,
        32,
        *(_DWORD *)v8);
    }
    v1->LockThread = 0LL;
    v5 = -1073741670;
    KeReleaseSpinLock(&v1->Lock, NewIrql);
  }
LABEL_12:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v1,
      v3);
  *(_DWORD *)Parameter = v5;
}
