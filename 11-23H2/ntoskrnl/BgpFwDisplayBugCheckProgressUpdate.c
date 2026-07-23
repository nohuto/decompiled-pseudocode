/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x140673458
 * Callers:
 *     KiBugCheckProgress @ 0x140569EF0 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140673458 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402C32C0 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     BcpConvertProgressToString @ 0x14067268C (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x140672E50 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x1406731F0 (BcpGetDisplayType.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140673458 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  unsigned int v3; // ebp
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  LONGLONG v9; // rcx
  LONGLONG v10; // rax
  LARGE_INTEGER v11; // rsi
  __int64 v12; // rdi
  int DisplayType; // eax
  __int64 v14; // r8
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // r8
  UNICODE_STRING *v17; // rax
  UNICODE_STRING *v18; // rcx
  UNICODE_STRING *v19; // rax
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v22.QuadPart = 0LL;
  if ( (dword_140C0E4B0 & 0x400000) != 0 || (dword_140C0E4B0 & 0x10) == 0 )
    return 0LL;
  v7 = KeQueryPerformanceCounter(&v22);
  v8 = v22;
  v9 = v7.QuadPart - BcpLastProgressUpdateTicks;
  v10 = v7.QuadPart - BcpStartTicks;
  v11.QuadPart = 2 * v22.QuadPart;
  if ( a3 && v10 < v11.QuadPart )
    v12 = 100 * v10 / v11.QuadPart;
  else
    LODWORD(v12) = 100;
  if ( a1 <= (unsigned int)v12 )
    LODWORD(v12) = a1;
  if ( v9 < v11.QuadPart || (unsigned int)v12 < BcpLastProgressDisplayed )
  {
    LODWORD(v12) = BcpLastProgressDisplayed;
  }
  else
  {
    v21[0] = DWORD2(BgInternal);
    v21[1] = DWORD1(BgInternal);
    v21[2] = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(v21);
    dword_140C64A50 = dword_140C0E3D8;
    BcpCursor = BcpProgressOffset;
    BcpDisplayProgress(v12, DisplayType, v14);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    BcpLastProgressDisplayed = v12;
  }
  if ( a1 != 100 || (_DWORD)v12 == 100 )
  {
    v17 = &stru_140C70AA0;
    if ( !a3 )
      v17 = &stru_140C70AB0;
    *a2 = v17;
    BcpConvertProgressToString(v12, (__int64)(a2 + 3));
    v18 = &stru_140C70AF0;
    if ( a1 != 1 )
      v18 = &stru_140C70B10;
    v19 = &stru_140C70AE0;
    if ( a1 != 1 )
      v19 = &stru_140C70B00;
    a2[1] = v19;
    a2[2] = v18;
  }
  else
  {
    v15.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
    if ( v15.QuadPart < v11.QuadPart )
      KeStallExecutionProcessor(1000000 * (v11.QuadPart - v15.QuadPart) / v8.QuadPart);
    LOBYTE(v16.LowPart) = a3;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
                           100LL,
                           a2,
                           (LARGE_INTEGER)v16.QuadPart);
  }
  return v3;
}
