/*
 * XREFs of ??_G?$heap_implements@VWindowRegistration@@@impl@winrt@@UEAAPEAXI@Z @ 0x1806C4F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1WindowRegistration@@UEAA@XZ @ 0x1806C4E6C (--1WindowRegistration@@UEAA@XZ.c)
 */

WindowRegistration *__fastcall winrt::impl::heap_implements<WindowRegistration>::`scalar deleting destructor'(
        WindowRegistration *a1,
        char a2)
{
  WindowRegistration::~WindowRegistration(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
