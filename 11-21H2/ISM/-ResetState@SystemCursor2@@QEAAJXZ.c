/*
 * XREFs of ?ResetState@SystemCursor2@@QEAAJXZ @ 0x1800ED554
 * Callers:
 *     ?ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z @ 0x1800ED4B0 (-ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6080 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x1800ECBD0 (-GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800EDAD0 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     ?SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180156CD4 (-SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z.c)
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
        461LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)(unsigned int)v4);
    *(_OWORD *)v11 = 0LL;
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
      v1,
      (__int64 *)v11);
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
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcursorservice2.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
