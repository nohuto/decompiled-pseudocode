/*
 * XREFs of ?DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAKAEBV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@9@PEAUHWND__@@AEBUtagPOINT@@_N@Z @ 0x18062AC68
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802194D0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEBAJKKPEAK@Z @ 0x18062A7B0 (--R_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEBAJKKPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnWin32EndPoint(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        char a6)
{
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  int i; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v19[2]; // [rsp+20h] [rbp-20h] BYREF
  int v20; // [rsp+30h] [rbp-10h]
  int v21; // [rsp+34h] [rbp-Ch]
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v24; // [rsp+60h] [rbp+20h] BYREF

  v24 = a1;
  v8 = *a5;
  v9 = a5[1];
  v10 = *a2;
  v19[0] = v10;
  v11 = 0;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v19[1] = a4;
  v20 = v8;
  v21 = v9;
  v12 = *a3;
  v22 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  LODWORD(v24) = 1;
  v13 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v19, 1, 1, (__int64)&v24);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B9,
      (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v13,
      v19[0]);
  for ( i = 0; i < 4; ++i )
  {
    LODWORD(a5) = 1;
    v15 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v19, 2, 1, (__int64)&a5);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v15,
        v19[0]);
  }
  LODWORD(a5) = 1;
  if ( a6 )
  {
    v16 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v19, 3, 1, (__int64)&a5);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C5,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v16,
        v19[0]);
    v11 = v24;
  }
  else
  {
    v17 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v19, 4, 0, (__int64)&a5);
    if ( v17 >= 0 )
      v11 = (unsigned int)a5;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CC,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v17);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
  return v11;
}
