/*
 * XREFs of ?Release@PhoneShellNamespaceHelper@ContentManagement@@UEAAKXZ @ 0x1800433F0
 * Callers:
 *     ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180043400 (-Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x180043420 (-Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ActionHelper@ContentManagement@@WDA@EAAKXZ @ 0x180043440 (-Release@ActionHelper@ContentManagement@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(this);
}
