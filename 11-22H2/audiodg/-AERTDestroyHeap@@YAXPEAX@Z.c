/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14007AC38
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709F8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14007AE24 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B1B4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTDestroyHeap(void *a1, int a2, int a3)
{
  char v3; // bl

  v3 = (char)a1;
  if ( a1 )
    RtlDestroyMemoryBlockLookaside();
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 4, v3, 0, 0, 0);
}
