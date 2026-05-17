/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800EFF04
 * Callers:
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A4290 (NtQueryInformationFile.c)
 */

__int64 __fastcall LdrpResValidateFileHandle(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return NtQueryInformationFile();
}
