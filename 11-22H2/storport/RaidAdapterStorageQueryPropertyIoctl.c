/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1C009FC4C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C001DCA4 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1C003B0F0 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C003B210 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C003B430 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterSelfEncryptionProperty @ 0x1C003B4B4 (RaidGetStorageAdapterSelfEncryptionProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C003B5CC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C009FD44 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1C009FE88 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C00A362C (RaidGetStorageMiniportProperty.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C00A7608 (RaidGetStorageAdapterFruIdProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, IRP *a2)
{
  int StorageAdapterProtocolSpecificProperty; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IRP *MasterIrp; // r9
  bool v6; // cf
  int v7; // r8d
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  int v10; // r10d
  int v11; // r8d
  int v12; // r8d
  int StorageAdapterTemperatureProperty; // eax
  unsigned int v14; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  size_t Length; // [rsp+38h] [rbp+18h] BYREF

  StorageAdapterProtocolSpecificProperty = -1073741811;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = CurrentStackLocation->Parameters.Create.Options < 8;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v6
    || ((v7 = *(_DWORD *)&MasterIrp->Type, v8 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 5), (unsigned int)v8 > 0x3C)
     || (v9 = 0x1811500000001801LL, !_bittest64(&v9, v8)))
    && v7 != 1 )
  {
    a2->IoStatus.Information = 0LL;
    v14 = -1073741808;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
  v10 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      StorageAdapterProtocolSpecificProperty = 0;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      StorageAdapterProtocolSpecificProperty = -1073741808;
    }
    goto LABEL_10;
  }
  if ( v7 <= 51 )
  {
    if ( v7 == 51 )
    {
      StorageAdapterTemperatureProperty = RaidGetStorageAdapterTemperatureProperty((__int64)a1, a2, &Length);
    }
    else
    {
      v16 = v7 - 1;
      if ( v16 )
      {
        v17 = v16 - 4;
        if ( v17 )
        {
          v18 = v17 - 11;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 == 32 )
              {
                StorageAdapterProtocolSpecificProperty = RaidGetStorageAdapterProtocolSpecificProperty(
                                                           (__int64)a1,
                                                           a2,
                                                           &Length);
                a2->IoStatus.Information = Length;
              }
              goto LABEL_10;
            }
            StorageAdapterTemperatureProperty = RaidGetStorageAdapterCryptoProperty((__int64)a1, (__int64)a2, &Length);
          }
          else
          {
            StorageAdapterTemperatureProperty = RaidGetStorageAdapterRpmbProperty(a1, (__int64)a2, &Length);
          }
        }
        else
        {
          StorageAdapterTemperatureProperty = RaidGetStorageMiniportProperty(a1, MasterIrp, &Length);
        }
      }
      else
      {
        StorageAdapterTemperatureProperty = RaidGetStorageAdapterProperty(a1, MasterIrp, &Length);
      }
    }
  }
  else
  {
    v11 = v7 - 53;
    if ( v11 )
    {
      v12 = v11 - 4;
      if ( v12 )
      {
        v20 = v12 - 7;
        if ( v20 )
        {
          if ( v20 != 1 )
            goto LABEL_10;
          StorageAdapterTemperatureProperty = RaidGetStorageAdapterFruIdProperty(a1, MasterIrp, &Length);
        }
        else
        {
          StorageAdapterTemperatureProperty = RaidGetStorageAdapterSelfEncryptionProperty(
                                                (__int64)a1,
                                                MasterIrp,
                                                &Length);
        }
      }
      else
      {
        StorageAdapterTemperatureProperty = RaidGetStorageAdapterSerialNumberProperty(a1, MasterIrp, &Length);
      }
    }
    else
    {
      StorageAdapterTemperatureProperty = RaidGetStorageAdapterPhysicalTopologyProperty(
                                            (__int64)a1,
                                            (__int64)a2,
                                            &Length);
    }
  }
  StorageAdapterProtocolSpecificProperty = StorageAdapterTemperatureProperty;
  a2->IoStatus.Information = Length;
LABEL_10:
  v14 = StorageAdapterProtocolSpecificProperty;
  return RaidCompleteRequestEx(a2, 0, v14);
}
