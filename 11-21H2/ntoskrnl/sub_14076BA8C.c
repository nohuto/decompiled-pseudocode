/*
 * XREFs of sub_14076BA8C @ 0x14076BA8C
 * Callers:
 *     sub_14076B788 @ 0x14076B788 (sub_14076B788.c)
 * Callees:
 *     sub_14024F418 @ 0x14024F418 (sub_14024F418.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14076BA8C(int a1, const WCHAR *a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // r10d
  const WCHAR *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v5 = a3;
  v6 = a2;
  DestinationString = 0LL;
  result = 0LL;
  if ( (a1 == 1 || a1 == 7) && a3 > 2 )
  {
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      return sub_14042A5E0(*a4, &DestinationString);
    }
    else if ( *a2 )
    {
      while ( 1 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( v6[v8] );
        v9 = v8 + 1;
        if ( (int)sub_14024F418(v5, 2 * (int)v9, (int *)&v11) < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, v6);
        result = sub_14042A5E0(*a4, &DestinationString);
        if ( (int)result >= 0 )
        {
          v5 = v11;
          if ( v11 >= 2 )
          {
            v6 += v9;
            if ( *v6 )
              continue;
          }
        }
        return result;
      }
      return 0LL;
    }
  }
  return result;
}
