/*
 * XREFs of sub_1405CEDA8 @ 0x1405CEDA8
 * Callers:
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405D1FA4 @ 0x1405D1FA4 (sub_1405D1FA4.c)
 */

char __fastcall sub_1405CEDA8(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v4; // bl
  __int64 v6; // r10
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+2Ch] [rbp-1Ch]
  __int64 v15; // [rsp+30h] [rbp-18h]
  unsigned int v16; // [rsp+38h] [rbp-10h]
  int v17; // [rsp+3Ch] [rbp-Ch]

  v14 = 0;
  v4 = 0;
  v17 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 == qword_140D04890 )
  {
    if ( v6 )
    {
      v10 = *(_QWORD *)(a1 + 72);
      v13 = a2;
      v12 = v10;
      v15 = a3;
      v16 = a4;
      v4 = sub_14042A5E0(27LL, &v12);
      if ( v4 )
        sub_1405D1FA4(a1, a2, a3, a4);
    }
  }
  return v4;
}
