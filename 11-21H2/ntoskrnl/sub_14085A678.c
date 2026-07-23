/*
 * XREFs of sub_14085A678 @ 0x14085A678
 * Callers:
 *     sub_14085A568 @ 0x14085A568 (sub_14085A568.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 */

__int64 __fastcall sub_14085A678(__int64 a1)
{
  signed __int64 *v2; // rbx
  int v3; // esi
  char v5; // bp

  if ( *(_QWORD *)(a1 + 48) )
  {
    v2 = (signed __int64 *)(a1 + 56);
    ExAcquirePushLockSharedEx(a1 + 56, 0LL);
    if ( *(_BYTE *)(a1 + 64) )
    {
      v3 = 0;
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      sub_1402AFC00((ULONG_PTR)v2);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      sub_1402AFC00((ULONG_PTR)v2);
      v5 = 1;
      v3 = sub_14084BB98(*(struct _FILE_OBJECT **)(a1 + 48), 1);
      if ( v3 >= 0 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
        if ( !*(_BYTE *)(a1 + 64) )
        {
          *(_BYTE *)(a1 + 64) = 1;
          v5 = 0;
        }
        if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v2);
        sub_1402AFC00((ULONG_PTR)v2);
        v3 = 0;
        if ( v5 )
          sub_14084BB98(*(struct _FILE_OBJECT **)(a1 + 48), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
