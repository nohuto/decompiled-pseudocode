/*
 * XREFs of ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18003F9B8
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180019340 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000F3B4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18003CC5C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DAB0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BED90 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::PrepareForADGStartup(CAudioDGProcess *this, void *a2)
{
  void *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  HANDLE v6; // rbp
  void *v7; // rdx
  wil::details *v8; // rsi
  int LastErrorFailHr; // ebx
  wil::details *v10; // rcx
  wil::details *v11; // rcx
  HANDLE v12; // rbp
  wil::details *v13; // rsi
  DWORD LastError; // ebx
  void *v16; // rdx
  __int64 v17; // rdx
  DWORD v18; // ebx
  void *v19; // rdx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 11,
      0LL);
    *((_DWORD *)this + 24) = 0;
  }
  EventAttributes.nLength = 24;
  EventAttributes.lpSecurityDescriptor = 0LL;
  EventAttributes.bInheritHandle = 1;
  v4 = (wil::details *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    wil::details::ResetEvent(v4, a2);
  }
  else
  {
    v6 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
    if ( v6 )
    {
      GetLastError();
      v8 = (wil::details *)*((_QWORD *)this + 14);
      if ( v8 )
      {
        LastError = GetLastError();
        wil::details::CloseHandle(v8, v16);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 14) = v6;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
      if ( LastErrorFailHr < 0 )
      {
        v17 = 146LL;
        goto LABEL_20;
      }
    }
  }
  v10 = (wil::details *)*((_QWORD *)this + 15);
  if ( v10 )
  {
    wil::details::ResetEvent(v10, v7);
    return 0LL;
  }
  v12 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
  if ( v12 )
  {
    GetLastError();
    v13 = (wil::details *)*((_QWORD *)this + 15);
    if ( v13 )
    {
      v18 = GetLastError();
      wil::details::CloseHandle(v13, v19);
      SetLastError(v18);
    }
    *((_QWORD *)this + 15) = v12;
    return 0LL;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v11);
  if ( LastErrorFailHr >= 0 )
    return 0LL;
  v17 = 155LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
    (const char *)(unsigned int)LastErrorFailHr,
    EventAttributes.nLength);
  return (unsigned int)LastErrorFailHr;
}
