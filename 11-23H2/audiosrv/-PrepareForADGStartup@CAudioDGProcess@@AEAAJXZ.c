/*
 * XREFs of ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180064BC8
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18004304C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042E84 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800CCBCC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800CF06C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CAudioDGProcess::PrepareForADGStartup(CAudioDGProcess *this, void *a2)
{
  void *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rsi
  void *v7; // rdx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  wil::details *v10; // rdi
  int LastErrorFailHr; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ebx
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
  EventAttributes.lpSecurityDescriptor = 0LL;
  v4 = (wil::details *)*((_QWORD *)this + 14);
  EventAttributes.nLength = 24;
  EventAttributes.bInheritHandle = 1;
  if ( v4 )
  {
    wil::details::ResetEvent(v4, a2);
  }
  else
  {
    v6 = (wil::details *)CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
    if ( v6 )
    {
      GetLastError();
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        (wil::details **)this + 14,
        v6);
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
      v13 = LastErrorFailHr;
      if ( LastErrorFailHr < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x92,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
          (const char *)(unsigned int)LastErrorFailHr);
        return v13;
      }
    }
  }
  v8 = (wil::details *)*((_QWORD *)this + 15);
  if ( v8 )
  {
    wil::details::ResetEvent(v8, v7);
    return 0LL;
  }
  v10 = (wil::details *)CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
  if ( v10 )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 15,
      v10);
    return 0LL;
  }
  v14 = wil::details::GetLastErrorFailHr(v9);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
