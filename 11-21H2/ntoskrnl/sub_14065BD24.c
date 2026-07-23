/*
 * XREFs of sub_14065BD24 @ 0x14065BD24
 * Callers:
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_140920FCC @ 0x140920FCC (sub_140920FCC.c)
 * Callees:
 *     sub_14065BDD8 @ 0x14065BDD8 (sub_14065BDD8.c)
 *     sub_14069F130 @ 0x14069F130 (sub_14069F130.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F45C @ 0x14069F45C (sub_14069F45C.c)
 */

_UNKNOWN **__fastcall sub_14065BD24(__int16 *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  _QWORD *v6; // r9
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *a1; i >= 0; --i )
  {
    sub_14069F1CC(a2);
    result = (_UNKNOWN **)sub_14069F130(a1);
    if ( v6[2] )
    {
      result = (_UNKNOWN **)sub_14069F45C(*v6);
      v9 = (int)result;
      if ( (_DWORD)result == 1 )
        break;
      result = (_UNKNOWN **)sub_14065BDD8(v8, v7);
      if ( (v9 & 0xFFFFFFFD) != 0 )
        break;
    }
  }
  return result;
}
