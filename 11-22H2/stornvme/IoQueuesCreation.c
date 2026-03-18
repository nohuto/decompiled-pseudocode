/*
 * XREFs of IoQueuesCreation @ 0x1C000A6A8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DAA0 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C00074C4 (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000AE84 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EFF0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F720 (NVMeIoSubmissionQueueCreate.c)
 */

__int64 __fastcall IoQueuesCreation(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  unsigned __int64 v5; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0LL;
  StorPortExtendedFunction(47LL, a1, &v5);
  v2 = NVMeIoCompletionQueueCreate(a1);
  if ( v2 )
  {
    v3 = 23;
LABEL_5:
    *(_DWORD *)(a1 + 36) = v3;
    IoQueuesFreeResources(a1);
    return v2;
  }
  v2 = NVMeIoSubmissionQueueCreate(a1);
  if ( v2 )
  {
    v3 = 22;
    goto LABEL_5;
  }
  StorPortExtendedFunction(47LL, a1, &v5);
  if ( *(_BYTE *)(a1 + 24) )
  {
    CalculateTimeDurationIn100ns(0LL, v5);
    StorPortExtendedFunction(86LL, a1, 0LL);
  }
  return 0LL;
}
