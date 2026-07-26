/*
 * XREFs of ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C00973C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094EF0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  struct _NDIS_FILTER_BLOCK *v2; // rbp
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int128 v10; // [rsp+50h] [rbp-38h]
  __int128 v11; // [rsp+60h] [rbp-28h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  v2 = (struct _NDIS_FILTER_BLOCK *)P[5];
  v4 = P[6];
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x44u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)v1,
      v4);
  DWORD2(v11) = ndisOidPMAddRemove(v1, v2, (struct _NDIS_OID_REQUEST *)v4);
  v5 = DWORD2(v11);
  *(_QWORD *)&v11 = v4;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v9, v6, v7, v8);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0xEu);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x45u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)v1,
      v4,
      v5,
      v9,
      v10);
}
