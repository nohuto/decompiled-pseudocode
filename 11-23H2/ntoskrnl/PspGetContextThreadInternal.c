/*
 * XREFs of PspGetContextThreadInternal @ 0x1407707D4
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     WbGetTrapFrame @ 0x140762DDC (WbGetTrapFrame.c)
 *     WbSetTrapFrame @ 0x140763048 (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1407701FC (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x1407A018C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0458 (PspWow64SetContextThread.c)
 *     NtGetContextThread @ 0x1407E1AF0 (NtGetContextThread.c)
 *     PsGetContextThread @ 0x1408A5B70 (PsGetContextThread.c)
 *     PspPicoGetContextThreadEx @ 0x1409B5B60 (PspPicoGetContextThreadEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x1402BE6D0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC640 (KeInsertQueueApc.c)
 *     RtlInitializeExtendedContext @ 0x14030D3B0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D430 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x14030D73C (RtlpSanitizeContextFlags.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140428CA0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140429B10 (_alloca_probe.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlpReadExtendedContext @ 0x14076FEE0 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1407A0C94 (RtlpWriteExtendedContext.c)
 */

__int64 __fastcall PspGetContextThreadInternal(struct _KTHREAD *a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v11; // rsi
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  __int64 v18; // rcx
  unsigned int v19; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp+4h] BYREF
  __int64 v21; // [rsp+48h] [rbp+8h] BYREF
  struct _KEVENT v22[16]; // [rsp+50h] [rbp+10h] BYREF
  _OWORD v23[2]; // [rsp+1D0h] [rbp+190h] BYREF

  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  v20 = 0;
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v13 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v19 = *(_DWORD *)v13;
  }
  else
  {
    v19 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v19, a3);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(v19, (__int64)&v20);
      if ( (int)result < 0 )
        return result;
      v14 = v20 + 15LL;
      if ( v14 <= v20 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = alloca(v15);
      v17 = alloca(v15);
      *(_QWORD *)&v22[5].Header.Lock = &v19;
      result = RtlInitializeExtendedContext((__int64)&v19, v19, (__int64)&v21);
      if ( (int)result < 0 )
        return result;
      v11 = v21;
      *(_QWORD *)&v22[5].Header.Lock = v21 - 1232;
      result = RtlpReadExtendedContext(v18, 0, v21, v19, a2, v23);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_QWORD *)&v22[5].Header.Lock = a2;
      v11 = a2 + 1232;
    }
    if ( a4 && (a1->MiscFlags & 0x400) != 0 )
      return 3221225520LL;
    LOBYTE(v22[3].Header.WaitListHead.Blink) = a4;
    if ( a1 == CurrentThread )
    {
      v22[2].Header.WaitListHead.Blink = 0LL;
      *(_QWORD *)&v22[3].Header.Lock = a1;
      BYTE1(v22[3].Header.WaitListHead.Blink) = BYTE1(v22[3].Header.WaitListHead.Blink) & 0xFC | (2 * (a5 & 1));
      --CurrentThread->SpecialApcDisable;
      PspGetSetContextSpecialApc((__int64)v22, 0LL, 0LL, &v22[2].Header.WaitListHead.Blink);
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      BYTE1(v22[3].Header.WaitListHead.Blink) = BYTE1(v22[3].Header.WaitListHead.Blink) & 0xFD | (2 * (a5 & 1)) | 1;
      KeInitializeEvent(&v22[4], NotificationEvent, 0);
      KeInitializeApc((__int64)v22, (__int64)a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !(unsigned __int8)KeInsertQueueApc((__int64)v22, 0LL, a1, 2u) )
        return 3221225473LL;
      KeWaitForSingleObject(&v22[4], Executive, 0, 0, 0LL);
    }
    result = HIDWORD(v22[3].Header.WaitListHead.Blink);
    if ( SHIDWORD(v22[3].Header.WaitListHead.Blink) >= 0 && *(_QWORD *)&v22[5].Header.Lock != a2 )
      return RtlpWriteExtendedContext(
               v22[5].Header.LockNV,
               (int)a2 + 1232,
               (unsigned int)v23,
               *(_DWORD *)(*(_QWORD *)&v22[5].Header.Lock + 48LL),
               v11);
  }
  return result;
}
