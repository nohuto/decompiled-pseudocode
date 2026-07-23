/*
 * XREFs of RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWow64GetSharedInfoProcess @ 0x180001DD0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlIsCurrentProcess @ 0x18006C250 (RtlIsCurrentProcess.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 */

char __fastcall RtlOpenCrossProcessEmulatorWorkConnection(HANDLE ProcessHandle, HANDLE *a2, PVOID *a3)
{
  int SharedInfoProcess; // eax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v9[16]; // [rsp+58h] [rbp-28h] BYREF
  HANDLE SourceHandle; // [rsp+68h] [rbp-18h]
  char v11; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE TargetHandle; // [rsp+C0h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  LOBYTE(SharedInfoProcess) = RtlIsCurrentProcess(ProcessHandle);
  if ( !(_BYTE)SharedInfoProcess )
  {
    SharedInfoProcess = RtlWow64GetSharedInfoProcess(ProcessHandle, &v11, v9);
    if ( SharedInfoProcess >= 0 && v11 && (v9[4] & 2) != 0 && SourceHandle )
    {
      TargetHandle = 0LL;
      BaseAddress = 0LL;
      ViewSize = 0LL;
      SharedInfoProcess = ZwDuplicateObject(
                            ProcessHandle,
                            SourceHandle,
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            &TargetHandle,
                            0,
                            0,
                            6u);
      if ( SharedInfoProcess < 0
        || (SharedInfoProcess = ZwMapViewOfSection(
                                  TargetHandle,
                                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                  &BaseAddress,
                                  0LL,
                                  0LL,
                                  0LL,
                                  &ViewSize,
                                  ViewUnmap,
                                  0x100000u,
                                  4u),
            SharedInfoProcess < 0) )
      {
        if ( BaseAddress )
          LOBYTE(SharedInfoProcess) = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( TargetHandle )
          LOBYTE(SharedInfoProcess) = NtClose(TargetHandle);
      }
      else
      {
        *a2 = TargetHandle;
        LOBYTE(SharedInfoProcess) = (_BYTE)BaseAddress;
        *a3 = BaseAddress;
      }
    }
  }
  return SharedInfoProcess;
}
