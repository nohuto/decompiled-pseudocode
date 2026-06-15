/*
 * XREFs of ?SetAudioStreamWindow@CVADServer@@QEAAJPEAUHWND__@@@Z @ 0x18011F6F0
 * Callers:
 *     AudioServerSetAudioStreamWindow @ 0x180125110 (AudioServerSetAudioStreamWindow.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::SetAudioStreamWindow(CVADServer *this, HWND a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = *((_QWORD *)this + 21);
  if ( v5 && *((_DWORD *)this + 40) )
  {
    *(_QWORD *)(v5 + 88) = a2;
    v6 = *(_QWORD *)(v5 + 216);
    if ( v6 )
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v6 + 40LL))(v6, a2);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2290679809LL;
  }
}
