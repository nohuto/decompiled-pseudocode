/*
 * XREFs of sub_1403EAB5C @ 0x1403EAB5C
 * Callers:
 *     sub_1403E9C2C @ 0x1403E9C2C (sub_1403E9C2C.c)
 *     _whiteout @ 0x1403EA090 (_whiteout.c)
 *     sub_1403EA0E8 @ 0x1403EA0E8 (sub_1403EA0E8.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403EAC4C @ 0x1403EAC4C (sub_1403EAC4C.c)
 */

__int64 __fastcall sub_1403EAB5C(unsigned __int16 **a1)
{
  __int64 result; // rax
  bool v3; // sf
  unsigned __int16 *v4; // rcx

  if ( a1 )
  {
    v3 = *((_DWORD *)a1 + 2) - 2 < 0;
    *((_DWORD *)a1 + 2) -= 2;
    if ( v3 )
    {
      return sub_1403EAC4C(a1, a1);
    }
    else
    {
      v4 = *a1;
      result = *v4;
      *a1 = v4 + 1;
    }
  }
  else
  {
    _misaligned_access();
    return 0xFFFFLL;
  }
  return result;
}
