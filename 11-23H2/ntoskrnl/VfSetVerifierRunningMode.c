/*
 * XREFs of VfSetVerifierRunningMode @ 0x140ADAD5C
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140ADD940 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140B69A68 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_140C139A4 = a1;
  return result;
}
