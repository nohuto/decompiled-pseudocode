/*
 * XREFs of sub_140753F64 @ 0x140753F64
 * Callers:
 *     sub_140753E4C @ 0x140753E4C (sub_140753E4C.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 */

BOOLEAN __fastcall sub_140753F64(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
