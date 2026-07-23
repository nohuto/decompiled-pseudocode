/*
 * XREFs of sub_14076ACA8 @ 0x14076ACA8
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_14076AC70 @ 0x14076AC70 (sub_14076AC70.c)
 * Callees:
 *     sub_14076BBF4 @ 0x14076BBF4 (sub_14076BBF4.c)
 *     sub_1409426FC @ 0x1409426FC (sub_1409426FC.c)
 *     sub_1409428B8 @ 0x1409428B8 (sub_1409428B8.c)
 */

_QWORD **__fastcall sub_14076ACA8(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD **result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  Object = 0LL;
  result = (_QWORD **)sub_14076BBF4(v1);
  v3 = result;
  v4 = *result;
  while ( v4 != v3 )
  {
    result = (_QWORD **)sub_1409426FC(v4, &Object, &v5);
    v4 = (_QWORD *)*v4;
    if ( Object )
      result = (_QWORD **)sub_1409428B8(Object);
  }
  return result;
}
