/*
 * XREFs of ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x180119E84
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x180118C80 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1801195E0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x18011A340 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18011831C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180118344 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x180118AF0 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?PushBack@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z @ 0x18011AF84 (-PushBack@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z.c)
 */

__int64 __fastcall AlpcPort::FillSectionListEntryPool(AlpcPort *this, unsigned __int64 a2)
{
  HANDLE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE *v8; // rsi
  HANDLE CurrentProcess; // rax
  void *v10; // rdi
  void *v11; // rbx
  HANDLE v12; // rax
  __int64 v13; // rdx
  wil::details::in1diag0 *v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  unsigned int LastError; // ebx

  if ( *((_QWORD *)this + 10) >= a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = (HANDLE *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v4;
    if ( !v4 )
      break;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    *((_DWORD *)v4 + 14) = 0;
    *v4 = &AlpcPort::AlpcSectionListEntry::`vftable';
    v4[8] = 0LL;
    v4[9] = 0LL;
    v4[10] = 0LL;
    CurrentProcess = GetCurrentProcess();
    v10 = (void *)*((_QWORD *)this + 7);
    v11 = CurrentProcess;
    v12 = GetCurrentProcess();
    if ( !DuplicateHandle(v12, v10, v11, v8 + 8, 0, 0, 2u) )
    {
      LastError = wil::details::in1diag0::Return_GetLastError(v14, v13, v15, v16);
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v8, 1);
      return LastError;
    }
    v8[10] = this;
    NtList<AlpcPort::AlpcSectionListEntry>::PushBack((char *)this + 64, v8);
    if ( *((_QWORD *)this + 10) >= a2 )
      return 0LL;
  }
  LastError = -2147024882;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v5, v6, v7);
  return LastError;
}
