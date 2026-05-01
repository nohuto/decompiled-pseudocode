/*
 * XREFs of ??0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x18078632C
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801CDA58 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__ITaskViewTimelineViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@2345@PE$AAVSwitchItemListViewModel@2345@@Z @ 0x1807865C4 (-CreateInstance@__ITaskViewTimelineViewModelFactory@Switcher@Experiences@Composable_ea_1807865C4.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimelineViewModel::TaskViewTimelineViewModel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD v10[4]; // [rsp+20h] [rbp-10h] BYREF
  void *v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h]

  v10[0] = -147706592;
  v10[1] = 1004406091;
  v10[2] = -569983063;
  v10[3] = 865357291;
  v11 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskViewTimelineViewModel",
                                (struct Platform::Guid *)v10,
                                &v11,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelFactory::CreateInstance(
               v11,
               a2);
  v12 = Instance;
  v7 = __abi_winrt_ptr_ctor(Instance);
  v12 = v7;
  if ( Instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
  v8 = __abi_winrt_ptr_ctor(v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v11 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  return v8;
}
