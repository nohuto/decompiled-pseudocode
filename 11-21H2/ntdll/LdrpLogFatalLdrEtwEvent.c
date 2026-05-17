/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x180091FAC
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     LdrpInitializationFailure @ 0x180091F40 (LdrpInitializationFailure.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x18008AEB0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

_WORD *__fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, __int128 *a2)
{
  __int64 v3; // rcx
  const void **v5; // rdi
  _WORD *v6; // rbx
  _WORD *result; // rax
  _WORD *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]

  v3 = *a1;
  v5 = (const void **)(a1 + 4);
  if ( v3 + 2 > (unsigned __int64)a1[1] || (v6 = *v5, *((_WORD *)*v5 + ((unsigned __int64)(unsigned int)v3 >> 1))) )
  {
    result = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v6 = result;
    if ( !result )
      return result;
    memmove(result, *v5, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
    LOWORD(v3) = *a1;
  }
  v8 = v6;
  v9 = (unsigned __int16)v3 + 2;
  v10 = 0;
  result = (_WORD *)EtwEventWriteNoRegistration((__int64)&UserLoaderGuid, a2, 1, (__int64)&v8);
  if ( v6 != *v5 )
    return (_WORD *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6);
  return result;
}
