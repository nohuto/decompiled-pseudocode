/*
 * XREFs of sub_14083DE38 @ 0x14083DE38
 * Callers:
 *     sub_14083DD34 @ 0x14083DD34 (sub_14083DD34.c)
 * Callees:
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14083E0F8 @ 0x14083E0F8 (sub_14083E0F8.c)
 */

__int64 __fastcall sub_14083DE38(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v9; // ebx
  __int64 result; // rax
  int v11; // r8d
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v9 = a1;
  result = sub_14078014C(a1, 10, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    v13[0] = a2;
    v13[1] = a3;
    return sub_14083E0F8(v9, v12, v11, (unsigned int)v13, a4, a5, a6);
  }
  return result;
}
