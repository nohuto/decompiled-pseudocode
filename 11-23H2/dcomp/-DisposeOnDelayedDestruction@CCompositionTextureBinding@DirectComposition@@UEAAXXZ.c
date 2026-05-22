/*
 * XREFs of ?DisposeOnDelayedDestruction@CCompositionTextureBinding@DirectComposition@@UEAAXXZ @ 0x1800A0490
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z @ 0x180063C1C (-SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestru.c)
 */

void __fastcall DirectComposition::CCompositionTextureBinding::DisposeOnDelayedDestruction(struct IUnknown **this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(this + 3);
  DirectComposition::CResourceProxy::SetDeletedNotificationTag(
    this[3],
    (struct DirectComposition::CDelayedDestructionObject *)this);
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset(v1);
}
