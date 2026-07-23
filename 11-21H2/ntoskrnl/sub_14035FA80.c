/*
 * XREFs of sub_14035FA80 @ 0x14035FA80
 * Callers:
 *     sub_1402009E4 @ 0x1402009E4 (sub_1402009E4.c)
 *     sub_140233A4C @ 0x140233A4C (sub_140233A4C.c)
 *     sub_140233AA0 @ 0x140233AA0 (sub_140233AA0.c)
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 *     sub_140A483FC @ 0x140A483FC (sub_140A483FC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14035FA80(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDelete(v3);
      else
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
