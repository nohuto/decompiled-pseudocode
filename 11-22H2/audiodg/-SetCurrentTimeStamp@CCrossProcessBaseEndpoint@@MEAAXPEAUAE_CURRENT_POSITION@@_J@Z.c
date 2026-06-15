/*
 * XREFs of ?SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x14001EA70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqqxxxx_EventWriteTransfer @ 0x140039F88 (McTemplateU0pqqxxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessBaseEndpoint::SetCurrentTimeStamp(
        CCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        __int64 a3)
{
  __int32 v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  HNSTIME hnsQPCPosition; // rcx
  char v15; // r9

  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 160LL) )
  {
    v7 = 56LL;
    v6 = 0;
    v8 = 64LL;
    v9 = 32LL;
    v10 = 40LL;
    v11 = 48LL;
    v12 = 68LL;
  }
  else
  {
    v6 = 1;
    v7 = 96LL;
    v8 = 104LL;
    v9 = 72LL;
    v10 = 80LL;
    v11 = 88LL;
    v12 = 108LL;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 9)) = a2->u64DevicePosition;
  *(_QWORD *)(v7 + *((_QWORD *)this + 9)) = a2->hnsQPCPosition;
  *(FLOAT32 *)(v8 + *((_QWORD *)this + 9)) = a2->f32FramesPerSecond;
  *(_QWORD *)(v10 + *((_QWORD *)this + 9)) = a2->u64StreamPosition;
  *(_QWORD *)(v11 + *((_QWORD *)this + 9)) = a2->u64PaddingFrames;
  *(_DWORD *)(v12 + *((_QWORD *)this + 9)) = a2->Flag;
  LODWORD(v13) = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 160LL), v6);
  hnsQPCPosition = *((_QWORD *)this + 9);
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)(hnsQPCPosition + 164), 0, 0);
  if ( (v15 & 2) == 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 9) + 112LL) = a2->u64DevicePosition;
    *(_QWORD *)(*((_QWORD *)this + 9) + 128LL) = a2->u64PaddingFrames;
    v13 = *((_QWORD *)this + 9);
    hnsQPCPosition = a2->hnsQPCPosition;
    *(_QWORD *)(v13 + 136) = hnsQPCPosition;
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 9) + 152LL), a3);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 9) + 164LL), 6u);
  }
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqqxxxx_EventWriteTransfer(
      hnsQPCPosition,
      v13,
      (_DWORD)this,
      a2->Flag,
      v15,
      a2->u64PaddingFrames,
      a2->hnsQPCPosition,
      a2->u64DevicePosition,
      a2->u64StreamPosition);
}
