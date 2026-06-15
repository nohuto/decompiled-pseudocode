/*
 * XREFs of _CxxThrowException_0 @ 0x180047674
 * Callers:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015BF0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1800198B4 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x180019A50 (-ResultFromCaughtExceptionInternal@details@wil@@YA-AUResultStatus@12@PEAG_KPEA_N@Z.c)
 *     ?Rethrow@details@wil@@YAXXZ @ 0x180019BD0 (-Rethrow@details@wil@@YAXXZ.c)
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18001A4A0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::catch$0 @ 0x1800489ED (_std--vector_CLockedList_CDuckingNotification_1_0_--LockedListEntry_std--allocator_CLockedList_C.c)
 *     _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_&__::_1_::catch$0 @ 0x180048F02 (_std--vector_unsigned_long_std--allocator_unsigned_long___--_Emplace_reallocate_unsigned_long_-_.c)
 *     _std::vector_CApplication___std::allocator_CApplication_____::_Emplace_reallocate_CApplication___&__::_1_::catch$0 @ 0x180048F30 (_std--vector_CApplication___std--allocator_CApplication_____--_Emplace_reallocate_CApplication__.c)
 *     _ATL::CAtlMap_IUnknown___wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy__ATL::CElementTraits_IUnknown____ATL::CElementTraits_wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy_____::NewNode_::_1_::catch$0 @ 0x18004916F (_ATL--CAtlMap_IUnknown___wil--com_ptr_t_IAudioProcessNotification_wil--err_returnco_ea_18004916F.c)
 *     _ATL::CAtlMap_IUnknown___wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy__ATL::CElementTraits_IUnknown____ATL::CElementTraits_wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy_____::SetAt_::_1_::catch$1 @ 0x18004931C (_ATL--CAtlMap_IUnknown___wil--com_ptr_t_IAudioProcessNotification_wil--err_returnco_ea_18004931C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
