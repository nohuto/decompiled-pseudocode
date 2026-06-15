/*
 * XREFs of ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14002223C
 * Callers:
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x1400196B0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTUnlockHeap(void *a1, int a2, int a3)
{
  char v3; // di
  int v4; // ebx

  v3 = (char)a1;
  if ( a1 )
    v4 = RtlUnlockMemoryBlockLookaside();
  else
    v4 = 0;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 9, v3, 0, 0, 0);
  return v4 | 0x10000000u;
}
