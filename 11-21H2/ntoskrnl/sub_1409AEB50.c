/*
 * XREFs of sub_1409AEB50 @ 0x1409AEB50
 * Callers:
 *     sub_1409AD870 @ 0x1409AD870 (sub_1409AD870.c)
 *     sub_1409AE968 @ 0x1409AE968 (sub_1409AE968.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140672BD8 @ 0x140672BD8 (sub_140672BD8.c)
 *     sub_1409AE810 @ 0x1409AE810 (sub_1409AE810.c)
 */

void __fastcall sub_1409AEB50(__int64 a1, ULONG_PTR a2, unsigned __int16 *a3)
{
  signed __int64 *v6; // rbx
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
  {
    v6 = (signed __int64 *)(a2 + 1080);
    v10 = 0;
    v7 = 0;
    ExAcquirePushLockSharedEx(a2 + 1080, 0LL);
    if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
      v7 = sub_1409AE810(a2, 2, a3, 0LL, &v10);
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    if ( v7 >= 0 )
    {
      if ( v10 )
        sub_140672BD8(a1, a2, v8, v9);
    }
  }
}
