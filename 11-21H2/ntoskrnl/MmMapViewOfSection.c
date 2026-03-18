/*
 * XREFs of MmMapViewOfSection @ 0x140785150
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     PspMapView @ 0x1405E2C2C (PspMapView.c)
 *     PspMapSiloSharedDataView @ 0x140672A98 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140672AD0 (MmMapApiSetView.c)
 *     NtInitializeNlsFiles @ 0x1406C40E0 (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406D43E8 (EtwpCoverageEnsureUserModeView.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     NtGetNlsSectionPtr @ 0x140784CB0 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     NtCreateIoRing @ 0x140938B40 (NtCreateIoRing.c)
 *     MiMapImageForEnclaveUse @ 0x14097A9C4 (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x140A05860 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapParametersInitialize @ 0x1406FC8B0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x1406FCA10 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, a1, a2, *a3, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (__int64)v15, (void **)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C52B1C;
      else
        ++dword_140C52B18;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
