/*
 * XREFs of RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     StorAdapterQueryAdapterObjectProperty @ 0x1C003BC0C (StorAdapterQueryAdapterObjectProperty.c)
 *     StorAdapterQueryIdentifyControllerProperty @ 0x1C00906A4 (StorAdapterQueryIdentifyControllerProperty.c)
 *     StorQueryMFNDCapability @ 0x1C0090CF4 (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C0090E08 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C0091040 (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x1C00911EC (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFSettings @ 0x1C009159C (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDOperationInfo @ 0x1C0091874 (StorQueryMFNDOperationInfo.c)
 */

__int64 __fastcall RaidAdapterStorageInternalQueryPropertyIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int *MasterIrp; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned __int64 Length; // [rsp+38h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  v8 = -1073741811;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_26;
  if ( CurrentStackLocation->Parameters.Create.Options < 8 )
    goto LABEL_26;
  v9 = *MasterIrp;
  if ( *MasterIrp > 0xF )
    goto LABEL_26;
  v10 = 48914;
  if ( !_bittest(&v10, v9) )
    goto LABEL_26;
  v11 = MasterIrp[1];
  if ( !v11 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      v13 = v12 - 3;
      if ( !v13 )
        goto LABEL_26;
      v14 = v13 - 4;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 2 )
                  {
                    v8 = StorQueryMFNDChildPFCommandPermission(a1, a2, &Length, a3);
                    a2->IoStatus.Information = Length;
                    return RaidCompleteRequestEx(a2, 0, v8);
                  }
LABEL_27:
                  a2->IoStatus.Information = 0LL;
                  return RaidCompleteRequestEx(a2, 0, v8);
                }
                v20 = StorQueryMFNDChildPFSettings(a1, a2, &Length, a3);
              }
              else
              {
                v20 = StorQueryMFNDChildPFGlobalProperty(a1, a2, &Length, a3);
              }
            }
            else
            {
              v20 = StorQueryMFNDOperationInfo(a1, a2, &Length, a3);
            }
          }
          else
          {
            v20 = StorQueryMFNDCapability(a1, a2, &Length, a3);
          }
        }
        else
        {
          v20 = StorQueryMFNDChildPFList(a1, a2, &Length, a3);
        }
      }
      else
      {
        v20 = StorAdapterQueryAdapterObjectProperty(a1, a2, &Length, a3);
      }
    }
    else
    {
      v20 = StorAdapterQueryIdentifyControllerProperty(a1, a2, &Length, a3);
    }
    v8 = v20;
    a2->IoStatus.Information = Length;
    return RaidCompleteRequestEx(a2, 0, v8);
  }
  if ( v11 != 1 )
  {
LABEL_26:
    v8 = -1073741808;
    goto LABEL_27;
  }
  v8 = 0;
  return RaidCompleteRequestEx(a2, 0, v8);
}
