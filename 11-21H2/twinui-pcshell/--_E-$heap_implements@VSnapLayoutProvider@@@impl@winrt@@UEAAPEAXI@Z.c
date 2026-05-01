/*
 * XREFs of ??_E?$heap_implements@VSnapLayoutProvider@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805922CC
 * Callers:
 *     ??_ESnapLayoutProvider@@W7EAAPEAXI@Z @ 0x18020EC30 (--_ESnapLayoutProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x180591E5C (--1SnapLayoutProvider@@UEAA@XZ.c)
 */

SnapLayoutProvider *__fastcall winrt::impl::heap_implements<SnapLayoutProvider>::`vector deleting destructor'(
        SnapLayoutProvider *a1,
        char a2)
{
  SnapLayoutProvider::~SnapLayoutProvider(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
