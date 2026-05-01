/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3191f22cac41f41d34f0b7ce6d91de45_____lambda_3191f22cac41f41d34f0b7ce6d91de45___ @ 0x1801D8274
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3191f22cac41f41d34f0b7ce6d91de45___ @ 0x1801D83B8 (ShellPositionerHelpers--PerformCallbackOnView__lambda_3191f22cac41f41d34f0b7ce6d91de45___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180015C50 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3191f22cac41f41d34f0b7ce6d91de45_____lambda_3191f22cac41f41d34f0b7ce6d91de45___(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  void *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v6 = *a2;
    *(_QWORD *)v5 = off_1807C4050;
    *((_QWORD *)v5 + 1) = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v5 + 6) = v6;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(*a1);
    v8 = 0LL;
    *a1 = v5;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v8);
  return a1;
}
