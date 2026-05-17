/*
 * XREFs of __iscsym @ 0x180094250
 * Callers:
 *     <none>
 * Callees:
 *     __pctype_func @ 0x18009A0B0 (__pctype_func.c)
 */

int __cdecl _iscsym(int C)
{
  char v1; // bl

  v1 = C;
  return (_pctype_func()[(unsigned __int8)C] & 0x107) != 0 || v1 == 95;
}
