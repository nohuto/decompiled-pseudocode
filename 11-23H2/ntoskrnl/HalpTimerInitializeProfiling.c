/*
 * XREFs of HalpTimerInitializeProfiling @ 0x14037AE60
 * Callers:
 *     HalpTimerInitSystem @ 0x14037ABD0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D134 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x14037D410 (HalpInterruptSetIdtEntry.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14037F9F4 (HalpMmAllocatePerProcessorMemory.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerInitializeProfiling()
{
  __int64 v0; // rbx
  int v1; // edi
  int v2; // r8d
  int v3; // r9d
  __int64 InternalData; // rax
  __int64 v6; // rax
  int v7; // [rsp+40h] [rbp-28h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF

  v0 = HalpProfileTimer;
  v1 = 0;
  v8 = 0LL;
  if ( HalpProfileData || (HalpProfileData = HalpMmAllocatePerProcessorMemory(32LL)) != 0 )
  {
    v7 = 10000;
    ((void (__fastcall *)(_QWORD, int *))HalpProfileInterface[3])(0LL, &v7);
    if ( KeGetPcr()->Prcb.Number )
    {
      if ( v0 )
      {
        LOBYTE(v2) = 15;
        HalpInterruptSetIdtEntry(253, (unsigned int)HalpTimerProfileInterrupt, v2, v3, -3LL);
        if ( (*(_DWORD *)(v0 + 224) & 1) != 0 )
        {
          InternalData = HalpTimerGetInternalData(v0);
          v1 = (*(__int64 (__fastcall **)(__int64))(v0 + 104))(InternalData);
          if ( v1 >= 0 )
          {
            v6 = HalpTimerGetInternalData(v0);
            (*(void (__fastcall **)(__int64))(v0 + 136))(v6);
          }
        }
      }
    }
    else if ( v0 )
    {
      LOBYTE(v2) = 15;
      *((_QWORD *)&v8 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
      *(_QWORD *)&v8 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      return (unsigned int)HalpTimerConfigureInterrupt(
                             v0,
                             253,
                             v2,
                             v3,
                             -3LL,
                             1,
                             (__int64)&v8,
                             (__int64)HalpTimerProfileInterrupt);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v1;
}
