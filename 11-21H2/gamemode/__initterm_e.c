/*
 * XREFs of __initterm_e @ 0x10006CFF
 * Callers:
 *     __CRT_INIT@12 @ 0x10006818 (__CRT_INIT@12.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __cdecl _initterm_e(_PIFV *First, _PIFV *Last)
{
  _PIFV *v2; // esi
  int result; // eax

  v2 = First;
  for ( result = 0; v2 < Last; ++v2 )
  {
    if ( result )
      break;
    if ( *v2 )
      result = ((int (__thiscall *)(_PIFV))*v2)(*v2);
  }
  return result;
}
