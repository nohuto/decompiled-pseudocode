/*
 * XREFs of ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x1800EBD3C
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z @ 0x1800EC170 (-CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_shared@VSharedTargetWithHandle@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEAK@std@@YA?AV?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@0@$$QEAPEAVWindowsCompositionGlobals@SystemCursors@@AEAK@Z @ 0x1800EB110 (--$make_shared@VSharedTargetWithHandle@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEAK@std@@.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800EE2FC (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180156A54 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     ?SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180156CD4 (-SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursor2::AttachCursorVisualToShellRoot(SystemCursor2 *this)
{
  __int64 v2; // rbp
  SystemCursors::SharedTargetWithHandle *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  std::_Ref_count_base *v11; // rbx
  std::_Ref_count_base *v12; // rcx
  SystemCursors::SharedTargetWithHandle *v14; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v16);
  v2 = v16;
  if ( !v16 )
  {
LABEL_17:
    v5 = 0;
    goto LABEL_18;
  }
  v19 = *(_QWORD *)(v16 + 24);
  std::make_shared<SystemCursors::SharedTargetWithHandle,SystemCursors::WindowsCompositionGlobals *,unsigned long &>(
    &v14,
    &v19,
    (int *)(v16 + 248));
  v3 = v14;
  v4 = SystemCursors::SharedTargetWithHandle::Initialize(v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 681LL;
    goto LABEL_9;
  }
  v8 = SystemCursors::SharedTargetWithHandle::SetRoot(
         v3,
         *(struct Windows::UI::Composition::IVisual **)(*((_QWORD *)this + 21) + 16LL));
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 682LL;
    goto LABEL_9;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 64LL);
  if ( !v9
    || (v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v9 + 8) + 40LL))(
                v9 + 8,
                *(_QWORD *)this,
                *((_QWORD *)v3 + 3)),
        v5 = v10,
        v10 >= 0) )
  {
    v11 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
      v11 = v15;
      v3 = v14;
    }
    *((_QWORD *)this + 19) = v3;
    v12 = (std::_Ref_count_base *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = v11;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x150,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcurs"
         "orcontroller2.cpp",
    (const char *)(unsigned int)v10);
  v6 = v5;
  v7 = 687LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcursorservice2.cpp",
    (const char *)v6);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
LABEL_18:
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  return v5;
}
