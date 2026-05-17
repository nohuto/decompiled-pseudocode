/*
 * XREFs of RtlStringCchCopyExW @ 0x1800AF580
 * Callers:
 *     LdrpEventAddUnicodeString @ 0x1800AF3FE (LdrpEventAddUnicodeString.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DC3B8 (LdrpMakeUnicodeStringFromPathElement.c)
 *     RtlpGetCompleteLanguageFallback @ 0x1800FC618 (RtlpGetCompleteLanguageFallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1800AF616 (RtlStringCopyWorkerW_0.c)
 */

__int64 __fastcall RtlStringCchCopyExW(_WORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v10[0] = 0LL;
    result = RtlStringCopyWorkerW_0(a1, a2, v10, a3);
    v9 = a2 - v10[0];
    if ( (int)result >= 0 || (_DWORD)result == -2147483643 )
    {
      if ( a4 )
        *a4 = &a1[v10[0]];
      if ( a5 )
        *a5 = v9;
    }
  }
  else
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  return result;
}
