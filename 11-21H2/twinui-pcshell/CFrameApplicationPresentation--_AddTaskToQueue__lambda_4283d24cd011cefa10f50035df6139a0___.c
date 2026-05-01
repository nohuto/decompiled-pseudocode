/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_4283d24cd011cefa10f50035df6139a0___ @ 0x180136D20
 * Callers:
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180136D10 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_4283d24cd011cefa10f50035df6139a0___(
        _DWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // r14
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  int v8; // ebx
  char v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = a1[12];
    v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      v6[3] = 1;
      *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v7 + 2) = 0LL;
      if ( v7 + 4 != (_DWORD *)&v10 )
      {
        *((_QWORD *)v7 + 2) = a1;
        v4 = 0LL;
      }
      *((_QWORD *)v7 + 3) = a1;
      *((_QWORD *)v7 + 4) = a2;
      *(_QWORD *)v7 = off_18063ABC8;
    }
    else
    {
      v7 = 0LL;
    }
    v8 = SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v7, 0LL);
    if ( v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v8 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return (unsigned int)v8;
}
