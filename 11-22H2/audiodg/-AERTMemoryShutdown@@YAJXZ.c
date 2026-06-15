/*
 * XREFs of ?AERTMemoryShutdown@@YAJXZ @ 0x14007AE24
 * Callers:
 *     wWinMain @ 0x140052BD8 (wWinMain.c)
 * Callees:
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14007AC38 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B1B4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 AERTMemoryShutdown(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(&gRTHeapInitOnce, 1u, &fPending, &Context) && !fPending )
    AERTDestroyHeap(Context, v0, v2);
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v1, v0, v2, 2, (char)Context, 0, 0, 0);
  return 0LL;
}
