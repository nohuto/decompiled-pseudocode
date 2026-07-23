/*
 * XREFs of sub_14045AD66 @ 0x14045AD66
 * Callers:
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 * Callees:
 *     sub_14045AB80 @ 0x14045AB80 (sub_14045AB80.c)
 *     sub_14045AE34 @ 0x14045AE34 (sub_14045AE34.c)
 */

__int64 __fastcall sub_14045AD66(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // r9
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v5 = sub_14045AE34(a1, a2, &v8, a4);
  v6 = v5;
  if ( v5 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    sub_14045AB80(a1, v5);
  return *((unsigned int *)&unk_140D05420 + 2 * v6 + v8);
}
