/*
 * XREFs of sub_1800B072C @ 0x1800B072C
 * Callers:
 *     sub_18003DB18 @ 0x18003DB18 (sub_18003DB18.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B072C(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a3;
  v7 = a3;
  v8 = a2[1];
  v9 = 2 * v7;
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a2[1];
  }
  v12[0] = *(_QWORD *)(a1 + 8 * v9 + 8);
  *(_QWORD *)(a1 + 8 * v9 + 8) = *a2;
  v10 = *(_QWORD *)(a1 + 8 * v9 + 16);
  *(_QWORD *)(a1 + 8 * v9 + 16) = v8;
  v12[1] = v10;
  sub_180010910((__int64)v12);
  *(_DWORD *)(a1 + 4 * v6 + 728) = 0;
  result = a5;
  *(_DWORD *)(a1 + 4 * v6 + 908) = a5;
  return result;
}
