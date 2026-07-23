/*
 * XREFs of KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E0E0
 * Callers:
 *     <none>
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E73C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rdx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 **v8; // r8
  __int64 *v9; // rcx
  __int64 *v10; // rdi
  ULONG_PTR v11; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  char v13; // si
  _QWORD *v14; // rdi
  void (__fastcall *v15)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v16; // r12
  unsigned int *v17; // rbx
  unsigned __int64 v18; // rdi
  int v19; // ebp
  unsigned __int8 v20; // si
  __int64 (__fastcall *v21)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v22; // eax
  __int64 (__fastcall *v23)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v24; // eax
  __int64 (__fastcall *v25)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-338h] BYREF
  _DWORD v28[2]; // [rsp+30h] [rbp-308h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-300h] BYREF
  int v30; // [rsp+3Ch] [rbp-2FCh]
  _QWORD *v31; // [rsp+40h] [rbp-2F8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-2F0h] BYREF
  int v33; // [rsp+58h] [rbp-2E0h]
  int v34; // [rsp+60h] [rbp-2D8h] BYREF
  __int128 v35; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v36; // [rsp+78h] [rbp-2C0h]
  int v37; // [rsp+80h] [rbp-2B8h] BYREF
  int v38; // [rsp+84h] [rbp-2B4h]
  _DWORD v39[2]; // [rsp+88h] [rbp-2B0h] BYREF
  _DWORD v40[2]; // [rsp+90h] [rbp-2A8h] BYREF
  _DWORD v41[2]; // [rsp+98h] [rbp-2A0h] BYREF
  _DWORD v42[2]; // [rsp+A0h] [rbp-298h] BYREF
  _DWORD v43[2]; // [rsp+A8h] [rbp-290h] BYREF
  int v44; // [rsp+B0h] [rbp-288h] BYREF
  __int128 v45; // [rsp+B4h] [rbp-284h]
  __int128 v46; // [rsp+C8h] [rbp-270h] BYREF
  _QWORD v47[34]; // [rsp+E0h] [rbp-258h] BYREF
  _QWORD v48[34]; // [rsp+1F0h] [rbp-148h] BYREF
  int v49; // [rsp+330h] [rbp-8h]

  v4 = 0LL;
  KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
  v5 = (__int64 **)KiUpdateVpThreadPriorityListHead;
  if ( (__int64 *)KiUpdateVpThreadPriorityListHead != &KiUpdateVpThreadPriorityListHead )
  {
    do
    {
      v6 = *v5;
      v7 = v5;
      v5 = (__int64 **)v6;
      v8 = (__int64 **)v7[1];
      if ( (__int64 **)v6[1] != v7 || *v8 != (__int64 *)v7 )
        __fastfail(3u);
      *v8 = v6;
      v6[1] = (__int64)v8;
      *v7 = v4;
      v4 = (__int64 *)v7;
      v7[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v7 - 70, 1u);
    }
    while ( v6 != &KiUpdateVpThreadPriorityListHead );
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
  v31 = 0LL;
  while ( v4 )
  {
    v9 = v4;
    v10 = v4;
    v4 = (__int64 *)*v4;
    v11 = (ULONG_PTR)(v10 - 126);
    *v9 = 1LL;
    _InterlockedOr(v27, 0);
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(_QWORD *)(v11 + 64) );
    }
    if ( (*(_DWORD *)(v11 + 120) & 0x400000) != 0 )
      KiUpdateVpBackingThreadPriorityFromTopLevel(v11);
    *(_QWORD *)(v11 + 64) = 0LL;
    _InterlockedDecrement16((volatile signed __int16 *)(v11 + 868));
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  v14 = v31;
  if ( v31 )
  {
    v31 = (_QWORD *)*v31;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v14 - 27), (__int64)&v31);
      v14 = v31;
      ++v13;
      if ( v31 )
        v31 = (_QWORD *)*v31;
      if ( (v13 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    }
    while ( v14 );
  }
  KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
  {
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
      return;
    }
    memset(&v47[1], 0, 0x100uLL);
    v45 = 0LL;
    if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
    {
      ProcNumber = (_PROCESSOR_NUMBER)-1;
      v44 = 3;
      v30 = 1;
      v28[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v28[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v15 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
      _disable();
      v15(*(_QWORD *)(HalpInterruptController + 16), v28, &v44, 47LL, &ProcNumber);
      if ( (v49 & 0x200) != 0 )
        _enable();
      return;
    }
    LODWORD(v47[0]) = 2097153;
    memset((char *)v47 + 4, 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v47, KeGetPcr()->Prcb.Number);
    v28[0] = 0;
    v36 = 0LL;
    v46 = 0LL;
    v35 = 0LL;
    memset(&v48[1], 0, 0x100uLL);
    v33 = 0;
    v32 = 0LL;
    if ( qword_140C62628 )
    {
      qword_140C62628(v47, 47LL);
      return;
    }
    LODWORD(v48[0]) = 2097153;
    memset((char *)v48 + 4, 0, 0x104uLL);
    KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v47, v48, 0x20u);
    v16 = v49;
    if ( HalpInterruptClusterModeEnabled )
    {
      v17 = (unsigned int *)HalpInterruptClusterData;
      ProcNumber = 0;
      while ( (unsigned __int64)v17 < HalpInterruptClusterDataEnd )
      {
        if ( (unsigned int)KeAndGroupAffinityEx(v47, (__int64)(v17 + 2), (char *)&v46) )
        {
          v18 = v46;
          v19 = 0;
          LODWORD(v32) = 6;
          v20 = 0;
          *((_QWORD *)&v32 + 1) = *v17;
          ProcNumber.Group = WORD4(v46);
          for ( ProcNumber.Number = 0; v18; ProcNumber.Number = v20 )
          {
            if ( (v18 & 1) != 0 )
            {
              v28[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
              v19 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v28[0] + 12);
              HIDWORD(v32) = v19;
            }
            ++v20;
            v18 >>= 1;
          }
          v37 = -1;
          v38 = 1;
          v39[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v39[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v21 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
          _disable();
          v22 = v21(*(_QWORD *)(HalpInterruptController + 16), v39, &v32, (unsigned int)(v38 + 46), &v37);
          if ( (v16 & 0x200) != 0 )
            _enable();
          if ( v22 < 0 )
            return;
        }
        v17 += 6;
      }
      goto LABEL_54;
    }
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_54;
    *((_QWORD *)&v35 + 1) = v47[1];
    *(_QWORD *)&v35 = v47;
    LODWORD(v32) = 5;
    DWORD2(v32) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(v28, (unsigned __int16 **)&v35) )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v28[0]) == 5 )
        DWORD2(v32) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v28[0] + 8);
    }
    if ( !DWORD2(v32) )
      goto LABEL_54;
    v40[0] = -1;
    v40[1] = 1;
    v41[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v41[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v23 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
    _disable();
    v24 = v23(*(_QWORD *)(HalpInterruptController + 16), v41, &v32, 47LL, v40);
    if ( (v16 & 0x200) != 0 )
      _enable();
    if ( v24 >= 0 )
    {
LABEL_54:
      *((_QWORD *)&v35 + 1) = v48[1];
      *(_QWORD *)&v35 = v48;
      v28[0] = 0;
      LOWORD(v36) = 0;
      do
      {
        if ( (unsigned int)KeEnumerateNextProcessor(v28, (unsigned __int16 **)&v35) )
          break;
        v42[0] = -1;
        LODWORD(v32) = 4;
        v42[1] = 1;
        DWORD2(v32) = *(_DWORD *)(HalpInterruptTargets + 24LL * v28[0] + 8);
        v43[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v43[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v25 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v26 = v25(*(_QWORD *)(HalpInterruptController + 16), v43, &v32, 47LL, v42);
        if ( (v16 & 0x200) != 0 )
          _enable();
      }
      while ( v26 >= 0 );
    }
  }
}
