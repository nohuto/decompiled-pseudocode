/*
 * XREFs of ?NotifyReadyForPresentationChanged@WindowWrapperBase@@AEAAX_N@Z @ 0x18001DF90
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Do_call @ 0x1800364F0 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Do_call.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::NotifyReadyForPresentationChanged(WindowWrapperBase *this, char a2)
{
  char *v4; // rbx
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  char *v8; // rsi
  int v9; // ebp
  __int64 v10; // rdi
  unsigned int v11; // ebp
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  int v14; // edi
  int v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( a2 && !*((_BYTE *)this + 176) )
  {
    *((_BYTE *)this + 176) = 1;
    v10 = *((int *)this + 74);
    v11 = *((_DWORD *)this + 142);
    v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v12);
      v13[2] = v10;
      *v13 = off_18061C4D0;
    }
    else
    {
      v13 = 0LL;
    }
    v14 = SHTaskPoolQueueTask(0LL, 0LL, v11, 0LL, v13, 0LL);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA3B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v14,
        v16);
  }
  v4 = (char *)this + 40;
  if ( this != (WindowWrapperBase *)-40LL )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))((char *)this + 40);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))((char *)this + 40);
  }
  v5 = *((_DWORD *)this + 142);
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v7 + 2) = this;
    v8 = 0LL;
    *((_QWORD *)v7 + 3) = v4;
    *((_BYTE *)v7 + 32) = a2;
    *(_QWORD *)v7 = off_18061C4A8;
  }
  else
  {
    v7 = 0LL;
    v8 = (char *)this + 40;
  }
  v9 = SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA46,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v9,
      v15);
  if ( v4 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
}
