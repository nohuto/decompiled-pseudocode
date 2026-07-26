/*
 * XREFs of ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C012D7D0
 * Callers:
 *     ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0030CB4 (--_G-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@.c)
 *     ??1?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0069A38 (--1-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C011CD0C (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C011ED2C (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C013AC08 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D704 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C013A488 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

NDIS_BIND_PROTOCOL_LINK *__fastcall NDIS_BIND_PROTOCOL_LINK::`scalar deleting destructor'(
        NDIS_BIND_PROTOCOL_LINK *this)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rbx

  p = this->BindDriver._p;
  if ( p && _InterlockedExchangeAdd((volatile signed __int32 *)&p->RefCount, 0xFFFFFFFF) == 1 )
  {
    NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER(&p->_t);
    ExFreePoolWithTag(p, 0x44745042u);
  }
  NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(&this->NDIS_BIND_LINK_BASE);
  ExFreePoolWithTag(this, 0x4C745042u);
  return this;
}
