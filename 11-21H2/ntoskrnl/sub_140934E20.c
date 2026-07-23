/*
 * XREFs of sub_140934E20 @ 0x140934E20
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140934E20(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( byte_140C5B134 )
  {
    ExRaiseHardError(*((unsigned int *)P + 4), v2 != 0LL);
    v2 = (void *)P[4];
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_140C472DC);
}
