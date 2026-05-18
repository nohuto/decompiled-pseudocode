/*
 * XREFs of sub_1800B3504 @ 0x1800B3504
 * Callers:
 *     sub_1800B35C8 @ 0x1800B35C8 (sub_1800B35C8.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B33A4 @ 0x1800B33A4 (sub_1800B33A4.c)
 *     sub_1800B60F8 @ 0x1800B60F8 (sub_1800B60F8.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800B3504(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14[4]; // [rsp+40h] [rbp-20h] BYREF

  sub_18002C84C(a1);
  sub_1800B33A4(a1, (__int64)v11, a2);
  if ( v11[0] )
  {
    v7 = *(_QWORD *)(a1 + 16 * v12 + 64);
    v13 = 0LL;
    v8 = a4[1];
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = a4[1];
    }
    *(_QWORD *)&v13 = *a4;
    *((_QWORD *)&v13 + 1) = v8;
    v9 = sub_18001875C(v14, (__int64)&qword_1801F6818);
    sub_1800B60F8(v7, v9, &v13);
    j_LanguageEnumProc(a1);
    return 1;
  }
  else
  {
    j_LanguageEnumProc(a1);
    return 0;
  }
}
