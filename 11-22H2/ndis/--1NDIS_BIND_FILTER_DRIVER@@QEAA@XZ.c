/*
 * XREFs of ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C012D280
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C0030530 (NdisFRegisterFilterDriver.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0064A84 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C011C8C8 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C011CC18 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C011E9A4 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011EB14 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??_G?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C011F464 (--_G-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z @ 0x1C012D760 (--_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER(NDIS_BIND_FILTER_DRIVER *this)
{
  Rtl::KString *value; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx

  value = this->FilterClass.__ptr_.__value_;
  this->FilterClass.__ptr_.__value_ = 0LL;
  if ( value )
    ExFreePoolWithTag(value, 0x7274534Bu);
  Flink = this->BindLinks.Flink;
  if ( Flink->Blink != &this->BindLinks || (Blink = this->BindLinks.Blink, Blink->Flink != &this->BindLinks) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
}
