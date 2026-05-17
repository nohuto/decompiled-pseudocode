/*
 * XREFs of _set_errno_from_matherr @ 0x180097B60
 * Callers:
 *     _call_matherr @ 0x180096C7C (_call_matherr.c)
 *     _handle_error @ 0x180096DA8 (_handle_error.c)
 *     _except1 @ 0x1800974F0 (_except1.c)
 *     _umatherr @ 0x180097B98 (_umatherr.c)
 * Callees:
 *     _errno @ 0x1800885F0 (_errno.c)
 */

void __fastcall set_errno_from_matherr(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( (unsigned int)(v1 - 1) <= 1 )
      *errno() = 34;
  }
  else
  {
    *errno() = 33;
  }
}
