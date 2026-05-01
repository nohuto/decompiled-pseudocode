/*
 * XREFs of ?InsertAt@CGlomCollection@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800EA5B0
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800EA614 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ??$_InsertAt@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180153790 (--$_InsertAt@AEBV-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@-$CTSimpleArray@V-$Co.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivationBasedAppAndGlomCollection::CGlomCollection::InsertAt(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // edi
  unsigned int v6; // eax

  v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::_InsertAt<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal> const &>(
         a1,
         a2,
         a3);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 160LL))(*a2);
    if ( v6 >= *(_DWORD *)(a1 + 32) )
      *(_DWORD *)(a1 + 32) = v6 + 1;
  }
  return (unsigned int)v5;
}
