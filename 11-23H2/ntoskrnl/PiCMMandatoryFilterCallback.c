/*
 * XREFs of PiCMMandatoryFilterCallback @ 0x1407CF580
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpRtlApplyMandatoryFilters @ 0x140741628 (PiPnpRtlApplyMandatoryFilters.c)
 */

char __fastcall PiCMMandatoryFilterCallback(
        __int64 a1,
        __int64 a2,
        int a3,
        struct _SECURITY_SUBJECT_CONTEXT *SessionId)
{
  char v4; // bl
  int v5; // eax
  char v6; // cl
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  LOBYTE(v8) = 0;
  if ( SessionId && a3 == 1 )
  {
    v5 = PiPnpRtlApplyMandatoryFilters(a1, a2, 1, 0LL, SessionId, &v8);
    v6 = v8;
    if ( v5 < 0 )
      return 0;
    return v6;
  }
  return v4;
}
