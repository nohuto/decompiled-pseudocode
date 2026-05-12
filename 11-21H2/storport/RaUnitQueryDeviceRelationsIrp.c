/*
 * XREFs of RaUnitQueryDeviceRelationsIrp @ 0x1C0084F48
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 __fastcall RaUnitQueryDeviceRelationsIrp(__int64 a1, IRP *a2)
{
  __int64 Pool; // rax
  unsigned int Status; // edi
  unsigned __int64 v6; // rsi

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    Pool = RaidAllocatePool(256LL, 16LL, 1380213074LL, *(_QWORD *)(a1 + 8));
    Status = 0;
    v6 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 1;
      *(_QWORD *)(Pool + 8) = *(_QWORD *)(a1 + 8);
      ObfReferenceObject(*(PVOID *)(a1 + 8));
      a2->IoStatus.Information = v6;
    }
    else
    {
      Status = -1073741801;
    }
  }
  else
  {
    Status = a2->IoStatus.Status;
  }
  return RaidCompleteRequestEx(a2, 0, Status);
}
