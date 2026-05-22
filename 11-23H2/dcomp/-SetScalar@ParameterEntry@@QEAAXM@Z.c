/*
 * XREFs of ?SetScalar@ParameterEntry@@QEAAXM@Z @ 0x18003DD18
 * Callers:
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 * Callees:
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall ParameterEntry::SetScalar(ParameterEntry *this, float a2)
{
  ParameterEntry::ClearMatrixValue(this);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock((char *)this + 16);
  *((float *)this + 10) = a2;
  *((_DWORD *)this + 2) = 18;
}
