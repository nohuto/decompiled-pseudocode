/*
 * XREFs of ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D704
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002FA30 (NdisRegisterProtocolDriver.c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0030D0C (-reserve@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C009BDB0 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     NdisRegisterProtocol @ 0x1C009D830 (NdisRegisterProtocol.c)
 *     _lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_ @ 0x1C01121A0 (_lambda_b620d5060cec3b68d836340d92a5e127_--_lambda_invoker_cdecl_.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C01121E8 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C011CCC4 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C011CDB4 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C011D0E0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C011E3FC (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011E49C (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     _lambda_9f85fcd2040f04b850747010404e3e47_::_lambda_invoker_cdecl_ @ 0x1C0121000 (_lambda_9f85fcd2040f04b850747010404e3e47_--_lambda_invoker_cdecl_.c)
 *     _lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_ @ 0x1C01218C0 (_lambda_12a273c170595e0055a0ec70dd7bc2f3_--_lambda_invoker_cdecl_.c)
 *     ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C012D7D0 (--_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER(NDIS_BIND_PROTOCOL_DRIVER *this)
{
  Rtl::KString *value; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx

  value = this->Name.__ptr_.__value_;
  this->Name.__ptr_.__value_ = 0LL;
  if ( value )
    ExFreePoolWithTag(value, 0x7274534Bu);
  Flink = this->BindLinks.Flink;
  if ( Flink->Blink != &this->BindLinks || (Blink = this->BindLinks.Blink, Blink->Flink != &this->BindLinks) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
}
