/*
 * XREFs of ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01CAC1C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0159FF0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01CA750 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned __int8 *a9)
{
  CTouchProcessor *v10; // rdi
  __int64 v11; // rdx
  __int64 ThreadPointerData; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+54h] [rbp+Ch]
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v18 = HIDWORD(this);
  v10 = gpTouchProcessor;
  v19 = 0;
  v17 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1112),
                        a3,
                        &v19,
                        &v17,
                        0LL);
  if ( !ThreadPointerData )
    goto LABEL_9;
  if ( v17 )
  {
    if ( a4 != 1 && a4 != v19 )
    {
      v15 = 1629LL;
      goto LABEL_10;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(v10, ThreadPointerData, a4, a5, a6, a7, a8, a9) )
      return 1LL;
LABEL_9:
    v15 = 87LL;
    goto LABEL_10;
  }
  v15 = 5LL;
LABEL_10:
  UserSetLastError(v15, v11, v13, v14);
  return 0LL;
}
