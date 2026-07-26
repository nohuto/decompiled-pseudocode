/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C008221C
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0082080 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008213C (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisCalculateRssV2ParametersFlags@@YAKPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0080EC8 (-ndisCalculateRssV2ParametersFlags@@YAKPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C008127C (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008198C (-ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  unsigned int v6; // ebx
  struct _NDIS_VPORT_BLOCK *v7; // r14
  unsigned int HashSecretKeyOffset; // ecx
  unsigned int v9; // ebp
  UINT v10; // ebp
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v11; // rcx
  int v12; // eax
  __int64 v13; // r10
  _DWORD *v14; // r11
  int v15; // eax
  unsigned int v16; // eax
  KIRQL v17; // dl
  __int64 v19; // [rsp+30h] [rbp-48h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  struct _NDIS_VPORT_BLOCK *v21; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v22; // [rsp+98h] [rbp+20h] BYREF

  NewIrql = 0;
  v22 = 0LL;
  v21 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_c3a5b58c3f75330003e91651c017d5c9_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( a1->RecvScaleCapabilities.Header.Size )
  {
    ndisGetCombinedRSSParameters(a1, a2, &v21, &v22, 0LL, 0LL);
    if ( ndisIsRssEnabledForRequest(a1, a2) )
    {
      v7 = v21;
      if ( v21 )
      {
        HashSecretKeyOffset = v22->HashSecretKeyOffset;
        v9 = HashSecretKeyOffset + v22->HashSecretKeySize;
        if ( v9 < HashSecretKeyOffset )
        {
          v6 = -1073676267;
        }
        else
        {
          v10 = v9 + 28;
          v6 = 0;
          if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v10 )
          {
            v11 = v22;
            *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = 1835464;
            v12 = ndisCalculateRssV2ParametersFlags(v11);
            v14[1] = v12;
            v14[5] = v7->VPortParams.NumQueuePairs;
            v14[6] = *(unsigned __int16 *)(v13 + 12) >> 2;
            v15 = *(_DWORD *)(v13 + 8);
            if ( a3 )
              v15 = a3 | (unsigned __int8)v15;
            v14[2] = v15;
            v16 = *(unsigned __int16 *)(v13 + 20);
            v14[3] = v16;
            v14[4] = 28;
            if ( v16 )
              memmove(v14 + 7, (const void *)(v13 + *(unsigned int *)(v13 + 24)), v16);
            a2->DATA.QUERY_INFORMATION.BytesWritten = v10;
          }
          else
          {
            a2->DATA.QUERY_INFORMATION.BytesNeeded = v10;
            v6 = -1073676268;
          }
        }
      }
      else
      {
        v6 = -1073741811;
      }
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v17 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v17);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_c3a5b58c3f75330003e91651c017d5c9_Traceguids,
      (char)a1,
      v19);
  }
  return v6;
}
