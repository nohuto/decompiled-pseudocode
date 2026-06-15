/*
 * XREFs of _lambda_7b8e2becd319044560765d93cfe1c665_::operator() @ 0x18006B4FC
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7b8e2becd319044560765d93cfe1c665___ @ 0x18006AE1C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006AE1C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

__int64 __fastcall lambda_7b8e2becd319044560765d93cfe1c665_::operator()(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD); // rsi
  char v5; // al
  __int64 result; // rax

  v4 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 32LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 248LL))(*a2);
  result = v4(g_DeviceGraphManager, *a2, *a1, v5 == 0, 0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             34LL,
             &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids,
             (unsigned int)result);
  }
  return result;
}
