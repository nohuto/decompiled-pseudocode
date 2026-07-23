/*
 * XREFs of sub_1407A4858 @ 0x1407A4858
 * Callers:
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1407A4914 @ 0x1407A4914 (sub_1407A4914.c)
 *     sub_140965B94 @ 0x140965B94 (sub_140965B94.c)
 */

__int64 __fastcall sub_1407A4858(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  signed __int64 *v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r14d
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v12 = a3;
  *a4 = 0LL;
  v4 = (signed __int64 *)(a2 + 352);
  v13 = 0LL;
  do
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)v4, 0LL);
    v10 = sub_1407A4914(a2, v8, v9, &v12);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    sub_1402AFC00((ULONG_PTR)v4);
  }
  while ( v10 == -1073741267 );
  if ( !v13 )
    return 3221225793LL;
  if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) != a1 )
  {
    sub_140965B94(v13);
    return 3221225793LL;
  }
  *a4 = v13;
  return 0LL;
}
