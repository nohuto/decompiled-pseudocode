/*
 * XREFs of sub_140A1E6EC @ 0x140A1E6EC
 * Callers:
 *     sub_140A1E590 @ 0x140A1E590 (sub_140A1E590.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140813564 @ 0x140813564 (sub_140813564.c)
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A1E6EC(__int64 a1, GUID *a2)
{
  unsigned int Data1; // eax
  int v4; // ebx
  GUID v5; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-40h] BYREF
  void *v8; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v9[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  SourceString = 0LL;
  v8 = 0LL;
  Data1 = a2[3].Data1;
  Guid = 0LL;
  DestinationString = 0LL;
  if ( (Data1 & 4) != 0 )
  {
    return 0;
  }
  else
  {
    v9[1] = 270532607;
    v9[0] = 1;
    v4 = sub_140A1CF34(a1, 0LL, v9, 1LL, &v8);
    if ( v4 >= 0 )
    {
      v4 = sub_140813564(v8, &SourceString);
      if ( v4 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v4 = RtlGUIDFromString(&DestinationString, &Guid);
        if ( v4 >= 0 )
        {
          v5 = Guid;
          a2[3].Data1 |= 4u;
          a2[1] = v5;
        }
      }
      if ( SourceString )
        ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    }
    if ( v8 )
      sub_140812D00((__int64)v8);
  }
  return (unsigned int)v4;
}
