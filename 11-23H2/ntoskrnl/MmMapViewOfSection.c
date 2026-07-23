/*
 * XREFs of MmMapViewOfSection @ 0x1407A2530
 * Callers:
 *     AlpcpCreateView @ 0x14071C524 (AlpcpCreateView.c)
 *     NtInitializeNlsFiles @ 0x1407A1310 (NtInitializeNlsFiles.c)
 *     PspMapSiloSharedDataView @ 0x1407A194C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1984 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1407A1A8C (MmCreatePeb.c)
 *     NtGetNlsSectionPtr @ 0x1407A2090 (NtGetNlsSectionPtr.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140874134 (EtwpCoverageEnsureUserModeView.c)
 *     NtCreateIoRing @ 0x14094A2B0 (NtCreateIoRing.c)
 *     NtMapCMFModule @ 0x140A034A0 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapParametersInitialize @ 0x14072174C (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140721860 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  __int64 v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, a1, a2, *a3, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (__int64)v15, (void **)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C67F9C;
      else
        ++dword_140C67F98;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
