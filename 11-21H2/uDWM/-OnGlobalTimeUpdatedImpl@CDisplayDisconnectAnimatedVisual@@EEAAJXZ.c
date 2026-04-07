/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x1800B5900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x1800B59C4 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::OnGlobalTimeUpdatedImpl(CDisplayDisconnectAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rax
  bool v6; // zf
  char v7; // al
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 456) )
  {
    v2 = CDisplayDisconnectAnimatedVisual::SetupDelay(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    *((_BYTE *)this + 456) = 1;
  }
  v5 = *((_QWORD *)this + 56);
  if ( !v5 || !*(_BYTE *)(v5 + 72) )
    return 0LL;
  *((_QWORD *)this + 56) = 0LL;
  v6 = (*(_DWORD *)(v5 + 8))-- == 1;
  v7 = CDesktopManager::s_fTimelineDirty;
  if ( v6 )
    v7 = 1;
  CDesktopManager::s_fTimelineDirty = v7;
  v8 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61,
    (int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
