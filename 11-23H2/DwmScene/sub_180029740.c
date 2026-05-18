/*
 * XREFs of sub_180029740 @ 0x180029740
 * Callers:
 *     sub_18001071C @ 0x18001071C (sub_18001071C.c)
 *     sub_180015EE4 @ 0x180015EE4 (sub_180015EE4.c)
 *     sub_180024750 @ 0x180024750 (sub_180024750.c)
 *     sub_180024964 @ 0x180024964 (sub_180024964.c)
 *     sub_180054130 @ 0x180054130 (sub_180054130.c)
 *     sub_18006EE5C @ 0x18006EE5C (sub_18006EE5C.c)
 *     sub_180083CF0 @ 0x180083CF0 (sub_180083CF0.c)
 *     sub_180085F84 @ 0x180085F84 (sub_180085F84.c)
 *     sub_180087F64 @ 0x180087F64 (sub_180087F64.c)
 *     sub_1800890B4 @ 0x1800890B4 (sub_1800890B4.c)
 *     sub_18008996C @ 0x18008996C (sub_18008996C.c)
 *     sub_180089BFC @ 0x180089BFC (sub_180089BFC.c)
 *     sub_180089D3C @ 0x180089D3C (sub_180089D3C.c)
 *     sub_180089E7C @ 0x180089E7C (sub_180089E7C.c)
 *     sub_180089FBC @ 0x180089FBC (sub_180089FBC.c)
 *     sub_18008A0FC @ 0x18008A0FC (sub_18008A0FC.c)
 *     sub_18008B988 @ 0x18008B988 (sub_18008B988.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 */

__int64 __fastcall sub_180029740(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_180015604(v9, a2);
  v5 = *v4;
  *v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v5;
  v6 = v4[1];
  v4[1] = *(_QWORD *)(a1 + 80);
  v7 = (volatile signed __int32 *)v9[1];
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
    sub_180010574(v7);
  result = sub_180026650(*a2);
  *(_DWORD *)(a1 + 88) = result;
  return result;
}
