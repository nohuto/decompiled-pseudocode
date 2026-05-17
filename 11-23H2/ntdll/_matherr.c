/*
 * XREFs of _matherr @ 0x18009965C
 * Callers:
 *     _call_matherr @ 0x18009747C (_call_matherr.c)
 *     _umatherr @ 0x180098398 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
