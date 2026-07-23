/*
 * XREFs of sub_140804E40 @ 0x140804E40
 * Callers:
 *     <none>
 * Callees:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140804E40(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    EtwUnregister(v2);
  ExFreePoolWithTag(*(PVOID *)(a1 + 96), 0x70696D57u);
}
