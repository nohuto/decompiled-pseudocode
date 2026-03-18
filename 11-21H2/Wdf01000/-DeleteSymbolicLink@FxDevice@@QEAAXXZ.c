/*
 * XREFs of ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C002BB4C
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x1C002B720 (--1FxDevice@@UEAA@XZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00302A8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C0083510 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0083790 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C0089A50 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDevice::DeleteSymbolicLink(FxDevice *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_SymbolicLinkName.Buffer;
  if ( Buffer )
  {
    if ( this->m_SymbolicLinkName.Length )
    {
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
      Buffer = this->m_SymbolicLinkName.Buffer;
    }
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_SymbolicLinkName = 0LL;
  }
}
