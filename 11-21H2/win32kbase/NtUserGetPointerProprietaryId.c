/*
 * XREFs of NtUserGetPointerProprietaryId @ 0x1C015A570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C01CC070 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerProprietaryId(CTouchProcessor *a1, struct _GUID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  struct _GUID v8; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  v6 = 0;
  if ( CTouchProcessor::GetPointerProprietaryId(a1, (unsigned int)a1, &v8) )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct _GUID *)MmUserProbeAddress;
    *a2 = v8;
    return 1;
  }
  else
  {
    UserSetLastError(232LL, v3, v4, v5);
  }
  return v6;
}
