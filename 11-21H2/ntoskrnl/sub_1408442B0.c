/*
 * XREFs of sub_1408442B0 @ 0x1408442B0
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_14077503C @ 0x14077503C (sub_14077503C.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 * Callees:
 *     sub_14076BBF4 @ 0x14076BBF4 (sub_14076BBF4.c)
 *     sub_14076BD4C @ 0x14076BD4C (sub_14076BD4C.c)
 *     sub_1409426FC @ 0x1409426FC (sub_1409426FC.c)
 */

__int64 *__fastcall sub_1408442B0(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = sub_14076BBF4(a1);
  v2 = result;
  v3 = (__int64 *)*result;
  while ( v3 != v2 )
  {
    result = (__int64 *)sub_1409426FC(v3, &v4, 0LL);
    v3 = (__int64 *)*v3;
    if ( v4 )
      result = sub_14076BD4C(v4);
  }
  return result;
}
