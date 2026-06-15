/*
 * XREFs of ??_E?$__base@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x140076C30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base<void (WNF_AUDIO_ORIENTATION_STATE const &)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (WNF_AUDIO_ORIENTATION_STATE const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
