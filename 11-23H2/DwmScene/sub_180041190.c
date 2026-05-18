/*
 * XREFs of sub_180041190 @ 0x180041190
 * Callers:
 *     sub_1800403BC @ 0x1800403BC (sub_1800403BC.c)
 *     sub_180041274 @ 0x180041274 (sub_180041274.c)
 *     sub_180041570 @ 0x180041570 (sub_180041570.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18003C2A8 @ 0x18003C2A8 (sub_18003C2A8.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180041190(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  bool v9; // bp
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = (__int64)a3;
  sub_18002A37C(a1 + 16);
  sub_18003C2A8(*a3, &v12);
  v6 = **(_QWORD **)(a1 + 88);
  v16 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = (_QWORD *)(v6 + 64);
    v8 = (_QWORD *)sub_180041410(*(_QWORD *)(v6 + 64), v14);
    v9 = sub_180015678(v8, &v12);
    if ( v15 )
      sub_180010530(v15);
    if ( v9 )
    {
      sub_18001246C(a2, v7);
      goto LABEL_9;
    }
    sub_18001D3F8(&v16);
    v6 = v16;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_9:
  if ( v13 )
    sub_180010530(v13);
  v10 = a3[1];
  if ( v10 )
    sub_180010530(v10);
  return a2;
}
