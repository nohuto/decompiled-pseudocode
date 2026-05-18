/*
 * XREFs of sub_180044B58 @ 0x180044B58
 * Callers:
 *     sub_180044B2C @ 0x180044B2C (sub_180044B2C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180043604 @ 0x180043604 (sub_180043604.c)
 *     sub_180044480 @ 0x180044480 (sub_180044480.c)
 */

bool __fastcall sub_180044B58(__int64 a1, __int16 a2)
{
  _QWORD *v3; // rax
  bool v4; // di
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int16 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (_QWORD *)sub_180044480(a1, (__int64)v7);
  v4 = sub_180011DE0(v3);
  if ( v8 )
    sub_180010530(v8);
  if ( v4 )
    return 1;
  v6 = sub_180043604(a1 + 200, (__int64)&v9);
  return v6 != *(_QWORD *)(a1 + 200) && (unsigned int)(*(_DWORD *)(v6 + 32) - 1) <= 1;
}
