/*
 * XREFs of ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x180044FC0
 * Callers:
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800438D8 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x18004508C (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800BE150 (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController2::InitializeDesktopCursorService(
        SystemCursorController2 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  std::_Ref_count_base *v8; // rcx
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  char *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 10) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller2.cpp",
      a4);
  v5 = (char *)operator new(0x30uLL);
  *(_OWORD *)v5 = 0LL;
  *((_DWORD *)v5 + 2) = 1;
  *((_DWORD *)v5 + 3) = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<DesktopSystemCursorService>::`vftable';
  *((_QWORD *)v5 + 3) = this;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 2) = &DesktopSystemCursorService::`vftable';
  *((_QWORD *)v5 + 5) = 0LL;
  *(_QWORD *)v10 = v5 + 16;
  v11 = v5;
  v6 = SystemCursorServiceBase::InitializeBase((SystemCursorServiceBase *)(v5 + 16));
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\desk"
               "topsystemcursorservice.cpp",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller2.cpp",
      (const char *)v7);
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(v10);
    return v7;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    *((_QWORD *)this + 10) = *(_QWORD *)v10;
    v8 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = v5;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    return 0LL;
  }
}
