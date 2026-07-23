/*
 * XREFs of sub_1406515AC @ 0x1406515AC
 * Callers:
 *     IoVerifyPartitionTable @ 0x140930AE0 (IoVerifyPartitionTable.c)
 * Callees:
 *     sub_1406500D8 @ 0x1406500D8 (sub_1406500D8.c)
 */

__int64 __fastcall sub_1406515AC(__int64 a1, char a2)
{
  int v2; // r8d
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 256);
  result = 0LL;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = a1;
      return sub_1406500D8(&v4, a2);
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
