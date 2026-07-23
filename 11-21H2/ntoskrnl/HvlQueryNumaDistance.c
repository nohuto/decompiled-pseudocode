/*
 * XREFs of HvlQueryNumaDistance @ 0x140543B40
 * Callers:
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]

  v3 = a2;
  v4 = a1;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v16 = 0LL;
  v13 = 0LL;
  v6 = sub_14039DF90((PHYSICAL_ADDRESS *)&v16, 1, 0LL, 8LL);
  v7 = sub_14039DF90((PHYSICAL_ADDRESS *)&v13, 2, 0LL, 8LL);
  v8 = qword_140D31700[v3];
  *v6 = *(_DWORD *)(qword_140D31700[*(unsigned __int16 *)(qword_140D31700[v4] + 2)] + 4);
  v6[1] = *(_DWORD *)(qword_140D31700[*(unsigned __int16 *)(v8 + 2)] + 4);
  v9 = HvlInvokeHypercall(120);
  if ( v9 )
    v10 = -1LL;
  else
    v10 = *v7;
  *a3 = v10;
  v11 = v9 != 0 ? 0xC0000001 : 0;
  sub_14039D8F0((__int64)&v13);
  sub_14039D8F0((__int64)&v16);
  return v11;
}
