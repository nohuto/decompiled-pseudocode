/*
 * XREFs of sub_14040D260 @ 0x14040D260
 * Callers:
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 * Callees:
 *     sub_14040D570 @ 0x14040D570 (sub_14040D570.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

_DWORD *__fastcall sub_14040D260(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebp
  _DWORD *result; // rax

  v6 = sub_14040D570(a3);
  if ( a2 < v6 )
    sub_14056AF38(1768846435LL);
  result = a1;
  a1[1] = a3;
  a1[2] = v6;
  *a1 = 1732837376;
  return result;
}
