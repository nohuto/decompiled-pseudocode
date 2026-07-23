/*
 * XREFs of sub_1407043D0 @ 0x1407043D0
 * Callers:
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     sub_1407E3C20 @ 0x1407E3C20 (sub_1407E3C20.c)
 *     sub_1409B1A00 @ 0x1409B1A00 (sub_1409B1A00.c)
 *     PsSetContextThread @ 0x1409B1B30 (PsSetContextThread.c)
 *     sub_1409B29E0 @ 0x1409B29E0 (sub_1409B29E0.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     sub_1402985E4 @ 0x1402985E4 (sub_1402985E4.c)
 *     sub_140298720 @ 0x140298720 (sub_140298720.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140429670 @ 0x140429670 (sub_140429670.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 *     sub_14070592C @ 0x14070592C (sub_14070592C.c)
 */

int __fastcall sub_1407043D0(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r14
  int result; // eax
  char v11; // r10
  char v12; // si
  bool v13; // zf
  int v14; // edi
  struct _KPROCESS *ThreadProcess; // rdi
  int v16; // r8d
  __int64 v17; // rax
  ULONG v18; // esi
  unsigned __int64 v19; // rax
  void *v20; // rsp
  __int64 v21; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-20h]
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  __int64 v26; // [rsp+50h] [rbp+10h]
  _QWORD v27[11]; // [rsp+60h] [rbp+20h] BYREF
  char v28; // [rsp+B8h] [rbp+78h]
  _BYTE v29[295]; // [rsp+B9h] [rbp+79h] BYREF

  v26 = a2;
  ContextEx = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(v29, 0, sizeof(v29));
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v17 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v17;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = sub_140298720(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( !a3 )
    {
      *(_QWORD *)&v29[31] = a2;
LABEL_6:
      if ( a4 && (*((_DWORD *)Thread + 29) & 0x400) != 0 )
        return -1073741776;
      v29[0] &= ~4u;
      v12 = v29[0];
      if ( a4 )
      {
        if ( (v11 & 2) == 0 )
        {
          ThreadProcess = PsGetThreadProcess(CurrentThread);
          if ( PsGetThreadProcess(Thread) == ThreadProcess )
          {
            v14 = sub_1402985E4((__int64)Thread, v26, v16, 0, 0LL);
            if ( v14 < 0 )
              return v14;
            v12 = v29[0] | 4;
          }
        }
      }
      v28 = a4;
      if ( Thread == CurrentThread )
      {
        v27[8] = 1LL;
        v27[9] = Thread;
        v29[0] = v12 & 0xFC | (2 * (a5 & 1));
        --*((_WORD *)CurrentThread + 243);
        Timeout = (PLARGE_INTEGER)&v27[9];
        sub_140429670((__int64)v27, 0LL, 0LL, &v27[8]);
        v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
        goto LABEL_12;
      }
      v29[0] = v12 & 0xFD | (2 * (a5 & 1)) | 1;
      KeInitializeEvent((PRKEVENT)&v29[7], NotificationEvent, 0);
      KeInitializeApc((__int64)v27, (__int64)Thread, 0, (__int64)sub_140429670, 0LL, 0LL, 0, 0LL);
      if ( KeInsertQueueApc((__int64)v27, 1LL, (__int64)Thread, 2) )
      {
        KeWaitForSingleObject(&v29[7], Executive, 0, 0, 0LL);
LABEL_12:
        v14 = *(_DWORD *)&v29[3];
        if ( *(int *)&v29[3] >= 0 && a3 == 1 && a4 == 1 )
          sub_14070592C(
            *((unsigned __int8 *)KeGetCurrentThread() + 562),
            Thread,
            *(_QWORD *)&v29[31],
            ContextFlags,
            Timeout);
        return v14;
      }
      return -1073741823;
    }
    v18 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v19 = ContextLength + 15LL;
      if ( v19 <= ContextLength )
        v19 = 0xFFFFFFFFFFFFFF0LL;
      v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
      *(_QWORD *)&v29[31] = &ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(*(PCONTEXT *)&v29[31], v18, &ContextEx);
      if ( result >= 0 )
      {
        *(_QWORD *)&v29[31] = (char *)ContextEx - 1232;
        result = sub_140703290(v21, 1, (__int64)ContextEx, v18, a2, 0LL);
        if ( result >= 0 )
        {
          v26 = *(_QWORD *)&v29[31];
          v11 = a5;
          goto LABEL_6;
        }
      }
    }
  }
  return result;
}
