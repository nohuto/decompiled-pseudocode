/*
 * XREFs of sub_1405BBA5C @ 0x1405BBA5C
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 */

__int64 __fastcall sub_1405BBA5C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 v10; // rdi
  _BYTE *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = sub_140287F30(a1);
  v8 = sub_140287F30(a2);
  if ( v7 == v8 )
    return 0LL;
  v15[0] = *(_QWORD *)(a4 + 72);
  v9 = *(_QWORD *)v15[0];
  if ( (*(_DWORD *)(*(_QWORD *)v15[0] + 56LL) & 0x8000000) == 0 )
    return 0LL;
  v10 = sub_140319600(a4, (unsigned __int64)(a3 << 25 >> 16) >> 12, 0, v15);
  if ( !v10 )
    return 0LL;
  v11 = (_BYTE *)v15[0];
  if ( (*(_BYTE *)(v15[0] + 34) & 2) == 0 )
    return 0LL;
  v12 = (v10 - *(_QWORD *)(sub_140256DF8(v9, v7, v15[0]) + 72)) >> 3;
  v13 = sub_140256DF8(v9, v8, (__int64)v11);
  return sub_1402CCC50(((*(_QWORD *)(v13 + 72) + 8 * v12) << 16) | 0x400);
}
