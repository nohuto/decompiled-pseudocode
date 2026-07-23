/*
 * XREFs of EtwpGetPmcProfileSource @ 0x1409E6230
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 */

__int64 __fastcall EtwpGetPmcProfileSource(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r9d
  unsigned int v8; // eax
  unsigned int i; // r8d

  v6 = 0;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v7 = EtwpPmcProfile;
  v8 = 4 * EtwpPmcProfile + 16;
  *a3 = v8;
  if ( a2 > v8 )
  {
    v6 = -1073741789;
  }
  else
  {
    for ( i = 0; i < v7; ++i )
      *(_DWORD *)(a1 + 4LL * i + 16) = *((__int16 *)qword_140C32468 + 308 * i + 304);
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v6;
}
