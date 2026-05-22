/*
 * XREFs of ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x1801156F8
 * Callers:
 *     ?SetCursorShellMagnification@SystemCursorService2@@UEAAJ_KM@Z @ 0x180115010 (-SetCursorShellMagnification@SystemCursorService2@@UEAAJ_KM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800CE84C (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x180115464 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180115B7C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 */

__int64 __fastcall SystemCursor2::SetShellMagnification(SystemCursor2 *this, float a2)
{
  __int64 v2; // r11
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v6);
  if ( v6
    && *(_QWORD *)(v2 + 168)
    && (*(float *)(v2 + 192) = a2,
        v3 = SystemCursor2::SetShape((SystemCursor2 *)v2, *(_QWORD *)(v2 + 40), 1),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)v3);
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v6);
    return v4;
  }
  else
  {
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    return 0LL;
  }
}
