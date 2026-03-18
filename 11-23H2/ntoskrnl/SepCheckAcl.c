/*
 * XREFs of SepCheckAcl @ 0x1406BA460
 * Callers:
 *     SeCaptureAcl @ 0x1406BA348 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x140736B50 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x140736880 (RtlValidAcl.c)
 */

char __fastcall SepCheckAcl(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == *(unsigned __int16 *)(a1 + 2) )
    return RtlValidAcl();
  else
    return 0;
}
