/*
 * XREFs of sub_14074C12C @ 0x14074C12C
 * Callers:
 *     sub_14074B9B0 @ 0x14074B9B0 (sub_14074B9B0.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     DnsPrint_RpcStatsBuffer @ 0x14074B910 (DnsPrint_RpcStatsBuffer.c)
 *     FsRtlGetSectorSizeInformation @ 0x1407FA040 (FsRtlGetSectorSizeInformation.c)
 *     sub_1409B5004 @ 0x1409B5004 (sub_1409B5004.c)
 *     sub_1409B5088 @ 0x1409B5088 (sub_1409B5088.c)
 */

__int64 __fastcall sub_14074C12C(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 MasterIrp; // r8
  int v7; // eax
  int SectorSizeInformation; // ebx
  unsigned int v9; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v11 = v3;
  switch ( *(_DWORD *)(a3 + 16) )
  {
    case 1:
      v7 = DnsPrint_RpcStatsBuffer(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
LABEL_3:
      v3 = v11;
      SectorSizeInformation = v7;
      break;
    case 3:
      v7 = sub_1409B5088(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 4:
      v7 = sub_1409B5004(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 5:
      if ( v3 < 0x12 )
      {
        SectorSizeInformation = -2147483643;
      }
      else
      {
        *(_DWORD *)MasterIrp = 0;
        v3 -= 18;
        *(_DWORD *)(MasterIrp + 4) = 0;
        *(_DWORD *)(MasterIrp + 8) = 6;
        SectorSizeInformation = 0;
        *(_DWORD *)(MasterIrp + 12) = 4259922;
        *(_WORD *)(MasterIrp + 16) = 87;
      }
      break;
    case 0xB:
      SectorSizeInformation = FsRtlGetSectorSizeInformation(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 192) + 16LL));
      if ( SectorSizeInformation >= 0 )
        v3 -= 28;
      break;
    default:
      SectorSizeInformation = -1073741811;
      break;
  }
  v9 = *(_DWORD *)(a3 + 8) - v3;
  a2->IoStatus.Status = SectorSizeInformation;
  a2->IoStatus.Information = v9;
  IofCompleteRequest(a2, 1);
  return (unsigned int)SectorSizeInformation;
}
