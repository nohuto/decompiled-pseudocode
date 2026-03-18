/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C01CB54C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0159FF0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01CA0D0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  CTouchProcessor *v7; // rdi
  __int64 ThreadPointerData; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+44h] [rbp+Ch]

  v16 = HIDWORD(this);
  v7 = gpTouchProcessor;
  v15 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1112),
                        a3,
                        &v15,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
LABEL_7:
    v13 = 87LL;
    goto LABEL_8;
  }
  if ( a4 == 1 || a4 == v15 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(
                         v7,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         (struct tagPOINTER_INFO *)a7) )
      return 1LL;
    goto LABEL_7;
  }
  v13 = 1629LL;
LABEL_8:
  UserSetLastError(v13, v10, v11, v12);
  return 0LL;
}
