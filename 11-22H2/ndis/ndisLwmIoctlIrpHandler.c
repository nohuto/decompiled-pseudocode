/*
 * XREFs of ndisLwmIoctlIrpHandler @ 0x1C00CBF98
 * Callers:
 *     ?ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00CBED8 (-ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x1C000FC4C (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x1C00298D4 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0035994 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0071A44 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     wil::details::lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___::_lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___ @ 0x1C00CBBA0 (wil--details--lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___--_lambda_call__lambda_329f.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C010E390 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 */

__int64 __fastcall ndisLwmIoctlIrpHandler(struct _IRP *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int16 v5; // r9
  __int64 v6; // rdi
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  unsigned int v9; // r8d
  char v10; // r8
  unsigned int AdapterRssInfo; // ebx
  char v12; // al
  unsigned int v13; // r9d
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int8 *MasterIrp; // [rsp+28h] [rbp-58h]
  struct _MDL *MdlAddress; // [rsp+30h] [rbp-50h]
  struct _NDIS_MINIPORT_BLOCK *v19; // [rsp+40h] [rbp-40h] BYREF
  char v20; // [rsp+48h] [rbp-38h]
  char v21; // [rsp+50h] [rbp-30h]
  _QWORD v22[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v23; // [rsp+68h] [rbp-18h]
  unsigned int v24; // [rsp+A8h] [rbp+28h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  if ( !v2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v5 = 17;
LABEL_7:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v5,
        (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids);
      return 3221225659LL;
    }
    return 3221225659LL;
  }
  v6 = *(_QWORD *)(v2 + 24);
  if ( !v6 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v5 = 18;
      goto LABEL_7;
    }
    return 3221225659LL;
  }
  v8 = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceMiniportByGuid((const struct _GUID *)v6, 0x57u);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v19 = v8;
    v20 = 87;
    v21 = 1;
    if ( v9 != 1507330
      && v9 != 1507334
      && v9 != 1507342
      && v9 != 1507368
      && v9 != 1507372
      && v9 != 1507376
      && v9 != 1507390 )
    {
      if ( v9 == 1507480 )
      {
        v10 = *(_BYTE *)(v6 + 16);
        v24 = 0;
        AdapterRssInfo = ndisGetAdapterRssInfo(v8, a1, v10, (int *)&v24);
        wil::details::lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___::_lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___((__int64)&v19);
        return ndisConvertNdisStatusToNtStatusForIoctl(AdapterRssInfo, v24, 0);
      }
      if ( v9 != 1507484 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xBu,
            0x14u,
            (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids,
            v9);
        ndisDereferenceMiniport(v8, 0x57u);
        return 3221225659LL;
      }
    }
    v12 = *(_BYTE *)(v6 + 16);
    v13 = *(_DWORD *)(a2 + 16);
    v24 = 0;
    v23 = 0LL;
    BYTE8(v23) = v12;
    *(_QWORD *)&v23 = v8->OidList;
    MdlAddress = a1->MdlAddress;
    MasterIrp = (unsigned __int8 *)a1->AssociatedIrp.MasterIrp;
    v14 = *(_DWORD *)(a2 + 8);
    v22[0] = 0LL;
    v22[1] = v8;
    v15 = ndisMiniportOidIoctl(v8, (struct _NDIS_USER_OPEN_CONTEXT *)v22, v9, v13, v14, MasterIrp, MdlAddress, &v24);
    v16 = v15;
    if ( !v15 || v15 == -2147483643 )
      a1->IoStatus.Information = v24;
    wil::details::lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___::_lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___((__int64)&v19);
    return v16;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x13u,
        (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids,
        v6);
    return 3223519238LL;
  }
}
