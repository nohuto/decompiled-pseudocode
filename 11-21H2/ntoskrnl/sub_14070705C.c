/*
 * XREFs of sub_14070705C @ 0x14070705C
 * Callers:
 *     sub_1406ACDDC @ 0x1406ACDDC (sub_1406ACDDC.c)
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_14082CB7C @ 0x14082CB7C (sub_14082CB7C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14070705C(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[3] = 0LL;
  }
}
