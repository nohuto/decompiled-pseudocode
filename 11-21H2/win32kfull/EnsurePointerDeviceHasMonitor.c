/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C01E8D30
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C0110B24 (_GetPointerDeviceRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !*(_DWORD *)(v1 + 1336) )
    return 1;
  if ( *(_QWORD *)(v1 + 1344) )
    return 1;
  RIMFindMonitorForDigitizer(*(_QWORD *)(a1 + 16), a1, 1LL, 0LL);
  if ( !*(_DWORD *)(v1 + 1336) || *(_QWORD *)(v1 + 1344) )
    return 1;
  return v2;
}
