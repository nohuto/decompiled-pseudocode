/*
 * XREFs of MiCopyLargeVad @ 0x140A495FC
 * Callers:
 *     MiMapChildLargePageVads @ 0x140A4952C (MiMapChildLargePageVads.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     MiLocateLockedVadEvent @ 0x14030B6B4 (MiLocateLockedVadEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 */

__int64 __fastcall MiCopyLargeVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 VadEvent; // rax
  __int64 v7; // r8
  _KPROCESS *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // edi
  int v13; // r12d
  int v14; // r13d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  size_t v19; // rdi
  void *v20; // rcx
  struct _MDL *v21; // r15
  void *v22; // [rsp+30h] [rbp-39h] BYREF
  PVOID v23; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  $115DCDF994C6370D29323EAB0E0C9502 v27; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  memset(&v27, 0, sizeof(v27));
  MiLocateLockedVadEvent(a3, 16);
  VadEvent = MiLocateVadEvent(a2, v5);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(VadEvent + 8);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(VadEvent + 16);
  }
  KiStackAttachProcess(v8, 0, (__int64)&v27);
  v9 = KeAbPreAcquire(a3 + 40, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 40), v9, a3 + 40);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  v11 = MiMapUserLargePages(a3, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 40));
  KeAbPostRelease(a3 + 40);
  KiUnstackDetachProcess(&v27);
  if ( v11 < 0 )
    return (unsigned int)v11;
  v13 = 0;
  v14 = *(_DWORD *)(a3 + 48) & 0x200;
  v15 = 4292870144LL;
  v16 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v17 = v16 << 12;
  v18 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v16 + 1) << 12;
  while ( v18 )
  {
    v19 = v15;
    if ( v18 <= v15 )
      v19 = v18;
    v13 = ExLockUserBuffer(v17, v19, 1, IoReadAccess, &Src, (struct _MDL **)&P);
    if ( v13 < 0 )
      goto LABEL_15;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v27);
    v20 = (void *)v17;
    if ( v14 )
    {
      v21 = 0LL;
      v22 = (void *)v17;
      v23 = 0LL;
    }
    else
    {
      v13 = ExLockUserBuffer(v17, v19, 1, IoWriteAccess, &v22, (struct _MDL **)&v23);
      if ( v13 < 0 )
      {
        KiUnstackDetachProcess(&v27);
        ExUnlockUserBuffer((struct _MDL *)P);
LABEL_15:
        v15 = (v19 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v15 < 0x200000 )
          return (unsigned int)v13;
        continue;
      }
      v21 = (struct _MDL *)v23;
      v20 = v22;
    }
    memmove(v20, Src, v19);
    if ( !v14 )
      ExUnlockUserBuffer(v21);
    KiUnstackDetachProcess(&v27);
    ExUnlockUserBuffer((struct _MDL *)P);
    v18 -= v19;
    v17 += v19;
  }
  return (unsigned int)v13;
}
