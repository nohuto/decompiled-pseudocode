/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C011CBD8
 * Callers:
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C011CB6C (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 * Callees:
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x1C002FB58 (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C011E964 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011EAD4 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C012D240 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 *     ??_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z @ 0x1C012D720 (--_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_FILTER_LINK **__fastcall Ndis::BindStack::BuildFilterLink(
        void *a1,
        NDIS_BIND_FILTER_LINK **a2,
        __int64 a3,
        unsigned int a4)
{
  volatile signed __int32 *v6; // rbx
  NDIS_BIND_FILTER_LINK *v7; // rdi
  NDIS_BIND_FILTER_LINK *v9; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = a1;
  ndisBindGetFilterDriver(&P, a3, 0LL);
  v6 = (volatile signed __int32 *)P;
  if ( P )
  {
    wil::make_unique_nothrow<NDIS_BIND_FILTER_LINK,>((NDIS_BIND_LINK_BASE **)&v9);
    v7 = v9;
    if ( v9 )
    {
      if ( &v9->BindDriver != (KRef<NDIS_BIND_FILTER_DRIVER> *)&P )
        KRef<NDIS_BIND_FILTER_DRIVER>::reset(&v9->BindDriver, v6);
      v7->FilterIndex = a4;
      *a2 = v7;
    }
    else
    {
      *a2 = 0LL;
    }
  }
  else
  {
    *a2 = 0LL;
  }
  if ( v6 && _InterlockedExchangeAdd(v6 + 16, 0xFFFFFFFF) == 1 )
  {
    NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)P);
    ExFreePoolWithTag(P, 0x446C4642u);
  }
  return a2;
}
