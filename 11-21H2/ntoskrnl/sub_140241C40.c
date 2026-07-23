/*
 * XREFs of sub_140241C40 @ 0x140241C40
 * Callers:
 *     sub_1406BC9D0 @ 0x1406BC9D0 (sub_1406BC9D0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

LONG_PTR sub_140241C40()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx
  __int64 v3; // rax
  char v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  signed __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v4 = 0;
  v0 = sub_1407B3B60(KeGetCurrentThread(), 1953654867LL, &v6, &v4, &v5, 0LL);
  v1 = (_QWORD *)v0;
  if ( (*(_DWORD *)(v0 + 200) & 0x4000) != 0 && !*(_QWORD *)(*(_QWORD *)(v0 + 1080) + 48LL) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1296LL);
    if ( !v3 || (*(_DWORD *)(v3 + 544) & 0x20) == 0 )
    {
      sub_1406F83A0(2LL, &v7, 0LL, 0LL);
      if ( v7 && !_InterlockedCompareExchange64((volatile signed __int64 *)(v1[135] + 48LL), v7, 0LL) )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 4));
    }
  }
  return ObfDereferenceObjectWithTag(v1, 0x74726853u);
}
