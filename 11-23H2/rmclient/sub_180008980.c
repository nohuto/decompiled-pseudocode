/*
 * XREFs of sub_180008980 @ 0x180008980
 * Callers:
 *     sub_180002540 @ 0x180002540 (sub_180002540.c)
 *     sub_180002DF0 @ 0x180002DF0 (sub_180002DF0.c)
 *     sub_180003A40 @ 0x180003A40 (sub_180003A40.c)
 *     sub_180004B70 @ 0x180004B70 (sub_180004B70.c)
 *     sub_180004FD4 @ 0x180004FD4 (sub_180004FD4.c)
 *     sub_180007050 @ 0x180007050 (sub_180007050.c)
 *     sub_180009BD0 @ 0x180009BD0 (sub_180009BD0.c)
 *     sub_180019320 @ 0x180019320 (sub_180019320.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 *     sub_18001B010 @ 0x18001B010 (sub_18001B010.c)
 *     sub_18001B070 @ 0x18001B070 (sub_18001B070.c)
 *     sub_18001B0D0 @ 0x18001B0D0 (sub_18001B0D0.c)
 *     sub_18001B130 @ 0x18001B130 (sub_18001B130.c)
 *     sub_18001B620 @ 0x18001B620 (sub_18001B620.c)
 *     sub_18001B6E0 @ 0x18001B6E0 (sub_18001B6E0.c)
 *     sub_18001B7A0 @ 0x18001B7A0 (sub_18001B7A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180008980(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax

  v1 = *a1;
  if ( *a1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  while ( v1 != _InterlockedCompareExchange(a1, v1 + 1, v1) )
  {
    v1 = *a1;
    if ( *a1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  return (unsigned int)(v1 + 1);
}
