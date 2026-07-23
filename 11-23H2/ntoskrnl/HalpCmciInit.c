/*
 * XREFs of HalpCmciInit @ 0x140A8A70C
 * Callers:
 *     HalpCmcWorkerRoutine @ 0x14081E9C0 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     HalpCmciInitializeErrorPacket @ 0x140380284 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x140380348 (HalpCmciInitProcessor.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403B11A0 (HalpCmciLoadThresholdConfiguration.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void HalpCmciInit()
{
  PVOID v0; // r12
  LARGE_INTEGER PerformanceCounter; // rdi
  ULONG v2; // ebp
  ULONG ActiveProcessorCount; // r15d
  int *v4; // r14
  unsigned int v5; // ecx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rsi
  __int64 v8; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v0 = HalpCmcErrorSource;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  HalpCmciLoadThresholdConfiguration();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = KiProcessorIndexToNumberMappingTable;
    do
    {
      v5 = *v4;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v5 >> 6);
      Affinity.Mask = 1LL << (v5 & 0x3F);
      if ( v2 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
      {
        v8 = *(_QWORD *)(i + 172);
        *(LARGE_INTEGER *)(i + 112) = PerformanceCounter;
        HalpCmciInitializeErrorPacket((__int64)v0, v8);
        HalpCmciInitProcessor((__int64)v0, v8);
      }
      ++v2;
      ++v4;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
