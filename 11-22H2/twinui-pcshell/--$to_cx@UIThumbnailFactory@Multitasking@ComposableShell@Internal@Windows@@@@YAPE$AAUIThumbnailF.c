/*
 * XREFs of ??$to_cx@UIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x18007CDD0
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall to_cx<Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory>(
        __int64 (__fastcall ****a1)(_QWORD, __int64, __int64 *))
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_cast_to(
         0,
         *a1,
         (__int64)&_uuidof__AUIThumbnailFactory_Multitasking_ComposableShell_Internal_Windows__);
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
