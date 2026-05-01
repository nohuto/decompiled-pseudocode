/*
 * XREFs of ??$QueueTask@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@Z @ 0x1800A45FC
 * Callers:
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x1800A454C (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // ebx
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    *(_OWORD *)(v7 + 16) = *(_OWORD *)a4;
    *(_QWORD *)(v7 + 32) = *(_QWORD *)(a4 + 16);
    *(_QWORD *)v7 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v10[0] = v7;
  v8 = SHTaskPoolQueueTask(1LL, a2, 0LL, 0LL, v7, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
  return v8;
}
