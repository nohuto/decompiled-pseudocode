/*
 * XREFs of ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C64F4
 * Callers:
 *     _lambda_f841925b73e0ab0c87901297ab2c4f4d_::operator() @ 0x18005A7E0 (_lambda_f841925b73e0ab0c87901297ab2c4f4d_--operator().c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C02D0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800C3894 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     _lambda_d3c491b51a7e8d1962a232c20ca80fd8_::operator() @ 0x1800C5380 (_lambda_d3c491b51a7e8d1962a232c20ca80fd8_--operator().c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1800C5434 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E7794 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E85AC (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180166DE0 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_44086093bbdca45fc7a1a4ab785b676b_::operator() @ 0x18041198C (_lambda_44086093bbdca45fc7a1a4ab785b676b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v3 = *a1;
    }
    v6 = v3;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  }
  return a1;
}
