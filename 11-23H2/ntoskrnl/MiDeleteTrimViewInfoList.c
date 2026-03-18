/*
 * XREFs of MiDeleteTrimViewInfoList @ 0x14085FB74
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLocateSharedPageViews @ 0x1406364E0 (MiLocateSharedPageViews.c)
 *     MmQueryBadAddresses @ 0x140A2FDD8 (MmQueryBadAddresses.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteTrimViewInfoList(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[1];
      if ( v3 )
        ObfDereferenceObject(v3);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
