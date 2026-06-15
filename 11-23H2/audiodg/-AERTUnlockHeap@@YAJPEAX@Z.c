/*
 * XREFs of ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14007AEA8
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709A8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x140073E90 (-Stop@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B164 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
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
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 9, v3, 0, 0, 0);
  return v4 | 0x10000000u;
}
