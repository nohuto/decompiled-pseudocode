/*
 * XREFs of sub_14074DB0C @ 0x14074DB0C
 * Callers:
 *     sub_14074DA90 @ 0x14074DA90 (sub_14074DA90.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14074DC30 @ 0x14074DC30 (sub_14074DC30.c)
 *     sub_14074DD38 @ 0x14074DD38 (sub_14074DD38.c)
 *     sub_14074E130 @ 0x14074E130 (sub_14074E130.c)
 *     sub_1407F7C68 @ 0x1407F7C68 (sub_1407F7C68.c)
 */

__int64 __fastcall sub_14074DB0C(__int64 a1)
{
  volatile signed __int64 *v2; // rsi
  void *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 **v5; // r14
  volatile signed __int64 *v7; // rdi
  __int64 v8; // r9
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 **v11; // rax

  sub_14074E130((PVOID)a1);
  v2 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 360) )
    sub_1407F7C68(a1);
  v3 = *(void **)(a1 + 24);
  v4 = 0LL;
  if ( ((unsigned __int8)v3 & 1) == 0 )
    v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v3, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 352);
  sub_1402AFC00(a1 + 352);
  sub_14074DD38(a1);
  sub_14074DC30(a1);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v5 = (volatile signed __int32 **)(a1 + 232);
    if ( *v5 != (volatile signed __int32 *)v5 )
    {
      v7 = (volatile signed __int64 *)(a1 + 224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
      while ( 1 )
      {
        v9 = *v5;
        if ( *v5 == (volatile signed __int32 *)v5 )
          break;
        *((_QWORD *)v9 - 1) = 0LL;
        v10 = *(_QWORD *)v9;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9
          || (v11 = (volatile signed __int32 **)*((_QWORD *)v9 + 1), *v11 != v9) )
        {
          __fastfail(3u);
        }
        *v11 = (volatile signed __int32 *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        *(_QWORD *)v9 = 0LL;
        sub_14035AD70(v9 - 44, 1LL, 1LL, v8, 2);
      }
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      sub_1402AFC00((ULONG_PTR)v7);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return sub_1402AFC00((ULONG_PTR)v2);
}
