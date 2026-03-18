/*
 * XREFs of IsPciDevice @ 0x1C001CDCC
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C001CCA0 (GetOpRegionScopeWorker.c)
 *     ACPIInternalIsPci @ 0x1C00A0FB0 (ACPIInternalIsPci.c)
 *     AcpiDeletePciBusInterface @ 0x1C00A1094 (AcpiDeletePciBusInterface.c)
 * Callees:
 *     IsPciDeviceWorker @ 0x1C0007A10 (IsPciDeviceWorker.c)
 */

__int64 __fastcall IsPciDevice(volatile signed __int32 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 Pool2; // rax

  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 3221225473LL;
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 128LL, 1181770561LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = a1;
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement(a1 + 2);
      *(_DWORD *)(Pool2 + 36) = -1;
      *(_QWORD *)(Pool2 + 40) = a2;
      *(_QWORD *)(Pool2 + 48) = a3;
      *(_QWORD *)(Pool2 + 56) = a4;
      return IsPciDeviceWorker((__int64)a1, 0, 0LL, (_QWORD *)Pool2);
    }
    else
    {
      return 3221225626LL;
    }
  }
}
