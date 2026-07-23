/*
 * XREFs of sub_1407E20B8 @ 0x1407E20B8
 * Callers:
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 * Callees:
 *     sub_1407E21D4 @ 0x1407E21D4 (sub_1407E21D4.c)
 *     sub_1407E2260 @ 0x1407E2260 (sub_1407E2260.c)
 *     sub_1407E22B4 @ 0x1407E22B4 (sub_1407E22B4.c)
 *     sub_1407E2328 @ 0x1407E2328 (sub_1407E2328.c)
 *     sub_1407E23BC @ 0x1407E23BC (sub_1407E23BC.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E20B8(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4)
{
  int v8; // ebx
  int v9; // r9d
  PVOID v10; // rdi
  unsigned int v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF

  v14 = 0LL;
  P[0] = 0LL;
  v12 = 0;
  v13 = 0;
  if ( *(__int64 *)((char *)&qword_140C5A704 + 4) )
  {
    v8 = sub_1407E2328(*(__int64 *)((char *)&qword_140C5A704 + 4), &v14, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      v8 = sub_1407E21D4(
             HIDWORD(qword_140C5A704),
             (unsigned int)L"HashDigestLength",
             (unsigned int)&v12,
             v9,
             (__int64)&v13);
      if ( v8 >= 0 )
      {
        v8 = sub_1407E3010(v12, P);
        if ( v8 < 0 || (v8 = sub_1407E23BC(v14, a1, a2), v8 < 0) )
        {
          v10 = P[0];
        }
        else
        {
          v10 = P[0];
          v8 = sub_1407E22B4(v14, P[0], v12);
          if ( v8 >= 0 )
          {
            if ( a3 )
            {
              *a3 = v10;
              v10 = 0LL;
            }
            if ( a4 )
              *a4 = v12;
          }
        }
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
    }
    if ( v14 )
      sub_1407E2260();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
