/*
 * XREFs of ??4?$ComPtr@UISIPCEndpoint@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D1C0C
 * Callers:
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800D1D1C (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x180168924 (-Get@-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Int.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x180168A30 (-Get@-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEA.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18016DCC8 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<ISIPCEndpoint>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx

  v3 = *a1;
  v4 = *a2;
  if ( v3 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*a2);
      v3 = *a1;
    }
    *a1 = v4;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a1;
}
