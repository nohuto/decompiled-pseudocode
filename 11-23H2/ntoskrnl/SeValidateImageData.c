/*
 * XREFs of SeValidateImageData @ 0x1406B1210
 * Callers:
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1406B0FF8 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C379C8 )
    return qword_140C379C8(a1);
  else
    return 3221226536LL;
}
