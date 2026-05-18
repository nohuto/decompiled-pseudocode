/*
 * XREFs of sub_18007FC68 @ 0x18007FC68
 * Callers:
 *     sub_18007FCFC @ 0x18007FCFC (sub_18007FCFC.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

__int64 __fastcall sub_18007FC68(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 result; // rax
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 8) = 0LL;
  v1 = (_QWORD *)(a1 + 16);
  *(_BYTE *)a1 = 0;
  v7 = (__int64 *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v7 = (__int64 *)sub_180011088(0xF8uLL);
  sub_18001DE8C(v7, (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v3 + 8), (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v4 + 16), (__int64 *)&v7);
  *(_WORD *)(v5 + 24) = 257;
  result = a1;
  *v1 = v5;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  return result;
}
