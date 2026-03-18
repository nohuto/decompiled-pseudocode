/*
 * XREFs of IoQueuesCreationAsync @ 0x1C000A8B4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0007544 (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000AF04 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001F6C0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001FE50 (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreationAsync(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+110h] [rbp+18h] BYREF

  v1 = a1 + 4168;
  v5 = 0LL;
  StorPortExtendedFunction(99LL, a1, a1 + 4168);
  StorPortExtendedFunction(99LL, a1, a1 + 4192);
  StorPortExtendedFunction(47LL, a1, &v5);
  *(_DWORD *)(a1 + 924) = 0;
  if ( (unsigned int)NVMeIoCompletionQueueCreate(a1) )
  {
    v3 = 23;
LABEL_3:
    *(_DWORD *)(a1 + 36) = v3;
LABEL_4:
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, 0LL);
    IoQueuesFreeResources(a1);
    return 0;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, v1) )
  {
    if ( *(_DWORD *)(a1 + 924) != *(unsigned __int16 *)(a1 + 338) )
    {
      v3 = 27;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 36) )
  {
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 920) = 0;
  if ( (unsigned int)NVMeIoSubmissionQueueCreate(a1) )
  {
    v3 = 22;
    goto LABEL_3;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, a1 + 4192) )
  {
    if ( *(_DWORD *)(a1 + 920) != *(unsigned __int16 *)(a1 + 336) )
    {
      v3 = 26;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 36) )
  {
    goto LABEL_4;
  }
  StorPortExtendedFunction(47LL, a1, &v5);
  if ( *(_BYTE *)(a1 + 24) )
  {
    CalculateTimeDurationIn100ns(0LL, v5);
    StorPortExtendedFunction(86LL, a1, 0LL);
  }
  return 1;
}
