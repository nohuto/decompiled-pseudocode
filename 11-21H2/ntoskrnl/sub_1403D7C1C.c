/*
 * XREFs of sub_1403D7C1C @ 0x1403D7C1C
 * Callers:
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 */

int __fastcall sub_1403D7C1C(__int64 a1, char a2, const WCHAR *a3, const WCHAR *a4, UNICODE_STRING *Destination)
{
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  WCHAR *i; // rcx
  WCHAR *v16; // rdx
  int result; // eax
  WCHAR v18[2]; // [rsp+1Ch] [rbp-25Ch] BYREF
  WCHAR Source[264]; // [rsp+20h] [rbp-258h] BYREF

  if ( !a1 || !Destination || !a4 )
    return -1073741811;
  v9 = *(unsigned __int16 *)(a1 + 88);
  v10 = *(unsigned __int16 *)(a1 + 72);
  v11 = v10 - v9;
  if ( v11 >= 0x208 || (unsigned __int16)v10 <= (unsigned __int16)v9 )
    return -1073020927;
  v12 = (unsigned int)v11;
  memmove(Source, *(const void **)(a1 + 80), (unsigned int)v11);
  v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 >= 0x208 )
    sub_140502A3C();
  *(WCHAR *)((char *)Source + v13) = 0;
  if ( !a2 )
  {
    v16 = Source;
LABEL_17:
    result = RtlAppendUnicodeToString(Destination, v16);
    if ( result >= 0 )
    {
      if ( !a2 )
      {
        RtlAppendUnicodeToString(Destination, a4);
        RtlAppendUnicodeToString(Destination, &word_140439030);
      }
      result = RtlAppendUnicodeToString(Destination, *(PCWSTR *)(a1 + 96));
      if ( result >= 0 )
      {
        if ( a3 )
          return RtlAppendUnicodeToString(Destination, a3);
      }
    }
    return result;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( Source[v14] );
  for ( i = &v18[(unsigned int)v14]; ; --i )
  {
    if ( i <= Source )
      return -1073741686;
    if ( *i == 92 )
      break;
  }
  i[1] = 0;
  result = RtlAppendUnicodeToString(Destination, Source);
  if ( result >= 0 )
  {
    v16 = (WCHAR *)L"SystemResources\\";
    goto LABEL_17;
  }
  return result;
}
