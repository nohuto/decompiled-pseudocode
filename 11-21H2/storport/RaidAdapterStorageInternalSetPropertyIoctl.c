/*
 * XREFs of RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C0091F54 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C0092160 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C0092344 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFSettings @ 0x1C0092584 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDOperationInfo @ 0x1C0092810 (StorSetMFNDOperationInfo.c)
 */

__int64 __fastcall RaidAdapterStorageInternalSetPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  unsigned int v14; // eax
  unsigned __int64 Length; // [rsp+38h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = -1073741811;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_20;
  if ( CurrentStackLocation->Parameters.Create.Options < 8 )
    goto LABEL_20;
  v7 = *(_DWORD *)&MasterIrp->Type;
  if ( *(_DWORD *)&MasterIrp->Type != 4 && (unsigned int)(v7 - 11) > 4 )
    goto LABEL_20;
  v8 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( !v8 )
  {
    v9 = v7 - 4;
    if ( v9 )
    {
      v10 = v9 - 7;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
              {
                v6 = StorSetMFNDChildPFCommandPermission(a1, a2, &Length);
                a2->IoStatus.Information = Length;
                return RaidCompleteRequestEx(a2, 0, v6);
              }
LABEL_21:
              a2->IoStatus.Information = 0LL;
              return RaidCompleteRequestEx(a2, 0, v6);
            }
            v14 = StorSetMFNDChildPFQoS(a1, a2, &Length);
          }
          else
          {
            v14 = StorSetMFNDChildPFSettings(a1, a2, &Length);
          }
        }
        else
        {
          v14 = StorSetMFNDChildPFGlobalProperty(a1, a2, &Length);
        }
      }
      else
      {
        v14 = StorSetMFNDOperationInfo(a1, a2, &Length);
      }
      v6 = v14;
      a2->IoStatus.Information = Length;
      return RaidCompleteRequestEx(a2, 0, v6);
    }
LABEL_20:
    v6 = -1073741808;
    goto LABEL_21;
  }
  if ( v8 != 1 )
    goto LABEL_20;
  v6 = 0;
  return RaidCompleteRequestEx(a2, 0, v6);
}
