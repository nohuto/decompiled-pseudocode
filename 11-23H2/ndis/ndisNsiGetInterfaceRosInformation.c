/*
 * XREFs of ndisNsiGetInterfaceRosInformation @ 0x1C010D650
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000ABC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000DB10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CDB0 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F530 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00112C0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C013E2E4 (-ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosInformation(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  struct _NDIS_IF_BLOCK *v5; // r15
  struct _NDIS_IF_BLOCK *v6; // r8
  char *v7; // r13
  unsigned int v8; // r14d
  int v9; // edi
  char v10; // al
  const void *p_ifType; // rbx
  unsigned int v12; // esi
  unsigned int v13; // ebp
  int v14; // r15d
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  struct _NDIS_MINIPORT_BLOCK *v18; // rax
  struct _NDIS_MINIPORT_BLOCK *v19; // rdx
  signed __int32 InterlockedFlags; // eax
  signed __int32 v21; // ett
  unsigned int v22; // ecx
  struct _NDIS_IF_BLOCK *v23; // [rsp+40h] [rbp-58h]
  struct _NDIS_IF_BLOCK *v25; // [rsp+A8h] [rbp+10h]
  char v27; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = a3;
  v5 = a1;
  if ( !a2 )
    a2 = a1;
  v25 = a2;
  v6 = a2;
  v23 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)a1,
      v4);
    a2 = v25;
    v6 = v25;
  }
  v7 = *(char **)(v4 + 40);
  v8 = *(_DWORD *)(v4 + 52);
  v9 = *(_DWORD *)(v4 + 48);
  if ( v7 )
  {
    v10 = 0;
    v27 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_21:
          v4 = a3;
          break;
        }
        p_ifType = 0LL;
        v12 = 0;
        if ( v8 <= 0x208 )
        {
          if ( v8 == 520 )
          {
            p_ifType = &v5->ifType;
            v13 = 2;
            v14 = 524;
          }
          else if ( v8 )
          {
            if ( v8 != 4 )
            {
LABEL_48:
              v10 = 1;
              v27 = 1;
              goto LABEL_20;
            }
            v13 = 516;
            p_ifType = &v5->ifDescr;
            v14 = 520;
          }
          else
          {
            v13 = 4;
            p_ifType = &v5->_NDIS_NSI_INTERFACE_ENUM_ROS;
            v14 = 4;
          }
        }
        else
        {
          switch ( v8 )
          {
            case 0x20Cu:
              p_ifType = &v6->AccessType;
              v14 = 528;
              break;
            case 0x210u:
              p_ifType = &v5->DirectionType;
              v14 = 532;
              break;
            case 0x214u:
              p_ifType = &v6->ConnectionType;
              v14 = 536;
              break;
            case 0x218u:
              p_ifType = &v5->InterfaceGuid;
              v13 = 16;
              v14 = 552;
              goto LABEL_16;
            case 0x228u:
              p_ifType = &v5->ifConnectorPresent;
              v13 = 1;
              v14 = 554;
              goto LABEL_16;
            case 0x22Au:
              v13 = 34;
              if ( v5->bNdisIsProvider )
                p_ifType = &v6->PermanentPhysAddress;
              else
                v12 = 16843009;
              v14 = 588;
              goto LABEL_16;
            case 0x24Cu:
              p_ifType = &v5->ifFlags;
              v14 = 592;
              break;
            case 0x250u:
              v23 = a2;
              p_ifType = &a2->MediaType;
              v13 = 4;
              v18 = ndisIfReferenceMiniport(v5, 0x18u);
              v19 = v18;
              if ( v18 )
              {
                _m_prefetchw(&v18->InterlockedFlags);
                InterlockedFlags = v18->InterlockedFlags;
                do
                {
                  v21 = InterlockedFlags;
                  InterlockedFlags = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v19->InterlockedFlags,
                                       InterlockedFlags,
                                       InterlockedFlags);
                }
                while ( v21 != InterlockedFlags );
                if ( (InterlockedFlags & 0x100) != 0 )
                  p_ifType = &v5->MediaType;
                ndisIfDereferenceMiniport(v5, v19, 0x18u);
              }
              v14 = 596;
              goto LABEL_16;
            case 0x254u:
              p_ifType = &v6->PhysicalMediumType;
              v27 = 1;
              v14 = v8 + 4;
              break;
            default:
              goto LABEL_48;
          }
          v13 = 4;
        }
LABEL_16:
        if ( v9 < v13 )
          goto LABEL_48;
        if ( v12 )
        {
          ndisIfQueryProvider(v23, v12, v13, v7);
          v22 = v14 - v8;
          v8 = v14;
          v7 += v22;
          v10 = v27;
          v9 -= v22;
        }
        else
        {
          if ( !p_ifType )
            goto LABEL_48;
          memmove(v7, p_ifType, v13);
          v15 = v14 - v8;
          v8 = v14;
          v7 += v15;
          v10 = v27;
          v9 -= v15;
        }
LABEL_20:
        a2 = v25;
        v5 = a1;
        v6 = v25;
        if ( v9 <= 0 )
          goto LABEL_21;
      }
    }
    v16 = v8 - *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v4 + 48) = v16;
    if ( !v16 )
      v3 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x17u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)v5,
      v4,
      v3);
  return v3;
}
