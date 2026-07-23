/*
 * XREFs of ExpLicUpdateChecksum @ 0x140609718
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406095AC (ExpGetLicenseTamperState.c)
 *     sub_1409F9CD0 @ 0x1409F9CD0 (sub_1409F9CD0.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}
