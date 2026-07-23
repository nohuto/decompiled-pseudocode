/*
 * XREFs of sub_1407045D0 @ 0x1407045D0
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_1406E6600 @ 0x1406E6600 (sub_1406E6600.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     sub_1407E3868 @ 0x1407E3868 (sub_1407E3868.c)
 *     sub_1407E3C20 @ 0x1407E3C20 (sub_1407E3C20.c)
 *     PsGetContextThread @ 0x1408824B0 (PsGetContextThread.c)
 *     sub_1409B29B0 @ 0x1409B29B0 (sub_1409B29B0.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
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
 *     sub_140704E2C @ 0x140704E2C (sub_140704E2C.c)
 */

int __fastcall sub_1407045D0(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  int result; // eax
  PCONTEXT_EX v11; // r15
  bool v12; // zf
  __int64 v13; // rax
  ULONG v14; // r13d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  __int64 v19; // rcx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v23[11]; // [rsp+50h] [rbp+10h] BYREF
  char v24; // [rsp+A8h] [rbp+68h]
  _BYTE v25[295]; // [rsp+A9h] [rbp+69h] BYREF
  _OWORD v26[2]; // [rsp+1D0h] [rbp+190h] BYREF

  ContextEx = 0LL;
  memset(v23, 0, sizeof(v23));
  memset(v25, 0, sizeof(v25));
  ContextLength = 0;
  memset(v26, 0, sizeof(v26));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v13 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v13;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = sub_140298720(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      v14 = ContextFlags;
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v15 = ContextLength + 15LL;
      if ( v15 <= ContextLength )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
      v17 = alloca(v16);
      v18 = alloca(v16);
      *(_QWORD *)&v25[31] = &ContextFlags;
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v14, &ContextEx);
      if ( result < 0 )
        return result;
      v11 = ContextEx;
      *(_QWORD *)&v25[31] = (char *)ContextEx - 1232;
      result = sub_140703290(v19, 0, (__int64)ContextEx, v14, a2, (int *)v26);
      if ( result < 0 )
        return result;
    }
    else
    {
      *(_QWORD *)&v25[31] = a2;
      v11 = (PCONTEXT_EX)(a2 + 1232);
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return -1073741776;
    v24 = a4;
    if ( (struct _KTHREAD *)a1 == CurrentThread )
    {
      v23[8] = 0LL;
      v23[9] = a1;
      v25[0] = v25[0] & 0xFC | (2 * (a5 & 1));
      --*((_WORD *)CurrentThread + 243);
      sub_140429670((__int64)v23, 0LL, 0LL, &v23[8]);
      v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      v25[0] = v25[0] & 0xFD | (2 * (a5 & 1)) | 1;
      KeInitializeEvent((PRKEVENT)&v25[7], NotificationEvent, 0);
      KeInitializeApc((__int64)v23, a1, 0, (__int64)sub_140429670, 0LL, 0LL, 0, 0LL);
      if ( !KeInsertQueueApc((__int64)v23, 0LL, a1, 2) )
        return -1073741823;
      KeWaitForSingleObject(&v25[7], Executive, 0, 0, 0LL);
    }
    result = *(_DWORD *)&v25[3];
    if ( *(int *)&v25[3] >= 0 && *(_QWORD *)&v25[31] != a2 )
      return sub_140704E2C(
               *(_DWORD *)&v25[31],
               (int)a2 + 1232,
               (unsigned int)v26,
               *(_DWORD *)(*(_QWORD *)&v25[31] + 48LL),
               (__int64)v11);
  }
  return result;
}
