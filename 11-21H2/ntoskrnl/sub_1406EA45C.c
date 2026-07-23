/*
 * XREFs of sub_1406EA45C @ 0x1406EA45C
 * Callers:
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall sub_1406EA45C(unsigned __int16 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = a1;
  ExAcquireFastMutex(&stru_140C468A0);
  if ( v2 >= dword_140C468DC )
  {
    v5 = -1073741772;
  }
  else
  {
    v4 = 2LL * v2;
    v5 = 0;
    *a2 = *(_OWORD *)((char *)qword_140C468E0 + 8 * v4);
  }
  KeReleaseGuardedMutex(&stru_140C468A0);
  return v5;
}
