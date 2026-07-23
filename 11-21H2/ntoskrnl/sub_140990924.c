/*
 * XREFs of sub_140990924 @ 0x140990924
 * Callers:
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1405D36A4 @ 0x1405D36A4 (sub_1405D36A4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140990924(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  Buffer = 0;
  sub_1405D36A4(v2, a2);
  sub_140A48330(v4);
  if ( a2 )
  {
    if ( ++dword_140C22088 == 1 )
    {
      Buffer = 1;
LABEL_5:
      ZwUpdateWnfStateData(&stru_140037728, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
  }
  else if ( !--dword_140C22088 )
  {
    goto LABEL_5;
  }
  return sub_140A47CF8(v6, v5);
}
