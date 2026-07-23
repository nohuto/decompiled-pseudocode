/*
 * XREFs of sub_140293A88 @ 0x140293A88
 * Callers:
 *     sub_1402485E0 @ 0x1402485E0 (sub_1402485E0.c)
 *     sub_140293444 @ 0x140293444 (sub_140293444.c)
 *     sub_1403B3F5C @ 0x1403B3F5C (sub_1403B3F5C.c)
 *     sub_1403CE6F8 @ 0x1403CE6F8 (sub_1403CE6F8.c)
 *     sub_1403DC9D4 @ 0x1403DC9D4 (sub_1403DC9D4.c)
 *     sub_1405C9170 @ 0x1405C9170 (sub_1405C9170.c)
 *     sub_1405C94E0 @ 0x1405C94E0 (sub_1405C94E0.c)
 *     sub_1405C9740 @ 0x1405C9740 (sub_1405C9740.c)
 *     sub_1405D6FBC @ 0x1405D6FBC (sub_1405D6FBC.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 *     sub_14081A4FC @ 0x14081A4FC (sub_14081A4FC.c)
 *     sub_14081ACB4 @ 0x14081ACB4 (sub_14081ACB4.c)
 *     sub_14082975C @ 0x14082975C (sub_14082975C.c)
 *     sub_140829930 @ 0x140829930 (sub_140829930.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 *     sub_14098B1A8 @ 0x14098B1A8 (sub_14098B1A8.c)
 *     sub_140998440 @ 0x140998440 (sub_140998440.c)
 *     sub_14099D834 @ 0x14099D834 (sub_14099D834.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_140293BA0 @ 0x140293BA0 (sub_140293BA0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

__int64 __fastcall sub_140293A88(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v8; // [rsp+58h] [rbp-21h]
  int v9; // [rsp+5Ah] [rbp-1Fh]
  __int16 v10; // [rsp+5Eh] [rbp-1Bh]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int64 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  struct _KDPC Dpc; // [rsp+90h] [rbp+17h] BYREF

  Object = 393217LL;
  v17 = 0;
  v6[1] = v6;
  v6[0] = v6;
  v7[1] = *(_QWORD *)(a1 + 8);
  v15 = v7;
  v7[0] = a1;
  v11 = a2;
  p_Object = &Object;
  memset(&Dpc, 0, 60);
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  sub_140293BA0(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
