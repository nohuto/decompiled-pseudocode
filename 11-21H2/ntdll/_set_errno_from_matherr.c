/*
 * XREFs of _set_errno_from_matherr @ 0x18009CA74
 * Callers:
 *     _call_matherr @ 0x18009BB84 (_call_matherr.c)
 *     _handle_error @ 0x18009BCB0 (_handle_error.c)
 *     _except1 @ 0x18009C400 (_except1.c)
 *     _umatherr @ 0x18009CAA8 (_umatherr.c)
 * Callees:
 *     _errno @ 0x18008D010 (_errno.c)
 */

int *__fastcall set_errno_from_matherr(int a1)
{
  int *result; // rax

  if ( a1 == 1 )
  {
    result = errno();
    *result = 33;
  }
  else
  {
    result = (int *)(unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = errno();
      *result = 34;
    }
  }
  return result;
}
