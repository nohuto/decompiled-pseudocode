/*
 * XREFs of ?ResetState@SystemCursor2@@QEAAJXZ @ 0x180114D34
 * Callers:
 *     ?ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z @ 0x180114C90 (-ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073E1C (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x180114380 (-GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1801152B0 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     ?SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180183D38 (-SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z.c)
 */

__int64 __fastcall SystemCursor2::ResetState(SystemCursor2 *this)
{
  _QWORD *v1; // rdi
  SystemCursors::SharedTargetWithHandle *v3; // rcx
  int v4; // eax
  CursorSuppressionProcessor *v5; // rax
  bool EffectiveVisibiltyState; // al
  SystemCursor2 *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 152);
  v3 = (SystemCursors::SharedTargetWithHandle *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    v4 = SystemCursors::SharedTargetWithHandle::SetRoot(v3, 0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
        (const char *)(unsigned int)v4);
    *(_OWORD *)v11 = 0LL;
    std::shared_ptr<SystemCursor2>::operator=(v1, (__int64 *)v11);
    if ( v11[1] )
      std::_Ref_count_base::_Decref(v11[1]);
  }
  v5 = CursorSuppressionProcessor::s_processor;
  *((_BYTE *)this + 36) = 0;
  *((_BYTE *)this + 176) = 1;
  if ( v5 )
    LOBYTE(v5) = *((_DWORD *)v5 + 22) <= 1u;
  *((_BYTE *)this + 178) = (_BYTE)v5;
  EffectiveVisibiltyState = SystemCursor2::GetEffectiveVisibiltyState(this);
  v8 = SystemCursor2::SetEffectiveVisibility(v7, EffectiveVisibiltyState);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E2,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
