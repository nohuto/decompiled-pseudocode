/*
 * XREFs of ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x18010498C
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z @ 0x180104DD0 (-CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800BE150 (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 *     ??$make_shared@VSharedTargetWithHandle@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEAK@std@@YA?AV?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@0@$$QEAPEAVWindowsCompositionGlobals@SystemCursors@@AEAK@Z @ 0x180103D58 (--$make_shared@VSharedTargetWithHandle@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEAK@std@@.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18010703C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180175C7C (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     ?SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180175F28 (-SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursor2::AttachCursorVisualToShellRoot(SystemCursor2 *this)
{
  __int64 v2; // r14
  SystemCursors::SharedTargetWithHandle *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  std::_Ref_count_base *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  SystemCursors::SharedTargetWithHandle *v12; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF

  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v14);
  v2 = v14;
  if ( v14 )
  {
    v17 = *(_QWORD *)(v14 + 24);
    std::make_shared<SystemCursors::SharedTargetWithHandle,SystemCursors::WindowsCompositionGlobals *,unsigned long &>(
      &v12,
      &v17,
      (int *)(v14 + 248));
    v3 = v12;
    v4 = SystemCursors::SharedTargetWithHandle::Initialize(v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 681LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)(unsigned int)v4);
      std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v12);
LABEL_11:
      std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v14);
      return v5;
    }
    v4 = SystemCursors::SharedTargetWithHandle::SetRoot(
           v3,
           *(struct Windows::UI::Composition::IVisual **)(*((_QWORD *)this + 21) + 16LL));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 682LL;
      goto LABEL_6;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 64LL);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v7 + 8) + 40LL))(
             v7 + 8,
             *(_QWORD *)this,
             *((_QWORD *)v3 + 3));
      v5 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x150,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v8);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2AF,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)v5);
        if ( v13 )
          std::_Ref_count_base::_Decref(v13);
        goto LABEL_11;
      }
    }
    v10 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      v10 = v13;
      v3 = v12;
    }
    *((_QWORD *)this + 19) = v3;
    v11 = (std::_Ref_count_base *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = v10;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return 0LL;
}
