/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0087750
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00875B4 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087670 (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0086788 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0086EB0 (-ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  unsigned int v6; // ebx
  struct _NDIS_VPORT_BLOCK *v7; // r8
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v8; // r9
  unsigned int HashSecretKeyOffset; // ecx
  unsigned int v10; // ebp
  UINT v11; // ebp
  _DWORD *InformationBuffer; // r10
  int v13; // edx
  unsigned __int16 Flags; // r11
  int HashInformation; // eax
  unsigned int HashSecretKeySize; // eax
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
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
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
        v8 = v22;
        HashSecretKeyOffset = v22->HashSecretKeyOffset;
        v10 = HashSecretKeyOffset + v22->HashSecretKeySize;
        if ( v10 < HashSecretKeyOffset )
        {
          v6 = -1073676267;
        }
        else
        {
          v11 = v10 + 28;
          v6 = 0;
          if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v11 )
          {
            InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
            v13 = 0;
            *InformationBuffer = 1835464;
            Flags = v8->Flags;
            if ( (Flags & 0x10) == 0 && LOBYTE(v8->HashInformation) )
            {
              v13 = ~(_BYTE)Flags & 2 | 5;
              if ( (Flags & 8) != 0 )
                v13 = ~(_BYTE)Flags & 2 | 1;
              if ( (Flags & 4) == 0 )
                v13 |= 0x10u;
            }
            InformationBuffer[1] = v13;
            InformationBuffer[5] = v7->VPortParams.NumQueuePairs;
            InformationBuffer[6] = v8->IndirectionTableSize >> 2;
            HashInformation = v8->HashInformation;
            if ( a3 )
              HashInformation = a3 | (unsigned __int8)HashInformation;
            InformationBuffer[2] = HashInformation;
            HashSecretKeySize = v8->HashSecretKeySize;
            InformationBuffer[3] = HashSecretKeySize;
            InformationBuffer[4] = 28;
            if ( (_WORD)HashSecretKeySize )
              memmove(InformationBuffer + 7, &v8->Header.Type + v8->HashSecretKeyOffset, HashSecretKeySize);
            a2->DATA.QUERY_INFORMATION.BytesWritten = v11;
          }
          else
          {
            a2->DATA.QUERY_INFORMATION.BytesNeeded = v11;
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
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
      (char)a1,
      v19);
  }
  return v6;
}
