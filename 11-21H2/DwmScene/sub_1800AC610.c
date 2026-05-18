/*
 * XREFs of sub_1800AC610 @ 0x1800AC610
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180095FA0 @ 0x180095FA0 (sub_180095FA0.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800AC610(__int64 a1, __int64 a2, float a3, float a4, float a5, int a6)
{
  _UNKNOWN **result; // rax
  __int64 v7; // rbx
  __int64 i; // rdi
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-48h]
  _QWORD *v11[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *(_QWORD *)(a1 + 128);
  for ( i = *(_QWORD *)(a1 + 136); v7 != i; v7 += 16LL )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(v7 + 8);
    }
    v11[0] = *(_QWORD **)v7;
    v11[1] = (_QWORD *)v9;
    sub_180095FA0(v11[0], a3, a4, a5, v10, a6);
    result = (_UNKNOWN **)sub_180010910((__int64)v11);
  }
  return result;
}
