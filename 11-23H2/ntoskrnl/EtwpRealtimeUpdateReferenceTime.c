/*
 * XREFs of EtwpRealtimeUpdateReferenceTime @ 0x140885EE8
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x140772D48 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1408011FC (EtwpRealtimeResetReferenceTime.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140228160 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1403715B8 (EtwpInitializeBufferHeader.c)
 *     memset @ 0x140435A00 (memset.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140708D60 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1407F5B4C (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpRealtimeUpdateReferenceTime(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x48uLL);
  EtwpInitializeBufferHeader((__int16 *)a1, v7);
  WORD2(v7[6]) &= ~0x100u;
  EtwpResetBufferHeader((__int64)v7, 3);
  v4 = *(_DWORD *)(a1 + 424) == 0;
  v5 = *a2;
  HIDWORD(v7[5]) = 3;
  LODWORD(v7[6]) = 72;
  *(_OWORD *)&v7[7] = v5;
  WORD2(v7[6]) = 1;
  if ( v4 )
    return EtwpRealtimeDeliverBuffer(a1, (__int64)v7);
  else
    return EtwpRealtimeSaveBuffer(a1, (__int64)v7);
}
