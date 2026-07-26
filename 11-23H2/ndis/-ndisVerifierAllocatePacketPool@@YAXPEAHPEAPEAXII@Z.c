/*
 * XREFs of ?ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z @ 0x1C00B2B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00B2D84 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 *     NdisAllocatePacketPool @ 0x1C00C5AC0 (NdisAllocatePacketPool.c)
 */

void __fastcall ndisVerifierAllocatePacketPool(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT ProtocolReservedLength)
{
  unsigned __int8 v8; // cl
  PVOID v9; // [rsp+20h] [rbp-18h] BYREF
  PVOID v10; // [rsp+28h] [rbp-10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  RtlGetCallersAddress(&v9, &v10);
  if ( ndisVerifierInjectResourceFailure(v8) )
  {
    *PoolHandle = 0LL;
    *Status = -1073741670;
  }
  else
  {
    NdisAllocatePacketPool(Status, PoolHandle, NumberOfDescriptors, ProtocolReservedLength);
    if ( !*Status )
      *((_QWORD *)*PoolHandle + 3) = v9;
  }
}
