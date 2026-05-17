/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x180081474
 * Callers:
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180030140 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x180031A30 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     CompatCachepLookupCdb @ 0x18007427C (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

wchar_t *__fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  const void **v3; // rsi
  wchar_t *v4; // rbx
  wchar_t *result; // rax
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v2 = *a1;
  v3 = (const void **)(a1 + 4);
  if ( v2 + 2 > a1[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v4 = result;
    if ( !result )
      return result;
    memmove(result, *v3, *a1);
    v4[(unsigned __int64)*a1 >> 1] = 0;
  }
  result = (wchar_t *)CompatCachepLookupCdb(v4, 4);
  if ( (_DWORD)result )
  {
    result = (wchar_t *)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&v7);
    if ( !(_DWORD)result )
    {
      v6 = *a1 + 2;
      v8 = v4;
      v9 = v6;
      v10 = 0;
      EtwEventWrite(v7, (int)&DeprecatedDll, 1, (__int64)&v8);
      result = (wchar_t *)EtwNotificationUnregister(v7, 0LL);
    }
    if ( v4 != *v3 )
      return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v4);
  }
  return result;
}
