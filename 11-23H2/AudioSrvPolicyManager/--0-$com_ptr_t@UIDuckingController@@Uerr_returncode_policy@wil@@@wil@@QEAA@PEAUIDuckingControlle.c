/*
 * XREFs of ??0?$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingController@@@Z @ 0x18001FF9C
 * Callers:
 *     ??0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x180020048 (--0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV-$shared_ptr@VDuckingDescrip.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800221B8 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Copy @ 0x180022DA0 (std--_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Copy @ 0x180022E60 (std--_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_--_Copy.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
