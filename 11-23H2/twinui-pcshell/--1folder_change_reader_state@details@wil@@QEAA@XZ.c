/*
 * XREFs of ??1folder_change_reader_state@details@wil@@QEAA@XZ @ 0x18063E34C
 * Callers:
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x18063E9A0 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::folder_change_reader_state::~folder_change_reader_state(
        wil::details::folder_change_reader_state *this)
{
  struct _TP_IO *v1; // rsi
  RTL_SRWLOCK *v3; // rdi
  char *v4; // rcx
  char *v5; // rcx

  v1 = (struct _TP_IO *)*((_QWORD *)this + 21);
  if ( v1 )
  {
    v3 = (RTL_SRWLOCK *)((char *)this + 176);
    AcquireSRWLockExclusive((PSRWLOCK)this + 22);
    *((_QWORD *)this + 21) = 0LL;
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    v4 = (char *)*((_QWORD *)this + 15);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CancelIoEx(v4, (LPOVERLAPPED)((char *)this + 136));
    WaitForThreadpoolIoCallbacks(v1, 1);
    CloseThreadpoolIo(v1);
  }
  v5 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)this);
}
