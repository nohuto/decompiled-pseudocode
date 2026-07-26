/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011EB14
 * Callers:
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C011C8C8 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C011CC18 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C012D280 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

void __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::reset(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  if ( a2 != *a1 )
  {
    if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 64), 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v2);
      ExFreePoolWithTag((PVOID)v2, 0x446C4642u);
    }
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 64));
  }
}
