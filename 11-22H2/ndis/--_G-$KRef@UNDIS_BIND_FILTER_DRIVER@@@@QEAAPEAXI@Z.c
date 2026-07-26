/*
 * XREFs of ??_G?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C011F464
 * Callers:
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0030F0C (-reserve@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 * Callees:
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C012D280 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

__int64 *__fastcall KRef<NDIS_BIND_FILTER_DRIVER>::`scalar deleting destructor'(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 64), 0xFFFFFFFF) == 1 )
  {
    NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v1);
    ExFreePoolWithTag((PVOID)v1, 0x446C4642u);
  }
  return a1;
}
