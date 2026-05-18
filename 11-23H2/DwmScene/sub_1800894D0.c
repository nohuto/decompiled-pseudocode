/*
 * XREFs of sub_1800894D0 @ 0x1800894D0
 * Callers:
 *     sub_180047A20 @ 0x180047A20 (sub_180047A20.c)
 * Callees:
 *     sub_18008880C @ 0x18008880C (sub_18008880C.c)
 *     sub_180089084 @ 0x180089084 (sub_180089084.c)
 *     sub_18008937C @ 0x18008937C (sub_18008937C.c)
 *     sub_1800895A0 @ 0x1800895A0 (sub_1800895A0.c)
 */

_QWORD *__fastcall sub_1800894D0(_QWORD *a1, int a2)
{
  __int64 *v3; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+44h] [rbp-14h] BYREF
  __int64 v7[2]; // [rsp+48h] [rbp-10h] BYREF
  _QWORD *v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF
  int v10; // [rsp+80h] [rbp+28h] BYREF
  int v11; // [rsp+88h] [rbp+30h] BYREF

  v9 = a2;
  v8 = a1;
  sub_18008880C(a1, 11, 5);
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  LODWORD(v8) = 0;
  v10 = 0;
  v11 = 0;
  v5 = 0;
  v6 = 0;
  v3 = sub_18008937C(v7, &v6, &v5, &v11, &v10, &v8, &v9);
  sub_180089084(a1 + 14, v3);
  sub_1800895A0(v7);
  return a1;
}
