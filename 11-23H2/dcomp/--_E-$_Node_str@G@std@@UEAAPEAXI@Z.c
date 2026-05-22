/*
 * XREFs of ??_E?$_Node_str@G@std@@UEAAPEAXI@Z @ 0x180042CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::_Node_str<unsigned short>::`vector deleting destructor'(void **a1, char a2)
{
  free(a1[5]);
  *a1 = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x30uLL);
  return a1;
}
