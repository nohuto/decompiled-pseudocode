/*
 * XREFs of ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00B03F0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009FB0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C00BFDA4 (-ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+38h] [rbp-40h]
  _QWORD v8[5]; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+68h] [rbp-10h]
  int v10; // [rsp+6Ch] [rbp-Ch]

  v1 = Parameter[3];
  v2 = Parameter[1];
  v3 = *(_DWORD *)(v1 + 80);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = *(_DWORD *)(v1 + 80);
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
      v2,
      v1,
      v7);
  }
  v9 = v3;
  v8[0] = 0LL;
  v8[1] = 0LL;
  v8[3] = 0LL;
  v10 = 0;
  v8[2] = v2;
  v8[4] = v1;
  ndisReferenceRefNoCheck((PKSPIN_LOCK)(v2 + 312), 0x14u);
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v8, v4, v5, v6);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 0x14u);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x18u,
      (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
      v2,
      v1);
}
