/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18005DA80
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___ @ 0x18005D9CC (Windows--Internal--ComTaskPool--QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1_____lambda_573cde38f26cc631e17f9a09e8537aa1___ @ 0x180159380 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___--CTaskW.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
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
