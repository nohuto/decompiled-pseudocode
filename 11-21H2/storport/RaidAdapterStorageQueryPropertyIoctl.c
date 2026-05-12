/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1C0084C68
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002DE0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1C00399F8 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0039B18 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C0039D38 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0039DBC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1C0084D74 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0084E48 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0089C94 (RaidGetStorageMiniportProperty.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C008D0BC (RaidGetStorageAdapterFruIdProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IRP *MasterIrp; // r10
  int StorageAdapterFruIdProperty; // r9d
  bool v6; // cf
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r8d
  int v10; // edx
  int StorageAdapterSerialNumberProperty; // eax
  unsigned int v12; // r8d
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  unsigned __int64 Length; // [rsp+38h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  StorageAdapterFruIdProperty = -1073741811;
  v6 = CurrentStackLocation->Parameters.Create.Options < 8;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v6
    || ((v7 = *(int *)&MasterIrp->Type, (unsigned int)v7 > 0x39) || (v8 = 0x22A000000030022LL, !_bittest64(&v8, v7)))
    && (_DWORD)v7 != 65 )
  {
    a2->IoStatus.Information = 0LL;
    v12 = -1073741808;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  v9 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      StorageAdapterFruIdProperty = 0;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      StorageAdapterFruIdProperty = -1073741808;
    }
  }
  else
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v14 = v10 - 4;
      if ( v14 )
      {
        v15 = v14 - 11;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 32;
            if ( v17 )
            {
              v18 = v17 - 2;
              if ( v18 )
              {
                v19 = v18 - 2;
                if ( v19 )
                {
                  v20 = v19 - 4;
                  if ( v20 )
                  {
                    if ( v20 == 8 )
                    {
                      StorageAdapterFruIdProperty = RaidGetStorageAdapterFruIdProperty(
                                                      a1,
                                                      MasterIrp,
                                                      &Length,
                                                      3221225485LL);
                      a2->IoStatus.Information = Length;
                    }
                    goto LABEL_8;
                  }
                  StorageAdapterSerialNumberProperty = RaidGetStorageAdapterSerialNumberProperty(
                                                         a1,
                                                         MasterIrp,
                                                         &Length,
                                                         3221225485LL);
                }
                else
                {
                  StorageAdapterSerialNumberProperty = RaidGetStorageAdapterPhysicalTopologyProperty(
                                                         (__int64)a1,
                                                         (__int64)a2,
                                                         &Length);
                }
              }
              else
              {
                StorageAdapterSerialNumberProperty = RaidGetStorageAdapterTemperatureProperty((__int64)a1, a2, &Length);
              }
            }
            else
            {
              StorageAdapterSerialNumberProperty = RaidGetStorageAdapterProtocolSpecificProperty(
                                                     (__int64)a1,
                                                     a2,
                                                     &Length);
            }
          }
          else
          {
            StorageAdapterSerialNumberProperty = RaidGetStorageAdapterCryptoProperty((__int64)a1, (__int64)a2, &Length);
          }
        }
        else
        {
          StorageAdapterSerialNumberProperty = RaidGetStorageAdapterRpmbProperty(a1, (__int64)a2, &Length);
        }
      }
      else
      {
        StorageAdapterSerialNumberProperty = RaidGetStorageMiniportProperty(a1, MasterIrp, &Length, 3221225485LL);
      }
    }
    else
    {
      StorageAdapterSerialNumberProperty = RaidGetStorageAdapterProperty(a1, MasterIrp, &Length, 3221225485LL);
    }
    StorageAdapterFruIdProperty = StorageAdapterSerialNumberProperty;
    a2->IoStatus.Information = Length;
  }
LABEL_8:
  v12 = StorageAdapterFruIdProperty;
  return RaidCompleteRequestEx(a2, 0, v12);
}
