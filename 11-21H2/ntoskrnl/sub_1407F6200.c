/*
 * XREFs of sub_1407F6200 @ 0x1407F6200
 * Callers:
 *     sub_140690CFC @ 0x140690CFC (sub_140690CFC.c)
 *     sub_1407F612C @ 0x1407F612C (sub_1407F612C.c)
 *     sub_1409269C4 @ 0x1409269C4 (sub_1409269C4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey @ 0x14041F1C0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14041F1E0 (ZwUnloadKey2.c)
 *     sub_140691330 @ 0x140691330 (sub_140691330.c)
 *     sub_1406913B4 @ 0x1406913B4 (sub_1406913B4.c)
 *     sub_1406913F4 @ 0x1406913F4 (sub_1406913F4.c)
 *     sub_1406915F0 @ 0x1406915F0 (sub_1406915F0.c)
 *     sub_1407F63D0 @ 0x1407F63D0 (sub_1407F63D0.c)
 */

__int64 __fastcall sub_1407F6200(UNICODE_STRING *String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  struct _KTHREAD *v5; // rax
  volatile signed __int64 *v6; // rdi
  char v7; // al
  char v8; // r14
  char v9; // cl
  NTSTATUS v10; // esi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // bp
  signed __int64 v17; // rax
  unsigned __int64 i; // rdx
  signed __int64 v19; // rtt
  OBJECT_ATTRIBUTES TargetKey; // [rsp+20h] [rbp-48h] BYREF

  memset(&TargetKey, 0, 44);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  v3 = sub_1406915F0(String1);
  v4 = v3;
  if ( v3 && _InterlockedIncrement64((volatile signed __int64 *)(v3 + 16)) <= 1 )
    __fastfail(0xEu);
  ExReleasePushLockEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    v5 = KeGetCurrentThread();
    --*((_WORD *)v5 + 242);
    v6 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    if ( (unsigned __int8)sub_1407F63D0(v4) )
    {
      v7 = sub_1406913F4(v4);
      *(_DWORD *)(v4 + 56) &= ~1u;
      v8 = v7;
      v9 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock(v4 + 24);
      sub_1402AFC00(v4 + 24);
      sub_1402F9540((__int64)KeGetCurrentThread());
      TargetKey.RootDirectory = 0LL;
      TargetKey.Length = 48;
      *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
      TargetKey.Attributes = 576;
      TargetKey.ObjectName = String1;
      v10 = ZwUnloadKey(&TargetKey);
      if ( v10 < 0 )
        v10 = ZwUnloadKey2(&TargetKey, 1u);
      v11 = KeGetCurrentThread();
      --*((_WORD *)v11 + 242);
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v10 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v17 = *(_QWORD *)(v4 + 16);
          for ( i = v17 + 1; ; i = v17 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v19 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), i, v17);
            v12 = v17;
            if ( v19 == v17 )
              break;
          }
        }
      }
      if ( v8 )
        sub_1406913B4(v4, v12, v13, v14);
    }
    else
    {
      v10 = 0;
    }
    v15 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock(v4 + 24);
    sub_1402AFC00(v4 + 24);
    sub_1402F9540((__int64)KeGetCurrentThread());
    sub_140691330((_QWORD *)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v10;
}
