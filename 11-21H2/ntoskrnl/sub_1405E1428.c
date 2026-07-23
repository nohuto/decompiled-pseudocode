/*
 * XREFs of sub_1405E1428 @ 0x1405E1428
 * Callers:
 *     sub_1405E0C00 @ 0x1405E0C00 (sub_1405E0C00.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 */

__int64 __fastcall sub_1405E1428(__int64 a1)
{
  signed __int64 *v1; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( *(_QWORD *)(a1 + 1288) )
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    sub_1402AFC00((ULONG_PTR)v1);
    v4 = *(_QWORD *)(a1 + 2416);
    v8 = sub_140287F30(a1);
    v5 = a1;
    v6 = v4 & 0x3FFFFFFF;
    v7 = (v4 >> 30) & 0x3FFFFFFF;
    return sub_1406F83A0(41LL, &v5, 1LL, &v8);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    sub_1402AFC00((ULONG_PTR)v1);
    return 0LL;
  }
}
