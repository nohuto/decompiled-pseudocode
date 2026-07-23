/*
 * XREFs of sub_140927048 @ 0x140927048
 * Callers:
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406924F0 @ 0x1406924F0 (sub_1406924F0.c)
 */

__int64 __fastcall sub_140927048(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  int v4; // esi
  volatile signed __int64 *v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edi
  char v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  --*((_WORD *)CurrentThread + 242);
  v6 = (volatile signed __int64 *)(a2 + 16);
  ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
  v7 = sub_1406924F0(v4, (int)v3 + 16, (int)&v10);
  v8 = 0;
  if ( v7 )
  {
    if ( *(int *)(v7 + 56) < 0 )
    {
      *(_QWORD *)(a1 + 16) = v7;
    }
    else
    {
      v8 = -1073741790;
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      sub_1402AFC00((ULONG_PTR)v6);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
    return v8;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
