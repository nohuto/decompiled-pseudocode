/*
 * XREFs of ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F3548
 * Callers:
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EE2D0 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32C4 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpSyncState(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  const struct CONTAINER_ID *v7; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v10; // [rsp+30h] [rbp-28h]

  v5 = 0;
  CIVGenericSerializer::CIVGenericSerializer(v9);
  if ( v10 )
  {
    *v10 = a1;
    v5 = IVRootDeliver::PnP::Detail::SendPnP((IVRootDeliver::PnP::Detail *)v9, (const struct CIVSerializer *)a2, a3, v7);
  }
  v9[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v9);
  return v5;
}
