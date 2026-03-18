/*
 * XREFs of PspSetContextThreadInternal @ 0x1407705F0
 * Callers:
 *     WbSetTrapFrame @ 0x140763048 (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1407701FC (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1407A0458 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x1409B3EC0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1409B3FF0 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x1409B5B90 (PspPicoSetContextThreadEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     IoThreadToProcess @ 0x140289F80 (IoThreadToProcess.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x1402BE6D0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC640 (KeInsertQueueApc.c)
 *     RtlInitializeExtendedContext @ 0x14030D3B0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D430 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x14030D73C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x14030DD74 (KeVerifyContextRecord.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140428CA0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140429B10 (_alloca_probe.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlpReadExtendedContext @ 0x14076FEE0 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1407A2E7C (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  char v11; // di
  __int64 v12; // rcx
  bool v13; // zf
  int Blink_high; // ebx
  struct _KPROCESS *v15; // rbx
  int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // edi
  unsigned __int64 v19; // rax
  void *v20; // rsp
  __int64 v21; // rcx
  struct _KEVENT *v22; // [rsp+20h] [rbp-20h]
  unsigned int v23; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v24; // [rsp+44h] [rbp+4h] BYREF
  __int64 v25; // [rsp+48h] [rbp+8h] BYREF
  struct _KEVENT v26[16]; // [rsp+50h] [rbp+10h] BYREF

  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v17 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v23 = *(_DWORD *)v17;
  }
  else
  {
    v23 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v23, a3);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      *(_QWORD *)&v26[5].Header.Lock = a2;
      goto LABEL_6;
    }
    v18 = v23;
    result = RtlGetExtendedContextLength(v23, (__int64)&v24);
    if ( (int)result >= 0 )
    {
      v19 = v24 + 15LL;
      if ( v19 <= v24 )
        v19 = 0xFFFFFFFFFFFFFF0LL;
      v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
      *(_QWORD *)&v26[5].Header.Lock = &v23;
      memset(&v23, 0, v24);
      result = RtlInitializeExtendedContext(*(__int64 *)&v26[5].Header.Lock, v18, (__int64)&v25);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&v26[5].Header.Lock = v25 - 1232;
        result = RtlpReadExtendedContext(v21, 1, v25, v18, a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return (unsigned int)-1073741776;
          BYTE1(v26[3].Header.WaitListHead.Blink) &= ~4u;
          v11 = BYTE1(v26[3].Header.WaitListHead.Blink);
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v15 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v15 )
              {
                Blink_high = KeVerifyContextRecord((__int64)Thread, *(__int64 *)&v26[5].Header.Lock, v16, 0, 0LL);
                if ( Blink_high < 0 )
                  return (unsigned int)Blink_high;
                v11 = BYTE1(v26[3].Header.WaitListHead.Blink) | 4;
              }
            }
          }
          LOBYTE(v26[3].Header.WaitListHead.Blink) = a4;
          if ( Thread == CurrentThread )
          {
            v26[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1;
            *(_QWORD *)&v26[3].Header.Lock = Thread;
            BYTE1(v26[3].Header.WaitListHead.Blink) = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            v22 = &v26[3];
            PspGetSetContextSpecialApc((__int64)v26, 0LL, 0LL, &v26[2].Header.WaitListHead.Blink);
            v13 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v13
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            goto LABEL_14;
          }
          BYTE1(v26[3].Header.WaitListHead.Blink) = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeEvent(&v26[4], NotificationEvent, 0);
          KeInitializeApc((__int64)v26, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( (unsigned __int8)KeInsertQueueApc((__int64)v26, 1LL, Thread, 2u) )
          {
            KeWaitForSingleObject(&v26[4], Executive, 0, 0, 0LL);
LABEL_14:
            Blink_high = HIDWORD(v26[3].Header.WaitListHead.Blink);
            if ( SHIDWORD(v26[3].Header.WaitListHead.Blink) >= 0 && a3 == 1 && a4 == 1 )
            {
              LOBYTE(v12) = KeGetCurrentThread()->PreviousMode;
              EtwTiLogSetContextThread(v12, Thread, *(_QWORD *)&v26[5].Header.Lock, v23, v22);
            }
            return (unsigned int)Blink_high;
          }
          return (unsigned int)-1073741823;
        }
      }
    }
  }
  return result;
}
