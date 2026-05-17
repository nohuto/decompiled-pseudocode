/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x180110E0C
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x180110FC4 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 */

wchar_t *__fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  wchar_t *result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // esi
  _WORD *v12; // r15
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+50h] BYREF
  int v17; // [rsp+A8h] [rbp+58h] BYREF

  v17 = 7;
  v4 = 0LL;
  v16 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = (wchar_t *)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v17, 0LL, &v16);
  if ( (_DWORD)result != -1073741772 )
  {
    v6 = v16;
    if ( v16 )
    {
      if ( (_DWORD)result == -2147483643 )
      {
        v16 += 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
          v8 = result;
          if ( result )
          {
            v9 = (__int64)result;
            if ( !(unsigned int)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v17, result, &v16)
              && (v17 == 1 || v17 == 7) )
            {
              v10 = 0;
              v11 = v16 >> 1;
              v9 = (__int64)v8;
              if ( v16 >> 1 )
              {
                v12 = (_WORD *)(a1 + 20);
                while ( v8 && *v8 )
                {
                  if ( !wcsicmp(v8, L"*") )
                  {
                    *(_WORD *)(a1 + 20) = -1;
                    return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
                  }
                  RtlInitUnicodeString(&DestinationString, v8);
                  if ( (unsigned int)RtlUnicodeStringToInteger(&DestinationString.Length, 0xAu, &v14)
                    || (++v4, *v12 = v14, ++v12, v4 < 4) )
                  {
                    v13 = -1LL;
                    do
                      ++v13;
                    while ( v8[v13] );
                    v10 += v13 + 1;
                    v8 += (unsigned int)(v13 + 1);
                    if ( v10 < v11 )
                      continue;
                  }
                  return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
                }
              }
            }
            return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
          }
        }
      }
    }
  }
  return result;
}
