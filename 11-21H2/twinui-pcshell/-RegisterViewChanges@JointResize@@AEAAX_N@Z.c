/*
 * XREFs of ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x18052A478
 * Callers:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18052883C (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall JointResize::RegisterViewChanges(JointResize *this, char a2)
{
  _DWORD *v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)((char *)this + 464);
  if ( a2 )
  {
    if ( !*v2 )
      (*(void (__fastcall **)(_QWORD, char *, _DWORD *))(**((_QWORD **)this + 17) + 96LL))(
        *((_QWORD *)this + 17),
        (char *)this + 96,
        v2);
  }
  else if ( *v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, JointResize *))(**((_QWORD **)this + 17) + 104LL))(
           *((_QWORD *)this + 17),
           (unsigned int)*v2,
           this);
    if ( v3 >= 0 )
      *v2 = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v3);
  }
}
