/*
 * XREFs of ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005FB08
 * Callers:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0019104 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1C002B200 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C01217C8 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

_NDIS_FILTER_DRIVER_BLOCK *__fastcall _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(
        _NDIS_FILTER_DRIVER_BLOCK *this)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rbx

  p = this->Bind._p;
  if ( p && _InterlockedExchangeAdd((volatile signed __int32 *)&p->RefCount, 0xFFFFFFFF) == 1 )
  {
    NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER(&p->_t);
    ExFreePoolWithTag(p, 0x446C4642u);
  }
  return this;
}
