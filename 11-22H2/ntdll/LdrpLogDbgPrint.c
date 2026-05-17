/*
 * XREFs of LdrpLogDbgPrint @ 0x1800D9720
 * Callers:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180053AB8 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800D99FC (StringCbPrintfA.c)
 */

struct _TEB *__fastcall LdrpLogDbgPrint(__int64 a1, __int64 a2, const char *a3, int a4, char *a5, va_list a6)
{
  struct _TEB *result; // rax
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF

  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    StringCbPrintfA(
      pszDest,
      0x100uLL,
      "%04x:%04x @ %08d - %s - %s: ",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
      a3,
      (&off_180131278)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, a6, 1);
  }
  return result;
}
