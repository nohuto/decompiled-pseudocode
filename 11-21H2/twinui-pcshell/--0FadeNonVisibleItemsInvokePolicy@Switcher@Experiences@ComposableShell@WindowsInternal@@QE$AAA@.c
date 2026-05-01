/*
 * XREFs of ??0FadeNonVisibleItemsInvokePolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@VRect@Foundation@8@@Z @ 0x1800152A8
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?CreateInstance@__IFadeNonVisibleItemsInvokePolicyFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVFadeNonVisibleItemsInvokePolicy@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@VRect@Foundation@Windows@@@Z @ 0x1800153B8 (-CreateInstance@__IFadeNonVisibleItemsInvokePolicyFactory@Switcher@Experiences@ComposableShell@W.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018E6A4 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::FadeNonVisibleItemsInvokePolicy::FadeNonVisibleItemsInvokePolicy(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h]

  v11[0] = -1246407288;
  v11[1] = 821418333;
  v11[2] = -1314985852;
  v11[3] = 615315765;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.FadeNonVisibleItemsInvokePolicy",
                                v11,
                                (struct Platform::Guid *)&v13,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v12 = *a3;
  v7 = WindowsInternal::ComposableShell::Experiences::Switcher::__IFadeNonVisibleItemsInvokePolicyFactory::CreateInstance(
         v13,
         a2,
         &v12);
  v14 = v7;
  v8 = __abi_winrt_ptr_ctor(v7);
  v14 = v8;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v9 = __abi_winrt_ptr_ctor(v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v9;
}
