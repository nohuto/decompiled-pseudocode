/*
 * XREFs of RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C003A09C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C00AE250 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C00AE45C (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C00AE654 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1C00AE8C4 (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1C00AEBEC (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x1C00AEEC0 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x1C00AF0EC (StorSetMFNDOperationInfo.c)
 */

__int64 __fastcall RaidAdapterStorageInternalSetPropertyIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int *MasterIrp; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 Length; // [rsp+38h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  v6 = -1073741811;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_24;
  if ( CurrentStackLocation->Parameters.Create.Options < 8 )
    goto LABEL_24;
  v7 = *MasterIrp;
  if ( *MasterIrp > 0x12 )
    goto LABEL_24;
  v8 = 391184;
  if ( !_bittest(&v8, v7) )
    goto LABEL_24;
  v9 = MasterIrp[1];
  if ( !v9 )
  {
    v10 = v7 - 4;
    if ( v10 )
    {
      v11 = v10 - 7;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 == 2 )
                  {
                    v6 = StorSetMFNDChildPFQueuesState(a1, a2, &Length);
                    a2->IoStatus.Information = Length;
                    return RaidCompleteRequestEx(a2, 0, v6);
                  }
LABEL_25:
                  a2->IoStatus.Information = 0LL;
                  return RaidCompleteRequestEx(a2, 0, v6);
                }
                v17 = StorSetMFNDMigrationQoS(a1, a2, &Length);
              }
              else
              {
                v17 = StorSetMFNDChildPFCommandPermission(a1, a2, &Length);
              }
            }
            else
            {
              v17 = StorSetMFNDChildPFQoS(a1, a2, &Length);
            }
          }
          else
          {
            v17 = StorSetMFNDChildPFSettings(a1, a2, &Length);
          }
        }
        else
        {
          v17 = StorSetMFNDChildPFGlobalProperty(a1, a2, &Length);
        }
      }
      else
      {
        v17 = StorSetMFNDOperationInfo(a1, a2, &Length);
      }
      v6 = v17;
      a2->IoStatus.Information = Length;
      return RaidCompleteRequestEx(a2, 0, v6);
    }
LABEL_24:
    v6 = -1073741808;
    goto LABEL_25;
  }
  if ( v9 != 1 )
    goto LABEL_24;
  v6 = 0;
  return RaidCompleteRequestEx(a2, 0, v6);
}
