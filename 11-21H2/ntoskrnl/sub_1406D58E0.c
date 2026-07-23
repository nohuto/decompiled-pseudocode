/*
 * XREFs of sub_1406D58E0 @ 0x1406D58E0
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14085ED9C @ 0x14085ED9C (sub_14085ED9C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406D59B8 @ 0x1406D59B8 (sub_1406D59B8.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_1406D58E0(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  if ( byte_140C097BC == 2 )
  {
    v2 = *(_DWORD *)(a1 + 4752);
    if ( v2 || (v2 = *(_DWORD *)(a1 + 4756)) != 0 )
    {
      sub_140AB4370();
      ExAcquirePushLockSharedEx(a1 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
      *(_DWORD *)(a1 + 4760) = *(_DWORD *)(a1 + 280);
      *(_DWORD *)(a1 + 4756) = v2;
      sub_1406D59B8(a1, v2);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 80);
      sub_1402AFC00(a1 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      sub_1402AFC00(a1 + 72);
      return sub_140AB4260(v4, v3, v5, v6);
    }
  }
  return result;
}
