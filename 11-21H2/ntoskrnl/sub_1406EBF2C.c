/*
 * XREFs of sub_1406EBF2C @ 0x1406EBF2C
 * Callers:
 *     sub_1406EBDB0 @ 0x1406EBDB0 (sub_1406EBDB0.c)
 *     sub_1407F575C @ 0x1407F575C (sub_1407F575C.c)
 *     sub_1407F584C @ 0x1407F584C (sub_1407F584C.c)
 * Callees:
 *     sub_14025E94C @ 0x14025E94C (sub_14025E94C.c)
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 */

__int64 __fastcall sub_1406EBF2C(int a1)
{
  __int64 v2; // rax
  _DWORD **v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  v2 = sub_1402A1124((ULONG_PTR)&qword_140D321C8, &v7, 0LL, 0);
  if ( !v2 )
    return 3221226021LL;
  v3 = (_DWORD **)sub_14035F5E8((__int64)&unk_140D31A00, *(_WORD *)(v2 + 16) & 0x3FF);
  v5 = 2;
  if ( a1 != 2 )
    v5 = a1 != 0;
  return sub_14025E94C(v4, *v3, v5);
}
