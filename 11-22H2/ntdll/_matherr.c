/*
 * XREFs of _matherr @ 0x180098E5C
 * Callers:
 *     _call_matherr @ 0x180096C7C (_call_matherr.c)
 *     _umatherr @ 0x180097B98 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
