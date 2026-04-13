/*
 * XREFs of ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008FFAC
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x180091228 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVTargetedContentTriggerInternal@Internal@Targ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180096BA0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a2);
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
