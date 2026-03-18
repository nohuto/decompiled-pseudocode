/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x14079A85C
 * Callers:
 *     _NtPlugPlayGetDeviceProperty @ 0x140799C60 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x14079A4DC (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x14079A7D8 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x140851280 (_NtPlugPlayGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetNtPlugPlayRoutine(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 248);
  return v3;
}
