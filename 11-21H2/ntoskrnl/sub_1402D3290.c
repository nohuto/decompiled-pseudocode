/*
 * XREFs of sub_1402D3290 @ 0x1402D3290
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeWorkItem @ 0x1402D32E0 (IoFreeWorkItem.c)
 *     sub_14074D6EC @ 0x14074D6EC (sub_14074D6EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402D3290(__int64 a1, _QWORD *a2, struct _IO_WORKITEM *a3)
{
  if ( a2[8] )
  {
    sub_14074D6EC();
    a2[8] = 0LL;
  }
  IoFreeWorkItem(a3);
  ExFreePoolWithTag(a2, 0x31706E50u);
}
