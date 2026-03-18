/*
 * XREFs of ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0009030
 * Callers:
 *     ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0008FB0 (-QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxRequest@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0008FF0 (-QueryInterface@FxRequest@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0009390 (-QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C000EB10 (-QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C003F4B0 (-QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00403A0 (-QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0042D80 (-QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxUserObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0048380 (-QueryInterface@FxUserObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00657A0 (-QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::QueryInterface(FxObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4096 )
    return 3221226169LL;
  *Params->Object = this;
  return 0LL;
}
