/*
 * XREFs of _lambda_7800ae632c03a9c3e8babfed67b18905_::operator() @ 0x18006B458
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7800ae632c03a9c3e8babfed67b18905___ @ 0x18006ADC0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006ADC0.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_7800ae632c03a9c3e8babfed67b18905_::operator()(_QWORD **a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD); // rsi
  char v5; // al
  int v6; // eax

  v4 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 32LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 248LL))(*a2);
  v6 = v4(g_DeviceGraphManager, *a2, **a1, v5 == 0, 0LL);
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper(
      "CAudioResourceManager::GetSaDeviceForSharedStream::<lambda_7800ae632c03a9c3e8babfed67b18905>::operator ()",
      2182,
      v6);
}
