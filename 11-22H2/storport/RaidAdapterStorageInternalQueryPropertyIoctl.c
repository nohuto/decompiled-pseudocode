/*
 * XREFs of RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorAdapterQueryAdapterObjectProperty @ 0x1C003DA1C (StorAdapterQueryAdapterObjectProperty.c)
 *     StorAdapterQueryIdentifyControllerProperty @ 0x1C00AB33C (StorAdapterQueryIdentifyControllerProperty.c)
 *     StorQueryMFNDCapability @ 0x1C00AC42C (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C00AC5DC (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C00AC84C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x1C00ACA10 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1C00ACE44 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x1C00AD1F0 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x1C00AD4EC (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1C00AD6CC (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1C00AD9FC (StorQueryMFNDOperationInfo.c)
 */

__int64 __fastcall RaidAdapterStorageInternalQueryPropertyIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed int *p_Type; // rdx
  unsigned int v8; // r8d
  unsigned int Options; // ecx
  signed int v10; // ecx
  int v11; // eax
  signed int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 Length; // [rsp+38h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  p_Type = (signed int *)&a2->AssociatedIrp.MasterIrp->Type;
  v8 = -1073741811;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !p_Type )
    goto LABEL_33;
  if ( Options < 8 )
    goto LABEL_33;
  v10 = *p_Type;
  if ( (unsigned int)*p_Type > 0x12 )
    goto LABEL_33;
  v11 = 507666;
  if ( !_bittest(&v11, v10) )
    goto LABEL_33;
  v12 = p_Type[1];
  if ( !v12 )
  {
    if ( v10 > 12 )
    {
      v19 = v10 - 13;
      if ( v19 )
      {
        v20 = v19 - 2;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_34;
              v18 = StorQueryMFNDChildPFQueuesState(a1, a2, &Length, a3);
            }
            else
            {
              v18 = StorQueryMFNDNamespacePageMap(a1, a2, &Length, a3);
            }
          }
          else
          {
            v18 = StorQueryMFNDMigrationQoS(a1, a2, &Length, a3);
          }
        }
        else
        {
          v18 = StorQueryMFNDChildPFCommandPermission(a1, a2, &Length, a3);
        }
      }
      else
      {
        v18 = StorQueryMFNDChildPFSettings(a1, a2, &Length, a3);
      }
    }
    else if ( v10 == 12 )
    {
      v18 = StorQueryMFNDChildPFGlobalProperty(a1, a2, &Length, a3);
    }
    else
    {
      v13 = v10 - 1;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( !v14 )
          goto LABEL_33;
        v15 = v14 - 4;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                v8 = StorQueryMFNDOperationInfo(a1, a2, &Length, a3);
                a2->IoStatus.Information = Length;
                return RaidCompleteRequestEx(a2, 0, v8);
              }
LABEL_34:
              a2->IoStatus.Information = 0LL;
              return RaidCompleteRequestEx(a2, 0, v8);
            }
            v18 = StorQueryMFNDCapability(a1, a2, &Length, a3);
          }
          else
          {
            v18 = StorQueryMFNDChildPFList(a1, a2, &Length, a3);
          }
        }
        else
        {
          v18 = StorAdapterQueryAdapterObjectProperty(a1, a2, &Length, a3);
        }
      }
      else
      {
        v18 = StorAdapterQueryIdentifyControllerProperty(a1, a2, &Length, a3);
      }
    }
    v8 = v18;
    a2->IoStatus.Information = Length;
    return RaidCompleteRequestEx(a2, 0, v8);
  }
  if ( v12 != 1 )
  {
LABEL_33:
    v8 = -1073741808;
    goto LABEL_34;
  }
  v8 = 0;
  return RaidCompleteRequestEx(a2, 0, v8);
}
