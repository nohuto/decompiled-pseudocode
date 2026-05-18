/*
 * XREFs of sub_1800551D8 @ 0x1800551D8
 * Callers:
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180055440 @ 0x180055440 (sub_180055440.c)
 */

__int64 *__fastcall sub_1800551D8(__int64 *a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v8 = sub_18001C190();
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *a4;
    v12 = *a3;
    *a3 = 0LL;
    v9 = sub_180055440(v8, a2, &v12, v10);
  }
  *a1 = v9;
  return a1;
}
