/*
 * XREFs of ??1?$MakeAllocator@VCDuckingManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180008854
 * Callers:
 *     _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$10 @ 0x180044AB1 (_CWindowsPolicyManager--RuntimeClassInitialize_--_1_--dtor$10.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager___&_CProcess____::_1_::dtor$0 @ 0x1800450C1 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CW.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$16 @ 0x180045543 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$16.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplication_CApplication_unsigned_short_const___&_unsigned___int64_&_unsigned_long_&__::_1_::dtor$0 @ 0x1800456F5 (_Microsoft--WRL--Details--MakeAndInitialize_CApplication_CApplication_unsigned_short_const___-_u.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CProcess_CProcess_void___unsigned_long_&_unsigned_long_&_unsigned_short___unsigned_short___unsigned___int64_&_unsigned_short___bool_unsigned_short___bool_&_bool_&_int_&_int_&_int_&_int_&_int_&_int_&_bool_&_int_&_int_&__::_1_::dtor$0 @ 0x18004573C (_Microsoft--WRL--Details--MakeAndInitialize_CProcess_CProcess_void___unsigned_long_-_unsigned_lo.c)
 *     _TSSession::Create_::_1_::dtor$3 @ 0x180045EEB (_TSSession--Create_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CDuckingManager>::~MakeAllocator<CDuckingManager>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
