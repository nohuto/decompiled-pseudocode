/*
 * XREFs of _matherr @ 0x18009DD1C
 * Callers:
 *     _call_matherr @ 0x18009BB84 (_call_matherr.c)
 *     _umatherr @ 0x18009CAA8 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
