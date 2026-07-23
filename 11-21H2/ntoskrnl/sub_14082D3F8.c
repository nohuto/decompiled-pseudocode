/*
 * XREFs of sub_14082D3F8 @ 0x14082D3F8
 * Callers:
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ntoskrnl_25 @ 0x1403C54B0 (ntoskrnl_25.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ntoskrnl_20 @ 0x1406A71F0 (ntoskrnl_20.c)
 *     sub_14082D70C @ 0x14082D70C (sub_14082D70C.c)
 *     sub_14082E084 @ 0x14082E084 (sub_14082E084.c)
 *     ntoskrnl_24 @ 0x1409F9AA0 (ntoskrnl_24.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B0E114 @ 0x140B0E114 (sub_140B0E114.c)
 */

char sub_14082D3F8()
{
  _QWORD *v0; // rdi
  char v1; // r12
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rbx
  char v5; // al
  struct _KTHREAD *v6; // rax
  char v7; // al
  LARGE_INTEGER v8; // rax
  struct _KTHREAD *v9; // rax
  int v10; // r15d
  char v11; // r14
  char v12; // al
  __int64 v13; // rdx
  __int128 *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  struct _KTHREAD *v17; // rax
  char v18; // al
  struct _KTHREAD *v19; // rax
  __int64 v20; // rax
  char v21; // si
  int v22; // ecx
  unsigned int v23; // eax
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v26[5]; // [rsp+28h] [rbp-48h] BYREF
  char v27; // [rsp+50h] [rbp-20h]
  int v28; // [rsp+51h] [rbp-1Fh]
  __int16 v29; // [rsp+55h] [rbp-1Bh]
  char v30; // [rsp+57h] [rbp-19h]
  __int128 v31; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  v0 = (_QWORD *)*((_QWORD *)sub_140347DB0() + 113);
  v1 = *((_BYTE *)v0 + 46992);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ntoskrnl_25();
    sub_140B0E114();
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = v0 + 5855;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  memset(v26, 0, 32);
  v26[4] = 10800LL;
  v27 = 1;
  if ( (_DWORD)InitSafeBootMode || byte_140C4E508 )
    v27 = 0;
  ntoskrnl_20((__int64)v0, (__int64)v26, -1, 1);
  v5 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(v0 + 5855);
  sub_1402AFC00((ULONG_PTR)(v0 + 5855));
  sub_1402F9540((__int64)KeGetCurrentThread());
  v6 = KeGetCurrentThread();
  --*((_WORD *)v6 + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
  *((_DWORD *)v0 + 2) = 0;
  v7 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v0 + 5855);
  sub_1402AFC00((ULONG_PTR)(v0 + 5855));
  LOBYTE(v8.LowPart) = sub_1402F9540((__int64)KeGetCurrentThread());
  if ( *v0 )
  {
    v9 = KeGetCurrentThread();
    --*((_WORD *)v9 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    v10 = sub_14082E084(v0);
    if ( v10 == -1073741762 )
    {
      *((_BYTE *)v0 + 46992) = 1;
      v11 = 1;
    }
    else
    {
      v11 = *((_BYTE *)v0 + 46992);
    }
    v12 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 5855);
    sub_1402AFC00((ULONG_PTR)(v0 + 5855));
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( !v1 && v11 )
      ntoskrnl_24(&stru_140039080);
    if ( v10 >= 0 && !v11 )
    {
      v13 = *(unsigned int *)(*v0 + 81920LL);
      if ( qword_140D3B4D0 )
        sub_14042A5E0(v0, v13);
      else
        sub_1409FA6E0(v0, v13, *v0);
    }
    v14 = &v31;
    v15 = 16LL;
    do
    {
      v16 = __rdtsc();
      *(_BYTE *)v14 = v16;
      v14 = (__int128 *)((char *)v14 + 1);
      --v15;
    }
    while ( v15 );
    v17 = KeGetCurrentThread();
    --*((_WORD *)v17 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    *(_OWORD *)((char *)v0 + 46993) = v31;
    v18 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 5855);
    sub_1402AFC00((ULONG_PTR)(v0 + 5855));
    sub_1402F9540((__int64)KeGetCurrentThread());
    v19 = KeGetCurrentThread();
    --*((_WORD *)v19 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    v20 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v20) && *v0 )
      ExFreePoolWithTag((PVOID)*v0, 0x69534C53u);
    *v0 = 0LL;
    if ( !v0[5854] )
    {
      v23 = *((_DWORD *)v0 + 11706);
      if ( v23 )
      {
        memset(v0 + 3, 0, 16LL * v23);
        *((_DWORD *)v0 + 11706) = 0;
      }
    }
    v21 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 5855);
    sub_1402AFC00((ULONG_PTR)(v0 + 5855));
    LOBYTE(v8.LowPart) = sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( !byte_140C0DD10 )
  {
    v22 = sub_14082D70C(&Time);
    v8 = Time;
    if ( v22 < 0 )
      v8.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = v8.QuadPart;
  }
  return v8.LowPart;
}
