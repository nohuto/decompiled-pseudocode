/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_298607fb54b79f08d3da2d7394d86fe3_____lambda_298607fb54b79f08d3da2d7394d86fe3___ @ 0x180137FB4
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_150041feadb12d29b74b347f051d22fe___ @ 0x180137E80 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_150041feadb12d29b74b347f051d22fe___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_298607fb54b79f08d3da2d7394d86fe3_____lambda_298607fb54b79f08d3da2d7394d86fe3___(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rdi

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 4 != a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_QWORD *)v5 + 3) = *((_QWORD *)a2 + 1);
    *((_QWORD *)v5 + 4) = *((_QWORD *)a2 + 2);
    v6 = a2 + 6;
    *((_QWORD *)v5 + 5) = 0LL;
    if ( v5 + 10 != v6 )
    {
      *((_QWORD *)v5 + 5) = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
    }
    *(_QWORD *)v5 = off_18063ABF0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
