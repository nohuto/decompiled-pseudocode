/*
 * XREFs of SepCheckAcl @ 0x1406BA460
 * Callers:
 *     SeCaptureAcl @ 0x1406BA348 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x140737050 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x140736D80 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
