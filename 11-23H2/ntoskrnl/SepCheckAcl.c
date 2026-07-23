/*
 * XREFs of SepCheckAcl @ 0x1406BA490
 * Callers:
 *     SeCaptureAcl @ 0x1406BA378 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x140736D40 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x140736A70 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
