/*
 * XREFs of ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1801152B0
 * Callers:
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180114A40 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?ResetState@SystemCursor2@@QEAAJXZ @ 0x180114D34 (-ResetState@SystemCursor2@@QEAAJXZ.c)
 *     ?SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z @ 0x1801150B0 (-SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z.c)
 *     ?SetSuppressionState@SystemCursor2@@QEAAJ_N@Z @ 0x180115794 (-SetSuppressionState@SystemCursor2@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800CE84C (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 *     ?SetCursorVisibility@Cursor@InputTraceLogging@@SAX_N@Z @ 0x180115214 (-SetCursorVisibility@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180115B7C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursor2::SetEffectiveVisibility(SystemCursor2 *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v9);
  if ( v9
    && *((_QWORD *)this + 21)
    && (LOBYTE(v4) = a2,
        InputTraceLogging::Cursor::SetCursorVisibility(v4),
        LOBYTE(v5) = a2,
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21), v5),
        v7 = v6,
        v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x259,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)v6);
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v9);
    return v7;
  }
  else
  {
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    return 0LL;
  }
}
