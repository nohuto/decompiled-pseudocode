/*
 * XREFs of sub_1405D4980 @ 0x1405D4980
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1405D4980(unsigned int ***a1, int a2, const CHAR **a3, int a4, _DWORD *a5, int a6)
{
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  const CHAR *v8; // rdx
  __int64 v9; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  ANSI_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      if ( a5 )
      {
        if ( a6 == 2 && a2 == 1 && *((_DWORD *)*a1 + 2) == 8 )
        {
          v7 = **a1;
          v8 = *a3;
          String1 = *(UNICODE_STRING *)(v7 + 2);
          RtlInitAnsiString(&SourceString, v8);
          if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) >= 0 )
          {
            if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
            {
              v9 = *v7;
              if ( (_DWORD)v9 == *a5 )
              {
                v6 = 2;
                v7[v9 + 6] = a5[1] + 1;
              }
            }
            RtlFreeUnicodeString(&DestinationString);
          }
        }
      }
    }
  }
  return v6;
}
