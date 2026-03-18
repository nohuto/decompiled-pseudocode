/*
 * XREFs of HalpTimerInitializeProfiling @ 0x1403BB340
 * Callers:
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x1403AEF08 (HalpInterruptSetIdtEntry.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403BB634 (HalpMmAllocatePerProcessorMemory.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerInitializeProfiling()
{
  __int64 v0; // rbx
  int v1; // edi
  __int64 v2; // r9
  __int64 InternalData; // rax
  __int64 v5; // rax
  int v6; // [rsp+40h] [rbp-28h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h] BYREF

  v0 = HalpProfileTimer;
  v1 = 0;
  v7 = 0LL;
  if ( HalpProfileData || (HalpProfileData = HalpMmAllocatePerProcessorMemory(32LL)) != 0 )
  {
    v6 = 10000;
    ((void (__fastcall *)(_QWORD, int *))HalpProfileInterface[3])(0LL, &v6);
    if ( KeGetPcr()->Prcb.Number )
    {
      if ( v0 )
      {
        HalpInterruptSetIdtEntry(0xFDu, (int)HalpTimerProfileInterrupt, 15, v2, -3LL);
        if ( (*(_DWORD *)(v0 + 224) & 1) != 0 )
        {
          InternalData = HalpTimerGetInternalData(v0);
          v1 = (*(__int64 (__fastcall **)(__int64))(v0 + 104))(InternalData);
          if ( v1 >= 0 )
          {
            v5 = HalpTimerGetInternalData(v0);
            (*(void (__fastcall **)(__int64))(v0 + 136))(v5);
          }
        }
      }
    }
    else if ( v0 )
    {
      *((_QWORD *)&v7 + 1) = (unsigned __int16)(KiProcessorIndexToNumberMappingTable[0] >> 6);
      *(_QWORD *)&v7 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      return (unsigned int)HalpTimerConfigureInterrupt(
                             v0,
                             0xFDu,
                             15,
                             v2,
                             -3LL,
                             1u,
                             &v7,
                             (__int64)HalpTimerProfileInterrupt);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v1;
}
