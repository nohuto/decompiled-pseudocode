/*
 * XREFs of ViSwap @ 0x140ACA134
 * Callers:
 *     VfBuildScatterGatherList @ 0x140AC5680 (VfBuildScatterGatherList.c)
 *     VfFlushAdapterBuffers @ 0x140AC5E00 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140AC6830 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140AC6F30 (VfMapTransfer.c)
 * Callees:
 *     ViFindMappedRegisterInFile @ 0x140AC88CC (ViFindMappedRegisterInFile.c)
 *     ViGetMapRegisterFile @ 0x140AC904C (ViGetMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140AC9074 (ViGetMdlBufferSa.c)
 */

__int64 __fastcall ViSwap(__int64 *a1, ULONG_PTR *a2, _QWORD *a3)
{
  __int64 MapRegisterFile; // rbx
  const void **v7; // r8
  __int64 MdlBufferSa; // rax
  __int16 v9; // r11
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  MapRegisterFile = ViGetMapRegisterFile(*a1);
  if ( !MapRegisterFile )
    return 0LL;
  MdlBufferSa = ViGetMdlBufferSa(*a2, *v7);
  if ( !MdlBufferSa || !ViFindMappedRegisterInFile(MapRegisterFile, MdlBufferSa, &v11) )
    return 0LL;
  *a2 = *(_QWORD *)(MapRegisterFile + 56);
  *a3 = *(_QWORD *)(*(_QWORD *)(MapRegisterFile + 56) + 32LL)
      + (unsigned int)(v11 << 12)
      + *(unsigned int *)(*(_QWORD *)(MapRegisterFile + 56) + 44LL)
      + (unsigned __int64)(v9 & 0xFFF);
  *a1 = *(_QWORD *)(MapRegisterFile + 48);
  return 1LL;
}
