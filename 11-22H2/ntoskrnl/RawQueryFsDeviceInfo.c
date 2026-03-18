/*
 * XREFs of RawQueryFsDeviceInfo @ 0x1409B8454
 * Callers:
 *     RawQueryVolumeInformation @ 0x1407923EC (RawQueryVolumeInformation.c)
 * Callees:
 *     RawBeginOperation @ 0x140321BDC (RawBeginOperation.c)
 *     RawEndOperation @ 0x140321F9C (RawEndOperation.c)
 */

__int64 __fastcall RawQueryFsDeviceInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( *a4 < 8u )
    return 2147483653LL;
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *a4 -= 8;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)a3 = 7;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 52LL);
  RawEndOperation(a1, a2);
  return 0LL;
}
