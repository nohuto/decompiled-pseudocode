/*
 * XREFs of sub_14074B82C @ 0x14074B82C
 * Callers:
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_14074E130 @ 0x14074E130 (sub_14074E130.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AB2C @ 0x14035AB2C (sub_14035AB2C.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 */

__int64 __fastcall sub_14074B82C(__int64 a1)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r9
  _QWORD *v6; // rdi
  volatile signed __int64 *v7; // rsi
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  if ( *(_QWORD *)(a1 + 32) )
    return sub_14035AB2C((_QWORD *)a1, 0, 1, 0);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v3 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    sub_1402AFC00(v3);
    return sub_14035AD70(*(volatile signed __int32 **)(a1 + 248), 1LL, 1LL, v4, 0);
  }
  else
  {
    v6 = (_QWORD *)(a1 + 232);
    if ( (_QWORD *)*v6 == v6 )
      goto LABEL_21;
    v7 = (volatile signed __int64 *)(a1 + 224);
    ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
    v8 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = (volatile signed __int32 *)(v8 - 177);
      *(v8 - 1) = 0LL;
      v10 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)v8[1], (_QWORD *)*v11 != v8) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    sub_1402AFC00((ULONG_PTR)v7);
    if ( !v9 )
    {
LABEL_21:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      return sub_1402AFC00(a1 + 352);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      sub_1402AFC00(a1 + 352);
      return sub_14035AD70(v9 + 310, 1LL, 1LL, v5, 2);
    }
  }
}
