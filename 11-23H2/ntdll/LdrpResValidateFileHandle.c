/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800F106C
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A10D0 (NtQueryInformationFile.c)
 */

__int64 __fastcall LdrpResValidateFileHandle(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return NtQueryInformationFile();
}
