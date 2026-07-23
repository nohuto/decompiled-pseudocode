/*
 * XREFs of sub_1409AF6F0 @ 0x1409AF6F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402EEA18 @ 0x1402EEA18 (sub_1402EEA18.c)
 */

LONG_PTR __fastcall sub_1409AF6F0(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    sub_1402EEA18(*(_QWORD *)a1, 0LL, v1);
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63547350u);
}
