/*
 * XREFs of sub_140715F7C @ 0x140715F7C
 * Callers:
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140715F7C(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // edx

  *a4 = 0;
  if ( a1 < 0x14 )
    return 0;
  if ( a1 >= a2 )
    return 0;
  v4 = a2 - a1;
  if ( v4 < a3 || (a1 & 3) != 0 )
    return 0;
  *a4 = v4;
  return 1;
}
