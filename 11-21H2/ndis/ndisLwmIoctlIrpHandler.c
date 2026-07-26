/*
 * XREFs of ndisLwmIoctlIrpHandler @ 0x1C00C7304
 * Callers:
 *     ?ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00C7244 (-ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006C698 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 */

__int64 __fastcall ndisLwmIoctlIrpHandler(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v6; // rsi
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  _OID_LIST *OidList; // rax
  int v13; // eax
  unsigned int v14; // edi
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-18h]
  unsigned int v17; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 == 1507330
    || v4 == 1507334
    || v4 == 1507342
    || v4 == 1507368
    || v4 == 1507372
    || v4 == 1507376
    || v4 == 1507390
    || v4 == 1507484 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 24LL);
    v7 = ndisReferenceMiniportByGuid((const struct _GUID *)v6, 0x57u);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_DWORD *)(a2 + 16);
      v10 = *(_DWORD *)(a2 + 24);
      v16 = 0LL;
      v11 = v7;
      v15[0] = 0LL;
      v15[1] = v7;
      BYTE8(v16) = *(_BYTE *)(v6 + 16);
      OidList = v7->OidList;
      v17 = 0;
      *(_QWORD *)&v16 = OidList;
      v13 = ndisMiniportOidIoctl(
              v11,
              (struct _NDIS_USER_OPEN_CONTEXT *)v15,
              v10,
              v9,
              *(_DWORD *)(a2 + 8),
              *(unsigned __int8 **)(a1 + 24),
              *(struct _MDL **)(a1 + 8),
              &v17);
      v14 = v13;
      if ( !v13 || v13 == -2147483643 )
        *(_QWORD *)(a1 + 56) = v17;
      ndisDereferenceMiniport(v8, 0x57u);
      return v14;
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x11u,
          (struct _GUID *)&WPP_05df6b0dfc6d3b8949b7b3d56ccb6053_Traceguids,
          v6);
      return 3223519238LL;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x12u,
        (struct _GUID *)&WPP_05df6b0dfc6d3b8949b7b3d56ccb6053_Traceguids,
        v4);
    return 3221225659LL;
  }
}
