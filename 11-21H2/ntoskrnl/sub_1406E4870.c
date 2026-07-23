/*
 * XREFs of sub_1406E4870 @ 0x1406E4870
 * Callers:
 *     sub_140987E44 @ 0x140987E44 (sub_140987E44.c)
 * Callees:
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 */

__int64 __fastcall sub_1406E4870(_QWORD *a1, int a2, __int64 a3)
{
  char v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  _QWORD v9[4]; // [rsp+48h] [rbp-20h] BYREF

  v9[0] = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(a3, (__int64)qword_140D06BB0, v6, 0LL, a2, 0LL, (__int64)v9);
  *a1 = v9[0];
  return result;
}
