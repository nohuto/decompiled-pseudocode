/*
 * XREFs of sub_140528FC0 @ 0x140528FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 */

__int64 __fastcall sub_140528FC0(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v4; // rax
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( *(int *)(*a1 + 24LL) <= 0 )
    return 3221225485LL;
  v4 = a1[2];
  v5 = a1[1] + *(_QWORD *)v1;
  v6 = *(_QWORD *)(v1 + 16);
  v7 = v4;
  result = sub_14051AD44(v6, v5, &v7, 1);
  if ( (int)result >= 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 24));
    a1[2] = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
