/*
 * XREFs of sub_1407E2020 @ 0x1407E2020
 * Callers:
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1407E20B8 @ 0x1407E20B8 (sub_1407E20B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E2020(char *Source1, unsigned int a2)
{
  int v3; // ebx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  void *Source2; // [rsp+40h] [rbp+18h] BYREF

  Source2 = 0LL;
  v5 = 0;
  if ( Source1 && a2 > 0x20 )
  {
    v3 = sub_1407E20B8(Source1 + 32, a2 - 32, &Source2, &v5);
    if ( v3 >= 0 )
    {
      if ( v5 == 32 )
      {
        if ( RtlCompareMemory(Source1, Source2, 0x20uLL) != 32 )
          v3 = -1073740760;
      }
      else
      {
        v3 = -1073741811;
      }
    }
    if ( Source2 )
      ExFreePoolWithTag(Source2, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
