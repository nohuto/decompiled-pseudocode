/*
 * XREFs of ??_G?$__base@$$A6AXW4RegistryChangeKind@wil@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18007B850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
