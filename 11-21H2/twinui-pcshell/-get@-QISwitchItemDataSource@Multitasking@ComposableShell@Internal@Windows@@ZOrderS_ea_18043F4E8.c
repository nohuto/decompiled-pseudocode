/*
 * XREFs of ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@UE$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x18043F4E8
 * Callers:
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x180202760 (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchIte.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@ZOrderSort@ISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItemSort@3456@XZ @ 0x18043F9B4 (-get@ZOrderSort@ISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__ZOrderSort_SwitchItemDataViewImpl_2345_UE_AAAPE_AAUISwitchItemSort_2345_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  if ( !*(_QWORD *)(a1 + 88) )
    return 0LL;
  v1 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource::ZOrderSort::get();
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
