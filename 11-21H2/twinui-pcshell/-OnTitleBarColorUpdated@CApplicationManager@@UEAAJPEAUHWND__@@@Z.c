/*
 * XREFs of ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18001DC10
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18001DD50 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::OnTitleBarColorUpdated(CApplicationManager *this, HWND a2)
{
  int FrameByHwnd; // esi
  struct IApplicationFrameProxy *v3; // rbx
  _BYTE *v4; // rax
  _BYTE *v5; // rdi
  DWORD CurrentThreadId; // eax
  struct IApplicationFrameProxy *v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationFrameProxy *v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd((CApplicationManager *)((char *)this - 344), a2, &v11);
  if ( FrameByHwnd >= 0 )
  {
    v3 = v11;
    v11 = 0LL;
    v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 3) = 1;
      *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v5 + 2) = 0LL;
      if ( v5 + 16 != &v12 )
      {
        *((_QWORD *)v5 + 2) = v3;
        v3 = 0LL;
      }
      *(_QWORD *)v5 = off_18061C480;
    }
    else
    {
      v5 = 0LL;
    }
    CurrentThreadId = GetCurrentThreadId();
    FrameByHwnd = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v5, 0LL);
    if ( v5 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( FrameByHwnd < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20C7,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)FrameByHwnd,
        v9);
    else
      FrameByHwnd = 0;
    if ( v3 )
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)FrameByHwnd;
}
