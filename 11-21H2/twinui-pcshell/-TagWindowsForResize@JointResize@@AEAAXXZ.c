/*
 * XREFs of ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18052AD30
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall JointResize::TagWindowsForResize(JointResize *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DwmpTransitionWindow(*((_QWORD *)this + 33), 1073741918LL);
  v2 = *((_QWORD *)this + 27);
  v3 = *((_QWORD *)this + 28);
  while ( v2 != v3 )
  {
    switch ( *(_DWORD *)(v2 + 8) )
    {
      case 0xA:
        v4 = *(_BYTE *)(v2 + 40) != 0 ? 96 : 99;
        break;
      case 0xB:
        v4 = *(_BYTE *)(v2 + 40) != 0 ? 95 : 100;
        break;
      case 0xC:
        v4 = *(_BYTE *)(v2 + 40) != 0 ? 98 : 101;
        break;
      case 0xF:
        v4 = *(_BYTE *)(v2 + 40) != 0 ? 97 : 102;
        break;
      default:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          808LL,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)0x80070057LL,
          v5);
    }
    LODWORD(v4) = v4 | 0x40000000;
    DwmpTransitionWindow(*(_QWORD *)(v2 + 16), v4);
    v2 += 88LL;
  }
}
