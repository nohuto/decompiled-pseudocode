/*
 * XREFs of sub_14095DAF0 @ 0x14095DAF0
 * Callers:
 *     sub_140698128 @ 0x140698128 (sub_140698128.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140564D60 @ 0x140564D60 (sub_140564D60.c)
 *     sub_14067AFB0 @ 0x14067AFB0 (sub_14067AFB0.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14095BFCC @ 0x14095BFCC (sub_14095BFCC.c)
 *     sub_14095D488 @ 0x14095D488 (sub_14095D488.c)
 */

__int64 __fastcall sub_14095DAF0(void *a1)
{
  int v2; // ebx
  unsigned __int16 Length; // ax
  unsigned __int64 v4; // rcx
  const WCHAR *v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  const UNICODE_STRING *v9; // r9
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  const UNICODE_STRING *v14; // [rsp+70h] [rbp+30h] BYREF

  v14 = 0LL;
  DestinationString = 0LL;
  v13 = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = sub_14067AFB0(a1, &DestinationString);
  if ( v2 >= 0 )
  {
    Length = DestinationString.Length;
    if ( DestinationString.Length >= 2u )
    {
      v4 = (unsigned __int64)DestinationString.Length >> 1;
      if ( DestinationString.Buffer[v4 - 1] == 92 )
      {
        DestinationString.Buffer[v4 - 1] = 0;
        Length = DestinationString.Length - 2;
        DestinationString.Length -= 2;
      }
    }
    if ( Length > 0x26u
      && RtlPrefixUnicodeString(&stru_140A37D70, &DestinationString, 1u)
      && DestinationString.Buffer[18] == 92 )
    {
      v5 = DestinationString.Buffer + 19;
    }
    else
    {
      v5 = L"SYSTEM";
    }
    RtlInitUnicodeString(&String2, v5);
    v2 = sub_140564D60(&String2, &v13);
    if ( v2 >= 0 )
    {
      if ( (*(_DWORD *)(v13 + 492) & 1) != 0 )
      {
        v6 = sub_1402201F8() ? 2 : 0;
        v8 = sub_14095BFCC(v7, &v14);
        v9 = v14;
        if ( v8 < 0 )
          v9 = 0LL;
        v2 = sub_14095D488((__int64)a1, v6 + 1, &DestinationString, v9);
      }
      else
      {
        v2 = 0;
      }
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v2;
}
