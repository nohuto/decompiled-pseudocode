/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1cd5aad941324031a7770e11832089b3___ @ 0x18006AC08
 * Callers:
 *     _lambda_52036531a809c6efb737b3592d012028_::operator() @ 0x18006B260 (_lambda_52036531a809c6efb737b3592d012028_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800D83BC (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1cd5aad941324031a7770e11832089b3___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *i; // rdi
  int v8; // eax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                                  + 32LL))(
           g_DeviceGraphManager,
           *i,
           *a4,
           0LL,
           0LL);
    if ( v8 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        33LL,
        &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids,
        (unsigned int)v8);
    }
  }
  ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a1, a4);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a4);
  return a1;
}
