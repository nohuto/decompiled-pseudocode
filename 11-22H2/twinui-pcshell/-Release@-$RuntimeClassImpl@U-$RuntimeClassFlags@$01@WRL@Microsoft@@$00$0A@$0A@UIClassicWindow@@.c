/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180132CA0
 * Callers:
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x1800D5D3C (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ??$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindow@@@12@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800D5DFC (--$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CL.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // edx
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)a1 + 3) )
  {
    if ( i == _InterlockedCompareExchange(a1 + 3, i - 1, i) )
      break;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 240LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
