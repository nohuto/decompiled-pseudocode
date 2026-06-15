/*
 * XREFs of ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180127420
 * Callers:
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180126588 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180128B00 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000F3B4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BED90 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x1801275B4 (-InitializeTheadpool@CWorkFifo@@AEAAJXZ.c)
 *     ?ReleaseThreadpool@CWorkFifo@@AEAAXXZ @ 0x1801285C0 (-ReleaseThreadpool@CWorkFifo@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWorkFifo::Initialize(wil::details **this)
{
  signed int LastErrorFailHr; // ebx
  __int64 v3; // rdx
  wil::details *v4; // rcx
  wil::details *Event; // rbp
  __int64 v6; // r8
  const char *v7; // r9
  wil::details *v8; // rsi
  DWORD LastError; // ebx
  void *v10; // rdx

  LastErrorFailHr = 0;
  if ( *this )
    return (unsigned int)LastErrorFailHr;
  LastErrorFailHr = CWorkFifo::InitializeTheadpool(this);
  if ( LastErrorFailHr < 0 )
  {
LABEL_8:
    CWorkFifo::ReleaseThreadpool((CWorkFifo *)this);
    return (unsigned int)LastErrorFailHr;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4, v3, v6, v7);
    if ( LastErrorFailHr >= 0 )
      return (unsigned int)LastErrorFailHr;
    goto LABEL_8;
  }
  GetLastError();
  v8 = this[28];
  if ( v8 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v8, v10);
    SetLastError(LastError);
  }
  this[28] = Event;
  return 0;
}
