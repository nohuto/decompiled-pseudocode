/*
 * XREFs of sub_1800719CC @ 0x1800719CC
 * Callers:
 *     sub_180071A9C @ 0x180071A9C (sub_180071A9C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18007189C @ 0x18007189C (sub_18007189C.c)
 */

// Hidden C++ exception states: #wind=1
signed __int64 __fastcall sub_1800719CC(__int64 *a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  signed __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = (__int64 *)(a2 - 16);
    v7 = -8LL - (_QWORD)a1;
    v8 = 16LL - (_QWORD)a1;
    do
    {
      v9 = *v6;
      v10 = v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      sub_180011020(v6, a1);
      sub_18007189C((__int64)a1, 0LL, ((__int64)v6 + v7 + 8) >> 4, &v9, a3);
      if ( v10 )
        sub_180010530(v10);
      v6 -= 2;
      result = ((unsigned __int64)v6 + v8) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
