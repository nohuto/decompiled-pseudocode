/*
 * XREFs of sub_140A64748 @ 0x140A64748
 * Callers:
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     sub_14052DC38 @ 0x14052DC38 (sub_14052DC38.c)
 *     sub_14052FFE0 @ 0x14052FFE0 (sub_14052FFE0.c)
 */

__int64 __fastcall sub_140A64748(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int16 v6; // bp
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v6 = a3;
  v8 = sub_14052DC38(a1, 0xFFFFFFFF, a3, 63, v13);
  if ( v8 >= 0 )
  {
    v12 = a4;
    v10 = v13[0];
    sub_14052FFE0(a1, v13[0], v9, a2, v6, v12);
    *(_QWORD *)(a1 + 104) = v10;
  }
  return (unsigned int)v8;
}
