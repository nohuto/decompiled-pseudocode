/*
 * XREFs of sub_1800A0F9C @ 0x1800A0F9C
 * Callers:
 *     sub_18002BCA0 @ 0x18002BCA0 (sub_18002BCA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_1800A0E94 @ 0x1800A0E94 (sub_1800A0E94.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800A0F9C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // r9
  char v10; // di
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 192) = a3;
  if ( sub_180057460(a1 + 184) )
  {
    v7 = sub_18001246C(v12, v4);
    v10 = sub_1800A0E94(v9, v7, v8);
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 )
      sub_180010530(v11);
    return v10;
  }
  else
  {
    v5 = v4[1];
    if ( v5 )
      sub_180010530(v5);
    return 0;
  }
}
