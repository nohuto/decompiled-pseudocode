/*
 * XREFs of TtmpDispatchGetTerminalEvent @ 0x1409A6908
 * Callers:
 *     TtmDispatchApi @ 0x1409A618C (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AC340 (TtmiRetrieveEventFromQueue.c)
 */

__int64 __fastcall TtmpDispatchGetTerminalEvent(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  int EventFromQueue; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(void **)(a1 + 8);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v3, 0xF0000u, TtmpQueueObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    TtmiLogError("TtmiReferenceQueueByHandle", 310LL, (unsigned int)v5, (unsigned int)v5);
    v7 = v6;
    v8 = v6;
    v9 = 410LL;
LABEL_3:
    TtmiLogError("TtmpDispatchGetTerminalEvent", v9, v8, v7);
    goto LABEL_7;
  }
  EventFromQueue = TtmiRetrieveEventFromQueue(Object, a2);
  v6 = EventFromQueue;
  if ( EventFromQueue < 0 )
  {
    v7 = (unsigned int)EventFromQueue;
    v8 = (unsigned int)EventFromQueue;
    v9 = 418LL;
    goto LABEL_3;
  }
  v6 = 0;
LABEL_7:
  if ( Object )
    ObfDereferenceObject(Object);
  return v6;
}
