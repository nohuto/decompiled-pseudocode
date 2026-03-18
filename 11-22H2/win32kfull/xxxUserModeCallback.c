/*
 * XREFs of xxxUserModeCallback @ 0x1C02139E4
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxClientLoadOLE @ 0x1C0231810 (xxxClientLoadOLE.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0089E68 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0138B94 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0138BBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 xxxUserModeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  unsigned int Count; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  _QWORD v13[3]; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF
  int v15; // [rsp+8Ch] [rbp+24h]
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v15 = HIDWORD(a4);
  v4 = a3;
  v6 = a1;
  v13[0] = 0LL;
  v14 = 0;
  Count = AtomicExecutionCheck::GetCount(a1, a2, a3);
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)va, v8, v9, v10);
  EtwTraceBeginCallback(v6);
  v11 = KeUserModeCallback(v6, a2, v4, v13, &v14);
  EtwTraceEndCallback(v6);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)va);
  if ( v11 >= 0 && v14 )
    return (unsigned int)-1073741823;
  return (unsigned int)v11;
}
