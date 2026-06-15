/*
 * XREFs of ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x14000316C
 * Callers:
 *     ?CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x140003070 (-CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z.c)
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x14007ACE0 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B164 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTCreateHeap(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  char v5; // si
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  RtlCreateMemoryBlockLookaside(&v10, 0LL, a1, a2, a3);
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v7, v6, v8, 3, v10, v5, v4, v3);
  return v10;
}
