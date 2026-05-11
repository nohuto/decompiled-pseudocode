/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qZ @ 0x1C0001B44
 * Callers:
 *     DriverEntry @ 0x1C0028DA0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qZ(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        unsigned __int16 *a10)
{
  _UNKNOWN **result; // rax
  __int64 v14; // rdx
  const wchar_t *v15; // r8
  const wchar_t *v16; // rcx
  int v17; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a2 )
    goto LABEL_10;
  if ( !a10 )
  {
    v14 = 8LL;
    goto LABEL_6;
  }
  v14 = *a10;
  if ( !*a10 )
  {
LABEL_6:
    v15 = L"NULL";
    goto LABEL_7;
  }
  v15 = (const wchar_t *)*((_QWORD *)a10 + 1);
LABEL_7:
  v16 = a10;
  if ( !a10 )
    v16 = L"\b";
  result = (_UNKNOWN **)pfnWppTraceMessage(
                          a1,
                          43LL,
                          &WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids,
                          36LL,
                          &a9,
                          8LL,
                          v16,
                          2LL,
                          v15,
                          v14,
                          0LL);
LABEL_10:
  if ( a3 )
  {
    LOWORD(v17) = 36;
    return (_UNKNOWN **)WppAutoLogTrace(a4, 0LL, 1LL, &WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids, v17, &a9);
  }
  return result;
}
