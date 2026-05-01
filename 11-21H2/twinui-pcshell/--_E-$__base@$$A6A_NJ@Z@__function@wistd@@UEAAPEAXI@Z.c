/*
 * XREFs of ??_E?$__base@$$A6A_NJ@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1802D6DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base<bool (long)>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
