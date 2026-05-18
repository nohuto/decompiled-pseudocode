/*
 * XREFs of sub_18000B5E0 @ 0x18000B5E0
 * Callers:
 *     sub_18000AF98 @ 0x18000AF98 (sub_18000AF98.c)
 * Callees:
 *     sub_18000BCEC @ 0x18000BCEC (sub_18000BCEC.c)
 *     sub_18000BE94 @ 0x18000BE94 (sub_18000BE94.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BEA0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__configure_narrow_argv @ 0x18000BF46 (_o__configure_narrow_argv.c)
 *     _o__initialize_narrow_environment @ 0x18000BF82 (_o__initialize_narrow_environment.c)
 */

char sub_18000B5E0()
{
  int v0; // eax
  unsigned int v1; // eax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    sub_18000BCEC();
  }
  else
  {
    v1 = sub_18000BE94();
    if ( (unsigned int)o__configure_narrow_argv(v1) )
      return 0;
    o__initialize_narrow_environment();
  }
  return 1;
}
