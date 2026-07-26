/*
 * XREFs of ?ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_SINGLE_STATISTIC_OUT@@AEA_K@Z @ 0x1C0136764
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisGetGlobalStatisticName@@YAPEB_WW4NDIS_GLOBAL_STATISTIC@@@Z @ 0x1C013681C (-ndisGetGlobalStatisticName@@YAPEB_WW4NDIS_GLOBAL_STATISTIC@@@Z.c)
 */

__int64 __fastcall ndisCollectSingleStatisticForIoctl(
        const struct NDIS_COLLECT_SINGLE_STATISTIC_IN *a1,
        wchar_t *a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  const wchar_t *GlobalStatisticName; // rax

  if ( *(_DWORD *)a1 != 1313108273 )
    return 3221225560LL;
  if ( *((_DWORD *)a1 + 2) )
    return 3221225474LL;
  if ( *((_DWORD *)a1 + 3) || *((_QWORD *)a1 + 2) || *((_QWORD *)a1 + 3) )
    return 3221225485LL;
  v6 = *((unsigned int *)a1 + 8);
  if ( (unsigned int)v6 >= 0x17 )
    return 3221226224LL;
  memset(a2, 0, 0x90uLL);
  *(_QWORD *)a2 = (&ndisGlobalStatistics)[v6];
  GlobalStatisticName = (const wchar_t *)ndisGetGlobalStatisticName((unsigned int)v6);
  wcscpy_s(a2 + 8, 0x40uLL, GlobalStatisticName);
  result = 0LL;
  *a3 = 144LL;
  return result;
}
