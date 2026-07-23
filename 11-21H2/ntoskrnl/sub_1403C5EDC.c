/*
 * XREFs of sub_1403C5EDC @ 0x1403C5EDC
 * Callers:
 *     sub_1408301C0 @ 0x1408301C0 (sub_1408301C0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     sub_140830280 @ 0x140830280 (sub_140830280.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

wchar_t *__fastcall sub_1403C5EDC(__int64 a1, void *a2)
{
  __int64 v4; // r14
  wchar_t *result; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  const wchar_t *v9; // rbx
  ULONG_PTR v10; // rdi
  unsigned int v11; // r13d
  unsigned int v12; // esi
  _WORD *v13; // r15
  __int64 v14; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h]

  v18 = 7;
  v4 = 0LL;
  LODWORD(v17) = 0;
  Value = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = (wchar_t *)sub_140830280(a2, &DestinationString, (__int64)&v17);
  if ( (_DWORD)result != -1073741772 )
  {
    v6 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)result == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          v8 = v7;
          result = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x72746C6Du);
          v9 = result;
          if ( result )
            result = (wchar_t *)memset(result, 0, v8);
          if ( v9 )
          {
            v10 = (ULONG_PTR)v9;
            if ( !(unsigned int)sub_140830280(a2, &DestinationString, (__int64)&v17) && (v18 == 1 || v18 == 7) )
            {
              v11 = 0;
              v12 = (unsigned int)v17 >> 1;
              v10 = (ULONG_PTR)v9;
              if ( (unsigned int)v17 >> 1 )
              {
                v13 = (_WORD *)(a1 + 20);
                while ( v9 && *v9 )
                {
                  if ( !wcsicmp(v9, asc_14043D0B0) )
                  {
                    *(_WORD *)(a1 + 20) = -1;
                    return (wchar_t *)sub_140348B40(v10);
                  }
                  RtlInitUnicodeString(&DestinationString, v9);
                  if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value)
                    || (++v4, *v13 = Value, ++v13, v4 < 4) )
                  {
                    v14 = -1LL;
                    do
                      ++v14;
                    while ( v9[v14] );
                    v11 += v14 + 1;
                    v9 += (unsigned int)(v14 + 1);
                    if ( v11 < v12 )
                      continue;
                  }
                  return (wchar_t *)sub_140348B40(v10);
                }
              }
            }
            return (wchar_t *)sub_140348B40(v10);
          }
        }
      }
    }
  }
  return result;
}
