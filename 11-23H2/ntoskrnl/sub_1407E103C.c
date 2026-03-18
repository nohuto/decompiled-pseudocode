/*
 * XREFs of sub_1407E103C @ 0x1407E103C
 * Callers:
 *     sub_1407D2580 @ 0x1407D2580 (sub_1407D2580.c)
 *     WbFreeWarbirdProcess @ 0x1407E0EC0 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E103C(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( P )
  {
    v2 = (void *)P[5];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v3 = (void *)P[7];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
