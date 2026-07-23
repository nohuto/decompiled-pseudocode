/*
 * XREFs of sub_14098CBC0 @ 0x14098CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_14099D0FC @ 0x14099D0FC (sub_14099D0FC.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14098CBC0(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 8;
  v2 = ExQueryWnfStateData(a1, &v8, &v7, &v6);
  if ( v2 >= 0 )
  {
    if ( v6 >= 8 )
    {
      sub_140A48330(v1);
      sub_14099D0FC(v7, 3LL);
      sub_140A47CF8(v4, v3);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
