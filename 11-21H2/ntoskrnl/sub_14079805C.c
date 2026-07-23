/*
 * XREFs of sub_14079805C @ 0x14079805C
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     sub_140792BF0 @ 0x140792BF0 (sub_140792BF0.c)
 *     sub_140797ACC @ 0x140797ACC (sub_140797ACC.c)
 *     sub_140854CB8 @ 0x140854CB8 (sub_140854CB8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14079805C(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (void *)qword_140D00C10 && v2 != (void *)qword_140D06B18 )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
