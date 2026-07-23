/*
 * XREFs of sub_1405471A0 @ 0x1405471A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_1405471A0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v10; // rbx
  _DWORD *v11; // rdi
  __int16 v12; // ax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]

  v18 = 0LL;
  LODWORD(v19) = 0;
  v15 = 0LL;
  LODWORD(v16) = 0;
  v17 = 0LL;
  v14 = 0LL;
  v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v17, 1, 0LL, 16LL);
  v11 = sub_14039DF90((PHYSICAL_ADDRESS *)&v14, 2, 0LL, 16LL);
  v10[3] = 0;
  *v10 = a1;
  v10[1] = 0x10000;
  v10[2] = a2;
  v12 = HvlInvokeHypercall(136);
  *a3 = *v11;
  *a4 = v11[1];
  LODWORD(v10) = v12 != 0 ? 0xC0000001 : 0;
  *a5 = v11[2];
  *a6 = v11[3];
  sub_14039D8F0((__int64)&v14);
  sub_14039D8F0((__int64)&v17);
  return (unsigned int)v10;
}
