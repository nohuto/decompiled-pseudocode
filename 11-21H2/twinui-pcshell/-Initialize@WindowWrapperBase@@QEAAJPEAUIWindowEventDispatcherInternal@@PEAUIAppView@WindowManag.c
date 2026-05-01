/*
 * XREFs of ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x18009BDC0
 * Callers:
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x18009B97C (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1803FAF30 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Copy @ 0x18009C0D0 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Copy.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___ @ 0x18009C110 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_fd28b8cfd5332ad6b2a822ae0574fab8.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18009C284 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x18009C30C (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x18013E3AC (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18014D6A4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowWrapperBase::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned __int16 *a9,
        char a10)
{
  unsigned __int16 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // eax
  _BYTE *v20; // rax
  DWORD CurrentThreadId; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  int v26; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v29[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v30[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[56]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v32; // [rsp+C8h] [rbp-38h]
  _BYTE v33[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v14 = a9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v15 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 320) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *(_DWORD *)(a1 + 328) = a5;
  *(_DWORD *)(a1 + 352) = a6;
  v17 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 280) = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v14 )
    v19 = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(a1 + 312), v14);
  else
    v19 = -2147467261;
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x73,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v19,
      v26);
  v30[0] = off_180646E00;
  v30[1] = a1;
  v30[7] = v30;
  v27 = v30;
  v32 = 0LL;
  v20 = (_BYTE *)std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Copy(v30, v31);
  v32 = v20;
  if ( v20 == v31 || *(_QWORD *)(a1 + 456) == a1 + 400 )
  {
    v34 = 0LL;
    std::_Func_class<void,bool>::_Reset_move(v33, v31);
    std::_Func_class<void,bool>::_Reset_move(v31, a1 + 400);
    std::_Func_class<void,bool>::_Reset_move(a1 + 400, v33);
    std::_Func_class<void,bool>::_Tidy(v33);
  }
  else
  {
    v32 = *(_BYTE **)(a1 + 456);
    *(_QWORD *)(a1 + 456) = v20;
  }
  std::_Func_class<void,bool>::_Tidy(v31);
  std::_Func_class<void,bool>::_Tidy(v30);
  v29[0] = a1;
  v29[1] = &a8;
  v29[2] = &a10;
  CurrentThreadId = GetCurrentThreadId();
  v23 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___(
          v22,
          CurrentThreadId,
          v29);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v23,
      v26);
  v24 = a1 + 16;
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 280LL))(v24);
  v27 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 272LL))(v24);
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 288LL))(v24);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    &v26,
    &v27,
    &v28);
  return 0LL;
}
