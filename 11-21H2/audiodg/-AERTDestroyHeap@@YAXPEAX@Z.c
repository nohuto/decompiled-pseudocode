/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x1400221FC
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14006E478 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTDestroyHeap(void *a1, int a2, int a3)
{
  char v3; // bl

  v3 = (char)a1;
  if ( a1 )
    RtlDestroyMemoryBlockLookaside();
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 4, v3, 0, 0, 0);
}
