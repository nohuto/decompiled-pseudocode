/*
 * XREFs of PiDmaGuardProcessPreStart @ 0x1407491AC
 * Callers:
 *     PipProcessStartPhase1 @ 0x1407491FC (PipProcessStartPhase1.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PiIommuUnblockDevice @ 0x140859234 (PiIommuUnblockDevice.c)
 */

void __fastcall PiDmaGuardProcessPreStart(ULONG_PTR MaxDataSize)
{
  int v2; // eax
  ULONG_PTR v3; // rsi
  __int64 v4; // rax

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    v2 = PiIommuUnblockDevice();
    v3 = v2;
    if ( v2 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x310);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v4 = *(_QWORD *)(MaxDataSize + 16);
      if ( v4 )
      {
        if ( *(_WORD *)(v4 + 56) )
        {
          IoAddTriageDumpDataBlock(v4 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v3, MaxDataSize);
    }
  }
}
