/*
 * XREFs of sub_140A1A570 @ 0x140A1A570
 * Callers:
 *     sub_140A19DE8 @ 0x140A19DE8 (sub_140A19DE8.c)
 *     sub_140A1A2F8 @ 0x140A1A2F8 (sub_140A1A2F8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140A1A5D0 @ 0x140A1A5D0 (sub_140A1A5D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A1A570(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      sub_140A1A5D0(v1 + 6);
      sub_140A1A5D0(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      ExFreePoolWithTag(v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
