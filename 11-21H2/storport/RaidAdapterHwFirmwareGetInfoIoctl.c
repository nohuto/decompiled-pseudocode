/*
 * XREFs of RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351AC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0021BE4 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C0021D18 (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0035130 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoIoctl(__int64 *a1, IRP *a2)
{
  _IRP *MasterIrp; // r14
  PVOID v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  signed int InfoFromMiniport; // ebx
  signed int v8; // eax
  unsigned int Length; // ecx
  unsigned __int64 v10; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v12 = 0;
  P = 0LL;
  if ( !a1[71] || !a1[72] )
  {
    InfoFromMiniport = -1073741823;
    goto LABEL_14;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    InfoFromMiniport = -1073741820;
LABEL_14:
    v10 = 0LL;
    goto LABEL_15;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x38 )
  {
    InfoFromMiniport = -1073741789;
    goto LABEL_14;
  }
  RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], (__int64)a2, (__int64 *)&P, &v12);
  v3 = P;
  if ( !P )
  {
    InfoFromMiniport = -1073741801;
    goto LABEL_14;
  }
  InfoFromMiniport = RaidAdapterHwFirmwareGetInfoFromMiniport((__int64)a1, a2, (__int64)P, v12);
  if ( InfoFromMiniport < 0 )
    goto LABEL_14;
  memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
  v8 = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo((__int64)a2, (__int64)v3);
  Length = CurrentStackLocation->Parameters.Read.Length;
  InfoFromMiniport = v8;
  if ( Length >= *(_DWORD *)(&MasterIrp->Size + 1) )
    Length = *(_DWORD *)(&MasterIrp->Size + 1);
  v10 = Length;
LABEL_15:
  a2->IoStatus.Information = v10;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  return RaidCompleteRequestEx(a2, 0, InfoFromMiniport);
}
