/*
 * XREFs of sub_140764B98 @ 0x140764B98
 * Callers:
 *     ntoskrnl_16 @ 0x140764AE0 (ntoskrnl_16.c)
 *     ntoskrnl_13 @ 0x140764B80 (ntoskrnl_13.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140764B98(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObject(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
