/*
 * XREFs of sub_1409FE350 @ 0x1409FE350
 * Callers:
 *     sub_140A01A20 @ 0x140A01A20 (sub_140A01A20.c)
 * Callees:
 *     sub_1409FB95C @ 0x1409FB95C (sub_1409FB95C.c)
 *     sub_1409FBB20 @ 0x1409FBB20 (sub_1409FBB20.c)
 *     sub_1409FCDF8 @ 0x1409FCDF8 (sub_1409FCDF8.c)
 */

__int64 __fastcall sub_1409FE350(__int64 a1, unsigned int a2, void *a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *v11; // [rsp+38h] [rbp-18h] BYREF
  wchar_t *v12; // [rsp+40h] [rbp-10h] BYREF
  char v13; // [rsp+70h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v10 = 0;
  v13 = 0;
  result = sub_1409FCDF8((_WORD *)(a1 + 12), &v12, &v11, &v10, &v13);
  if ( (int)result >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( !v13 )
    {
      if ( v9 == 1 )
        return sub_1409FB95C(a2, (__int64)a3, a4, v12, v11, v10);
      return 3221225485LL;
    }
    if ( v9 != 2 )
      return 3221225485LL;
    return sub_1409FBB20(a2, a3, a4, v12, v11);
  }
  return result;
}
