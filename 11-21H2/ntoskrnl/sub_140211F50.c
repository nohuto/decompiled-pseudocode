/*
 * XREFs of sub_140211F50 @ 0x140211F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140690600 @ 0x140690600 (sub_140690600.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140211F50(__int64 a1, _QWORD *a2)
{
  void *v3; // rcx

  if ( *a2 )
    sub_140690600();
  v3 = (void *)a2[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
}
