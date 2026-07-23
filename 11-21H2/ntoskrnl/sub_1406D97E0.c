/*
 * XREFs of sub_1406D97E0 @ 0x1406D97E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402519E4 @ 0x1402519E4 (sub_1402519E4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     sub_1406D98D8 @ 0x1406D98D8 (sub_1406D98D8.c)
 *     sub_1406D98F8 @ 0x1406D98F8 (sub_1406D98F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1406D97E0(unsigned int *P)
{
  int v2; // ebp
  char *Pool2; // rdi
  unsigned int i; // esi
  void *v5; // rcx
  BOOLEAN v6; // [rsp+20h] [rbp-28h]

  v2 = 0;
  Pool2 = (char *)ExAllocatePool2(256LL, (unsigned __int64)P[13] << 6, 1853049172LL);
  if ( Pool2 )
  {
    v6 = EtwProviderEnabled(qword_140C15E00, 0, 0x10000000uLL);
    v2 = sub_1406D98F8(Pool2, *((_QWORD *)P + 8), *((_QWORD *)P + 9), P[13], v6);
  }
  sub_1402519E4(*((PEVENT_DATA_DESCRIPTOR *)P + 4), P[12], 1, (__int64)Pool2, v2, P[13], *((PCEVENT_DESCRIPTOR *)P + 7));
  for ( i = 0; i < P[13]; ++i )
  {
    if ( _bittest(&v2, i) )
      sub_1406D98D8(&Pool2[64 * (unsigned __int64)i]);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v5 = (void *)*((_QWORD *)P + 8);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x69547445u);
  ExFreePoolWithTag(P, 0);
}
