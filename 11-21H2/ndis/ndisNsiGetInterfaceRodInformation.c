/*
 * XREFs of ndisNsiGetInterfaceRodInformation @ 0x1C0102390
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B3C0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E330 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000D5C0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C01027B0 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C0133138 (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *p_ifOperStatusFlags,
        __int64 a3)
{
  unsigned int v3; // r15d
  struct _NDIS_IF_BLOCK *v4; // r10
  __int64 v5; // r13
  struct _NDIS_IF_BLOCK *v6; // r12
  struct _NDIS_IF_BLOCK *v7; // rsi
  int v8; // ecx
  int v9; // edi
  char v10; // r8
  int v11; // r14d
  char *v12; // r13
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  int v15; // esi
  unsigned int v16; // ecx
  int v17; // edi
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v20)(void *, _QWORD, unsigned int *, char *); // rax
  int v21; // [rsp+50h] [rbp-58h]
  struct _NDIS_IF_BLOCK *v22; // [rsp+58h] [rbp-50h]
  char v24; // [rsp+B8h] [rbp+10h]
  unsigned int v26; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = p_ifOperStatusFlags;
  v5 = a3;
  if ( !p_ifOperStatusFlags )
    v4 = a1;
  v6 = p_ifOperStatusFlags;
  v22 = v4;
  v7 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)a1,
      (char)p_ifOperStatusFlags,
      a3);
    v4 = v22;
  }
  v8 = *(_DWORD *)(v5 + 48);
  v9 = *(_DWORD *)(v5 + 52);
  v21 = v8;
  if ( *(_QWORD *)(v5 + 40) )
  {
    v10 = 0;
    v24 = 0;
    v11 = *(_DWORD *)(v5 + 48);
    if ( v8 > 0 )
    {
      v12 = *(char **)(v5 + 40);
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_18:
          v5 = a3;
          goto LABEL_19;
        }
        v13 = 0;
        p_ifOperStatusFlags = 0LL;
        if ( v9 )
        {
          switch ( v9 )
          {
            case 0:
              goto LABEL_11;
            case 4:
              v14 = 4;
              v15 = 8;
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v4)->ifOperStatusFlags;
              goto LABEL_12;
            case 8:
              v14 = 4;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->MediaConnectState;
              else
                v13 = 66186;
              v15 = 12;
              goto LABEL_12;
            case 12:
              v14 = 4;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->MediaDuplexState;
              else
                v13 = 66188;
              v15 = 16;
              goto LABEL_12;
            case 16:
              v14 = 4;
              v13 = 65798;
              v15 = 20;
              goto LABEL_12;
            case 20:
              v14 = 1;
              if ( v7->bNdisIsProvider )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v7)->ifPromiscuousMode;
              else
                v13 = 66176;
              v15 = 21;
              goto LABEL_12;
            case 21:
              v14 = 1;
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&v7->ifDeviceWakeUpEnable;
              v15 = 24;
              goto LABEL_12;
            case 24:
              v14 = 8;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->XmitLinkSpeed;
              else
                v13 = 66180;
              v15 = 32;
              goto LABEL_12;
            case 32:
              v14 = 8;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->RcvLinkSpeed;
              else
                v13 = 66181;
              v15 = 40;
              goto LABEL_12;
            case 40:
              v14 = 8;
              v13 = 66177;
              v15 = 48;
              goto LABEL_12;
            case 48:
              v14 = 8;
              v13 = 66178;
              v15 = 56;
              goto LABEL_12;
            case 56:
              v14 = 8;
              v13 = 66182;
              v15 = 64;
              goto LABEL_12;
            case 64:
              if ( (unsigned int)v11 >= 0x90 && v7->bNdisIsProvider )
              {
                v14 = 144;
                v13 = 131334;
                v15 = 208;
              }
              else
              {
                v14 = 8;
                v13 = 131611;
                v15 = 72;
              }
              goto LABEL_12;
            case 72:
              v14 = 8;
              v13 = 131332;
              v15 = 80;
              goto LABEL_12;
            case 80:
              v14 = 8;
              v13 = 131609;
              v15 = 88;
              goto LABEL_12;
            case 88:
              v14 = 8;
              v13 = 131592;
              v15 = 96;
              goto LABEL_12;
            case 96:
              v14 = 8;
              v13 = 131594;
              v15 = 104;
              goto LABEL_12;
            case 104:
              v14 = 8;
              v13 = 131596;
              v15 = 112;
              goto LABEL_12;
            case 112:
              v14 = 8;
              v13 = 131610;
              v15 = 120;
              goto LABEL_12;
            case 120:
              v14 = 8;
              v13 = 131586;
              v15 = 128;
              goto LABEL_12;
            case 128:
              v14 = 8;
              v13 = 131588;
              v15 = 136;
              goto LABEL_12;
            case 136:
              v14 = 8;
              v13 = 131590;
              v15 = 144;
              goto LABEL_12;
            case 144:
              v14 = 8;
              v13 = 131331;
              v15 = 152;
              goto LABEL_12;
            case 152:
              v14 = 8;
              v13 = 131612;
              v15 = 160;
              goto LABEL_12;
            case 160:
              v14 = 8;
              v13 = 131591;
              v15 = 168;
              goto LABEL_12;
            case 168:
              v14 = 8;
              v13 = 131593;
              v15 = 176;
              goto LABEL_12;
            case 176:
              v14 = 8;
              v13 = 131595;
              v15 = 184;
              goto LABEL_12;
            case 184:
              v14 = 8;
              v13 = 131585;
              v15 = 192;
              goto LABEL_12;
            case 192:
              v14 = 8;
              v13 = 131587;
              v15 = 200;
              goto LABEL_12;
            case 200:
              v14 = 8;
              v13 = 131589;
              v15 = 208;
              goto LABEL_12;
            case 208:
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&v7->_NDIS_NSI_INTERFACE_ENUM_ROD;
              v14 = 4;
              v15 = 212;
              goto LABEL_12;
            case 212:
              v14 = 4;
              v24 = 1;
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&v4->SupportedStatistics;
              v15 = 216;
              goto LABEL_12;
            default:
              goto LABEL_83;
          }
        }
        if ( (unsigned int)v8 < 0xD8 || v6 )
        {
LABEL_11:
          v14 = 4;
          v13 = 66179;
          v15 = 4;
        }
        else
        {
          v14 = 216;
          v24 = 1;
          v15 = 216;
          v13 = 66183;
        }
LABEL_12:
        if ( v11 < (int)v14 )
          break;
        if ( v13 )
        {
          ProviderIfContext = v4->ProviderIfContext;
          v20 = (unsigned int (__fastcall *)(void *, _QWORD, unsigned int *, char *))*((_QWORD *)v4->ProviderHandle + 7);
          v26 = v14;
          if ( v20(ProviderIfContext, v13, &v26, v12) )
          {
            memset(v12, 0, v14);
          }
          else
          {
            if ( v26 < v14 )
              memset(&v12[v26], 0, v14 - v26);
            if ( !v22->bNdisIsProvider )
              ndisNsiPostGetInterfaceRodInformation(a1, v13, v14, v12);
          }
        }
        else
        {
          if ( !p_ifOperStatusFlags )
            break;
          memmove(v12, p_ifOperStatusFlags, v14);
        }
        v10 = v24;
        v16 = v15 - v9;
        v9 = v15;
        v12 += v16;
        v11 -= v16;
LABEL_17:
        v4 = v22;
        v7 = a1;
        v8 = v21;
        if ( v11 <= 0 )
          goto LABEL_18;
      }
LABEL_83:
      v10 = 1;
      v24 = 1;
      goto LABEL_17;
    }
LABEL_19:
    v17 = v9 - *(_DWORD *)(v5 + 52);
    *(_DWORD *)(v5 + 48) = v17;
    if ( !v17 )
      v3 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v5 + 48) = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifOperStatusFlags,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)v7,
      (char)v6,
      v5,
      v3);
  return v3;
}
