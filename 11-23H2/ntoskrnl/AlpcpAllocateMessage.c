/*
 * XREFs of AlpcpAllocateMessage @ 0x140716AA4
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140716458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140717944 (AlpcpCreateClientPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AE10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x1407D0144 (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpAllocateBlob @ 0x140739E30 (AlpcpAllocateBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A024 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14097AADC (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  ULONG_PTR Blob; // rax
  ULONG_PTR v5; // rdi
  int v6; // ebx
  signed __int32 v7; // eax
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v3 = a2 + 240;
  }
  else
  {
    v3 = 792LL;
  }
  Blob = AlpcpAllocateBlob(AlpcMessageType, v3);
  v5 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob(Blob);
  v6 = *(_DWORD *)(v5 + 264);
  memset((void *)v5, 0, 0x118uLL);
  *(_WORD *)(v5 + 242) = 40;
  --*(_WORD *)(v5 - 30);
  *(_DWORD *)(v5 + 264) = v6 & 0x7FFFFFFF;
  do
    v7 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v7 );
  *(_DWORD *)(v5 + 272) = v7;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v5);
  *(_WORD *)(v5 + 242) = 40;
  result = 0LL;
  *a1 = v5;
  return result;
}
