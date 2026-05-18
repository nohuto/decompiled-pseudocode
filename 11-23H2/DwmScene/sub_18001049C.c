/*
 * XREFs of sub_18001049C @ 0x18001049C
 * Callers:
 *     sub_180010430 @ 0x180010430 (sub_180010430.c)
 *     sub_180014F40 @ 0x180014F40 (sub_180014F40.c)
 *     sub_180018D90 @ 0x180018D90 (sub_180018D90.c)
 *     sub_180018E00 @ 0x180018E00 (sub_180018E00.c)
 *     sub_180018E70 @ 0x180018E70 (sub_180018E70.c)
 *     sub_180018EE0 @ 0x180018EE0 (sub_180018EE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001049C(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
