/*
 * XREFs of sub_1406A2E40 @ 0x1406A2E40
 * Callers:
 *     sub_1406A293C @ 0x1406A293C (sub_1406A293C.c)
 *     sub_1406A2C44 @ 0x1406A2C44 (sub_1406A2C44.c)
 * Callees:
 *     sub_1406A2ECC @ 0x1406A2ECC (sub_1406A2ECC.c)
 *     sub_1406A2F6C @ 0x1406A2F6C (sub_1406A2F6C.c)
 */

__int64 __fastcall sub_1406A2E40(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  if ( !a1 || !a4 || a3 && !a2 )
    return 3221225485LL;
  *a4 = 0;
  result = sub_1406A2ECC(a1, &v10);
  if ( (int)result >= 0 )
  {
    v9 = v10;
    if ( a3 >= v10 )
      result = sub_1406A2F6C(a1, a2, a3);
    else
      result = 3221225507LL;
    *a4 = v9;
  }
  return result;
}
