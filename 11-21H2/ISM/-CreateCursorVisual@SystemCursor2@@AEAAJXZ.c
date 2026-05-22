/*
 * XREFs of ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800EC4F0
 * Callers:
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800EC658 (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6080 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ??$?4U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EA8BC (--$-4U-$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@-$unique_ptr@VHardwareCur.c)
 *     ??$make_unique@VHardwareCursorVisual@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEA_K_N$0A@@std@@YA?AV?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@0@$$QEAPEAVWindowsCompositionGlobals@SystemCursors@@AEA_K$$QEA_N@Z @ 0x1800EB214 (--$make_unique@VHardwareCursorVisual@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEA_K_N$0A@@.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800EE2FC (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?EnableHardwareCursor@HardwareCursorVisual@SystemCursors@@QEAAJ_N@Z @ 0x1800EE60C (-EnableHardwareCursor@HardwareCursorVisual@SystemCursors@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursor2::CreateCursorVisual(SystemCursor2 *this)
{
  __int64 v2; // r14
  SystemCursors::HardwareCursorVisual **v3; // rdi
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *v6; // rbx
  int v7; // eax
  bool v8; // dl
  unsigned int v9; // ebx
  __int64 v10; // rdx
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  void *v18; // [rsp+80h] [rbp+40h] BYREF

  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v13);
  v2 = v13;
  if ( v13 )
  {
    v3 = (SystemCursors::HardwareCursorVisual **)((char *)this + 168);
    v4 = (__int64 *)*((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = 0LL;
    if ( v4 )
    {
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v4 + 5);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v4 + 3);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v4 + 2);
      operator delete(v4);
    }
    *(_OWORD *)v12 = 0LL;
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
      (_QWORD *)this + 19,
      (__int64 *)v12);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
    v16 = 1;
    v17 = *(_QWORD *)(v2 + 24);
    v5 = (__int64 **)std::make_unique<SystemCursors::HardwareCursorVisual,SystemCursors::WindowsCompositionGlobals *,unsigned __int64 &,bool,0>(
                       &v18,
                       &v17,
                       (__int64 *)this,
                       &v16);
    std::unique_ptr<SystemCursors::HardwareCursorVisual>::operator=<std::default_delete<SystemCursors::HardwareCursorVisual>,0>(
      (__int64 **)this + 21,
      v5);
    v6 = (__int64 *)v18;
    if ( v18 )
    {
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)v18 + 5);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v6 + 3);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v6 + 2);
      operator delete(v6);
    }
    v7 = (**(__int64 (__fastcall ***)(SystemCursors::HardwareCursorVisual *))*v3)(*v3);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 645LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_14;
    }
    v7 = SystemCursors::HardwareCursorVisual::EnableHardwareCursor(*v3, v8);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 648LL;
      goto LABEL_12;
    }
  }
  v9 = 0;
LABEL_14:
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return v9;
}
