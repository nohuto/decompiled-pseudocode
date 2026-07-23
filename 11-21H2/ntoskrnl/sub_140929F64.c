/*
 * XREFs of sub_140929F64 @ 0x140929F64
 * Callers:
 *     sub_140540210 @ 0x140540210 (sub_140540210.c)
 *     sub_140929940 @ 0x140929940 (sub_140929940.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140929F64(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
