/*
 * XREFs of sub_140544670 @ 0x140544670
 * Callers:
 *     sub_14054445C @ 0x14054445C (sub_14054445C.c)
 *     sub_140546FB0 @ 0x140546FB0 (sub_140546FB0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_140544670(int a1, _DWORD *a2)
{
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // r14
  __int16 v7; // ax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v14 = 0LL;
  LODWORD(v15) = 0;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v13 = 0LL;
  v10 = 0LL;
  v4 = sub_14039DF90((PHYSICAL_ADDRESS *)&v13, 1, 0LL, 16LL);
  v5 = 0;
  v6 = sub_14039DF90((PHYSICAL_ADDRESS *)&v10, 2, 0LL, 4LL);
  *v4 = -1LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = a1;
  v7 = HvlInvokeHypercall(154);
  if ( !v7 )
    v5 = *(_DWORD *)v6;
  *a2 = v5;
  v8 = v7 != 0 ? 0xC0000001 : 0;
  sub_14039D8F0((__int64)&v10);
  sub_14039D8F0((__int64)&v13);
  return v8;
}
