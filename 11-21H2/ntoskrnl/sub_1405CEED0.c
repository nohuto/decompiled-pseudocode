/*
 * XREFs of sub_1405CEED0 @ 0x1405CEED0
 * Callers:
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405D27D4 @ 0x1405D27D4 (sub_1405D27D4.c)
 */

char __fastcall sub_1405CEED0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  __int64 v4; // r9
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  v12 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 == qword_140D04890 )
  {
    if ( v4 )
    {
      v8 = *(_QWORD *)(a1 + 72);
      v10[1] = a2;
      v10[0] = v8;
      v11 = a3;
      v3 = sub_14042A5E0(26LL, v10);
      if ( v3 )
        sub_1405D27D4(a1, a2, a3);
    }
  }
  return v3;
}
