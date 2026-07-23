/*
 * XREFs of SeValidateImageData @ 0x1406B1240
 * Callers:
 *     MiValidateInPage @ 0x1402DC710 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1406B1028 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C37968 )
    return qword_140C37968(a1);
  else
    return 3221226536LL;
}
