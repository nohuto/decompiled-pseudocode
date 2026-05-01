/*
 * XREFs of sub_180008B2C @ 0x180008B2C
 * Callers:
 *     sub_180006A00 @ 0x180006A00 (sub_180006A00.c)
 *     sub_180008B00 @ 0x180008B00 (sub_180008B00.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_180019930 @ 0x180019930 (sub_180019930.c)
 *     sub_18001BAD0 @ 0x18001BAD0 (sub_18001BAD0.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18001BC10 @ 0x18001BC10 (sub_18001BC10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180008B2C(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
