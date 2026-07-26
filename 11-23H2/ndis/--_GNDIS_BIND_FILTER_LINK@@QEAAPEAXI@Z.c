/*
 * XREFs of ??_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z @ 0x1C012D720
 * Callers:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0030E70 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     ??1?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0069A34 (--1-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C011CBD8 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C011EB20 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C012D240 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C013A468 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

NDIS_BIND_FILTER_LINK *__fastcall NDIS_BIND_FILTER_LINK::`scalar deleting destructor'(NDIS_BIND_FILTER_LINK *this)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rbx

  p = this->BindDriver._p;
  if ( p && _InterlockedExchangeAdd((volatile signed __int32 *)&p->RefCount, 0xFFFFFFFF) == 1 )
  {
    NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER(&p->_t);
    ExFreePoolWithTag(p, 0x446C4642u);
  }
  NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(&this->NDIS_BIND_LINK_BASE);
  ExFreePoolWithTag(this, 0x4C6C4642u);
  return this;
}
