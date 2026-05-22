/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014CD0
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180040270 (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18006B430 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_18006B430.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18006B450 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_18006B450.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18006B470 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_18006B470.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x18006B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_18006B490.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18006B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_18006B4B0.c)
 *     ??1?$ComPtr@VMPCMouseProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E6614 (--1-$ComPtr@VMPCMouseProcessor@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::Release(
        __int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *(unsigned int *)(a1 + 3676);
  while ( (_DWORD)v2 != 0x7FFFFFFF
       && (_DWORD)v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3676), v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 16) + 56LL))(
        a1 + 16,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
