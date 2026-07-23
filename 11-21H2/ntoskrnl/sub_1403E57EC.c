/*
 * XREFs of sub_1403E57EC @ 0x1403E57EC
 * Callers:
 *     write_char @ 0x1403E466C (write_char.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flswbuf @ 0x1403E5CDC (_flswbuf.c)
 */

__int64 __fastcall sub_1403E57EC(unsigned __int16 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // sf

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 8) - 2 < 0;
    *(_DWORD *)(a2 + 8) -= 2;
    if ( v3 )
    {
      return flswbuf(a1);
    }
    else
    {
      **(_WORD **)a2 = a1;
      result = a1;
      *(_QWORD *)a2 += 2LL;
    }
  }
  else
  {
    _misaligned_access();
    return 0xFFFFLL;
  }
  return result;
}
