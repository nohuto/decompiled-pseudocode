/*
 * XREFs of ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x14002A0CC
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessEventManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14002A060.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rbx
  unsigned int Interface; // edi

  *a1 = 0LL;
  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  if ( v2 )
  {
    v2[3] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICrossProcessEventManager>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &CStandardCrossProcessEventManager::`vftable';
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICrossProcessEventManager>::QueryInterface(
                  v3,
                  &GUID_c4e70434_407d_416b_94be_9717b79065fb,
                  a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
