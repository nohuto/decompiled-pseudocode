/*
 * XREFs of __anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog_::_1_::dtor$1 @ 0x1802176C3
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog_::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    winrt::hstring::~hstring(*(volatile signed __int32 ***)(a2 + 120), a2, a3, a4);
  }
}
