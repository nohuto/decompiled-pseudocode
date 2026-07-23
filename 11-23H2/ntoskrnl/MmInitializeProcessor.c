/*
 * XREFs of MmInitializeProcessor @ 0x140A89098
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973A08 (KiStartDynamicProcessor.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 * Callees:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     ExAllocatePoolMm @ 0x1402E2970 (ExAllocatePoolMm.c)
 *     MiDeleteUltraThreadContext @ 0x1402E9534 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402EC680 (MiCreateUltraThreadContext.c)
 *     KeGetProcessorNodeNumber @ 0x140368320 (KeGetProcessorNodeNumber.c)
 *     MmDeleteProcessor @ 0x14061811C (MmDeleteProcessor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  __int64 ProcessorNodeNumber; // rbx
  _QWORD *PoolMm; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r11
  ULONG_PTR v7; // rax
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[1] = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 35248) = -1LL;
  *(_DWORD *)(a1 + 33372) = dword_140C65AF8;
  ProcessorNodeNumber = (unsigned __int16)KeGetProcessorNodeNumber(a1);
  PoolMm = ExAllocatePoolMm(64, 0x3180uLL, 0x6D50694Du, (unsigned int)ProcessorNodeNumber | 0x80000000);
  v4 = PoolMm;
  if ( PoolMm )
  {
    *((_DWORD *)PoolMm + 3152) = 0;
    *PoolMm = PoolMm + 4;
    *((_DWORD *)PoolMm + 6) = 512;
    PoolMm[1] = PoolMm + 519;
    PoolMm[2] = PoolMm + 1031;
    v5 = qword_140C6B450 + 25408 * ProcessorNodeNumber;
    *(_DWORD *)(a1 + 33364) = *(unsigned __int8 *)(v5 + 22932);
    *(_DWORD *)(a1 + 33368) = *(_DWORD *)(v5 + 22928);
    *(_DWORD *)(a1 + 33360) = ((_DWORD)ProcessorNodeNumber << byte_140C65A8D) | (__rdtsc() >> 4) & (unsigned __int16)((1 << byte_140C65A8E) - 1);
    MiInitializePageColorBase(0LL, ProcessorNodeNumber + 1, (__int64)v9);
    v9[0] = v6;
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)(v4 + 1544), (__int64)v9, 8, 1u) )
    {
      v7 = MiReservePtes((__int64)&qword_140C69940, 1u);
      v4[1578] = v7;
      if ( v7 )
      {
        result = 1LL;
        v4[1577] = *(_QWORD *)(376LL * (unsigned int)ProcessorNodeNumber + qword_140C65AA0 + 368);
        *(_QWORD *)(a1 + 33592) = v4;
        return result;
      }
      MiDeleteUltraThreadContext((__int64)(v4 + 1544));
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    MmDeleteProcessor(a1);
  }
  return 0LL;
}
