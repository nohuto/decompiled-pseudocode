/*
 * XREFs of ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x1C0136684
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisCollectAllStatisticsForIoctl(
        const struct NDIS_COLLECT_ALL_STATISTICS_IN *a1,
        struct NDIS_COLLECT_ALL_STATISTICS_OUT *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  char v8; // bl
  unsigned int v9; // eax

  if ( *(_DWORD *)a1 != 1313104689 )
    return 3221225560LL;
  if ( *((_DWORD *)a1 + 2) )
    return 3221225474LL;
  if ( *((_DWORD *)a1 + 3) || *((_QWORD *)a1 + 2) || *((_QWORD *)a1 + 3) )
    return 3221225485LL;
  v8 = *((_BYTE *)a1 + 32);
  memset(a2, 0, a3);
  v9 = (a3 - 24) >> 3;
  *(_DWORD *)a2 = 23;
  if ( v9 > 0x17 )
    v9 = 23;
  *((_DWORD *)a2 + 1) = v9;
  memmove((char *)a2 + 24, &ndisGlobalStatistics, 8LL * v9);
  *a4 = 8 * *((_DWORD *)a2 + 1) + 24;
  if ( v8 )
    memset(&ndisGlobalStatistics, 0, 0xB8uLL);
  return 0LL;
}
