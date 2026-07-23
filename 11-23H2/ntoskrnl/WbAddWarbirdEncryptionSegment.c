/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x1407D2408
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x1407D26E0 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     sub_140763EF4 @ 0x140763EF4 (sub_140763EF4.c)
 *     sub_1407D2850 @ 0x1407D2850 (sub_1407D2850.c)
 *     sub_1407D2884 @ 0x1407D2884 (sub_1407D2884.c)
 *     sub_1407D2A78 @ 0x1407D2A78 (sub_1407D2A78.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  unsigned __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  int v13; // ebx
  char v14; // si
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  __int64 v18; // rdx
  int v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+4Ch] [rbp-14h]

  v3 = *(_DWORD *)(a2 + 24);
  v4 = (unsigned __int64 *)(a1 + 176);
  v23 = 0;
  v20 = 0LL;
  v19 = 0;
  v22 = v3;
  v21 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire(a1 + 176, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v9, (__int64)v4);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  v11 = sub_1407D2884(a1, &v21, &v20, &v19);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741198 )
    {
      v13 = sub_140763EF4(a1 + 136, a2, v12, (__int64)&v21, 0x10u, v19);
      if ( v13 >= 0 )
        v13 = sub_1407D2A78(a2);
    }
  }
  else if ( a3 )
  {
    sub_1407D2A78(v20);
    v20 = 0LL;
    *a3 = v18;
  }
  sub_1407D2850(v20);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v15 = KeGetCurrentThread();
  v16 = v15->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v13;
}
