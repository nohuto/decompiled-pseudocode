/*
 * XREFs of WmipGECleanup @ 0x1409E1570
 * Callers:
 *     <none>
 * Callees:
 *     EtwUnregister @ 0x1407C0E00 (EtwUnregister.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall WmipGECleanup(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    EtwUnregister(v2);
  ExFreePoolWithTag(*(PVOID *)(a1 + 96), 0x70696D57u);
}
