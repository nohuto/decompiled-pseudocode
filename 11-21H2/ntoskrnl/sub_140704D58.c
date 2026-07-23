/*
 * XREFs of sub_140704D58 @ 0x140704D58
 * Callers:
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_1407049DC @ 0x1407049DC (sub_1407049DC.c)
 * Callees:
 *     sub_140294C0C @ 0x140294C0C (sub_140294C0C.c)
 *     sub_14029A240 @ 0x14029A240 (sub_14029A240.c)
 *     sub_140704E08 @ 0x140704E08 (sub_140704E08.c)
 */

__int64 __fastcall sub_140704D58(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v11 = 0;
  *(_QWORD *)(a3 + 24) = a1;
  v5 = sub_140704E08(332LL);
  v6 = v5;
  if ( !v5 )
    return 3221225485LL;
  sub_14029A240(v5, (int *)&v11, &v12);
  v7 = ~(v12 - 1LL) & (a1 + v12 + 3LL);
  v8 = v7 + v11 + 7LL;
  *(_QWORD *)a3 = v7;
  *(_QWORD *)(a3 + 8) = v8 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 16) = sub_140294C0C(v7, v6);
  *(_DWORD *)(a3 + 32) = v6;
  *(_QWORD *)(a3 + 40) = (v9 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_WORD *)(a3 + 36) = 332;
  return result;
}
