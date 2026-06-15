/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180040CF8
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25a52f7b70a5b2ddb41b08d731639da5_____lambda_25a52f7b70a5b2ddb41b08d731639da5___ @ 0x180040C5C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_25a52f7b70a5b.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___ @ 0x180057DC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_927672e9d3fcd1dcc3c28ac2b7f193c2___::CTaskWrapper__lambda_927672e9d3fcd1dcc3c28ac2b7f193c2_____lambda_927672e9d3fcd1dcc3c28ac2b7f193c2___ @ 0x180151F90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_927672e9d3fcd1dcc3c28ac2b7f193c2___--CTaskW.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
