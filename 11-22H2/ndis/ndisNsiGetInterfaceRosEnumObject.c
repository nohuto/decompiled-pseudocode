/*
 * XREFs of ndisNsiGetInterfaceRosEnumObject @ 0x1C010EB20
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000AA30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D980 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FCB0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F3A0 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0011130 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosEnumObject(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int v3; // edi
  char v4; // bl
  __int64 v5; // r13
  struct _NDIS_IF_BLOCK *v6; // rcx
  char *v7; // r15
  unsigned int v8; // ebp
  int v9; // esi
  char v10; // r12
  unsigned int v11; // edi
  int v12; // r14d
  const void *p_InterfaceGuid; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // ebp
  struct _NDIS_MINIPORT_BLOCK *v17; // rax
  struct _NDIS_MINIPORT_BLOCK *v18; // rdx
  signed __int32 InterlockedFlags; // eax
  signed __int32 v20; // ett
  struct _NDIS_IF_BLOCK *v22; // [rsp+98h] [rbp+10h]

  v3 = 0;
  v4 = (char)a1;
  v5 = a3;
  if ( !a2 )
    a2 = a1;
  v22 = a2;
  v6 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      v4,
      a3);
    a2 = v22;
    v6 = v22;
  }
  v7 = *(char **)(v5 + 40);
  v8 = *(_DWORD *)(v5 + 52);
  v9 = *(_DWORD *)(v5 + 48);
  if ( v7 )
  {
    v10 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_26:
          v5 = a3;
          v4 = (char)a1;
          v3 = 0;
          break;
        }
        if ( v8 > 0x214 )
        {
          switch ( v8 )
          {
            case 0x218u:
              v11 = 16;
              p_InterfaceGuid = &a1->InterfaceGuid;
              v12 = 552;
              break;
            case 0x228u:
              v11 = 1;
              p_InterfaceGuid = &a1->ifConnectorPresent;
              v12 = 556;
              break;
            case 0x22Cu:
              v11 = 4;
              p_InterfaceGuid = &a1->ifFlags;
              v12 = 560;
              break;
            case 0x230u:
              p_InterfaceGuid = &a2->MediaType;
              v11 = 4;
              v17 = ndisIfReferenceMiniport(a1, 0x18u);
              v18 = v17;
              if ( v17 )
              {
                _m_prefetchw(&v17->InterlockedFlags);
                InterlockedFlags = v17->InterlockedFlags;
                do
                {
                  v20 = InterlockedFlags;
                  InterlockedFlags = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v18->InterlockedFlags,
                                       InterlockedFlags,
                                       InterlockedFlags);
                }
                while ( v20 != InterlockedFlags );
                if ( (InterlockedFlags & 0x100) != 0 )
                  p_InterfaceGuid = &a1->MediaType;
                ndisIfDereferenceMiniport(a1, v18, 0x18u);
              }
              v12 = 564;
              break;
            case 0x234u:
              v11 = 4;
              p_InterfaceGuid = &v6->PhysicalMediumType;
              v12 = 568;
              v10 = 1;
              break;
            default:
              goto LABEL_48;
          }
        }
        else if ( v8 == 532 )
        {
          v11 = 4;
          p_InterfaceGuid = &v6->ConnectionType;
          v12 = 536;
        }
        else if ( v8 )
        {
          switch ( v8 )
          {
            case 4u:
              v11 = 516;
              p_InterfaceGuid = &a1->ifDescr;
              v12 = 520;
              break;
            case 0x208u:
              v11 = 2;
              p_InterfaceGuid = &a1->ifType;
              v12 = 524;
              break;
            case 0x20Cu:
              v11 = 4;
              v12 = 528;
              p_InterfaceGuid = &v6->AccessType;
              break;
            case 0x210u:
              v11 = 4;
              p_InterfaceGuid = &a1->DirectionType;
              v12 = 532;
              break;
            default:
              goto LABEL_48;
          }
        }
        else
        {
          v11 = 4;
          p_InterfaceGuid = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v12 = 4;
        }
        if ( v9 < v11 || !p_InterfaceGuid )
        {
LABEL_48:
          v10 = 1;
          goto LABEL_25;
        }
        memmove(v7, p_InterfaceGuid, v11);
        v14 = v12 - v8;
        v8 = v12;
        v7 += v14;
        v9 -= v14;
LABEL_25:
        a2 = v22;
        v6 = v22;
        if ( v9 <= 0 )
          goto LABEL_26;
      }
    }
    v15 = v8 - *(_DWORD *)(v5 + 52);
    *(_DWORD *)(v5 + 48) = v15;
    if ( !v15 )
      v3 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v5 + 48) = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      v4,
      v5,
      v3);
  return v3;
}
