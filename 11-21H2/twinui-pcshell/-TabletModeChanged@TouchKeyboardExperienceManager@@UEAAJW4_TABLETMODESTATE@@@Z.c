/*
 * XREFs of ?TabletModeChanged@TouchKeyboardExperienceManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180469650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTabletModeChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x18017F134 (-OnTabletModeChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::TabletModeChanged(__int64 a1, int a2)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 424) = a2;
  v2 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
  if ( !v2 )
    return 0LL;
  v3 = KeyboardHosting::TabTipAdapter::OnTabletModeChanged(v2, a2 == 1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x874,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
