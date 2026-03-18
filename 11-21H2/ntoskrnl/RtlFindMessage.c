/*
 * XREFs of RtlFindMessage @ 0x140758920
 * Callers:
 *     PiGetDefaultMessageString @ 0x1408523B4 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x1409346B0 (IopInitializeBootLogging.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x140AAE860 (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x1402D79D4 (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x14075717C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x14075883C (LdrpAccessResourceData.c)
 */

__int64 __fastcall RtlFindMessage(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 **a5)
{
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *v9; // [rsp+38h] [rbp-38h] BYREF
  int *v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-28h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v8 = 0;
  v11[0] = a2;
  v11[2] = a3;
  v11[1] = 1LL;
  v11[3] = a4;
  result = LdrpSearchResourceSection_U(a1, v11, 4u, 64, (unsigned __int64 *)&v9);
  if ( (int)result >= 0 )
  {
    result = LdrpAccessResourceData(a1, v9, (unsigned __int64 *)&v10, &v8);
    if ( (int)result >= 0 )
      return RtlpFindMessageInTable(v10, v8, a4, a5);
  }
  return result;
}
