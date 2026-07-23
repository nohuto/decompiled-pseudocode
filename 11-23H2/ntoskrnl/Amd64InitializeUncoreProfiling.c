/*
 * XREFs of Amd64InitializeUncoreProfiling @ 0x140529E20
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Amd64InitializeCacheStatus @ 0x140529B04 (Amd64InitializeCacheStatus.c)
 *     Amd64InitializeDataFabricStatus @ 0x140529CD8 (Amd64InitializeDataFabricStatus.c)
 */

void Amd64InitializeUncoreProfiling()
{
  ULONG ActiveProcessorCount; // eax
  char v6; // bl
  int *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-40h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-20h] BYREF

  _RAX = 0x80000000LL;
  __asm { cpuid }
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (unsigned int)_RAX >= 0x8000001E && (Amd64PerfFeatures & 6) != 0 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v6 = 0;
    if ( ActiveProcessorCount )
    {
      v7 = KiProcessorIndexToNumberMappingTable;
      v8 = ActiveProcessorCount;
      do
      {
        v9 = *v7;
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v9 >> 6);
        Affinity.Mask = 1LL << (v9 & 0x3F);
        if ( v6 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v6 = 1;
        }
        if ( (Amd64PerfFeatures & 2) != 0 )
          Amd64InitializeDataFabricStatus();
        if ( (Amd64PerfFeatures & 4) != 0 )
          Amd64InitializeCacheStatus();
        ++v7;
        --v8;
      }
      while ( v8 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
}
