/*
 * XREFs of ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x1801033C4
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800AB8F0 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010204C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 */

void __fastcall CWindowList::DismissCurrentTouchResizeHighlight(CWindowList *this)
{
  __int64 v1; // rax
  char v2; // dl
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 88);
  if ( v1 )
  {
    v2 = *(_BYTE *)(v1 + 669);
    if ( (v2 & 0x20) != 0 )
    {
      *(_BYTE *)(v1 + 669) = v2 & 0xDF;
      v3 = CWindowList::ApplyWindowResizeStateTransition(this);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          3307LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v3);
    }
  }
}
