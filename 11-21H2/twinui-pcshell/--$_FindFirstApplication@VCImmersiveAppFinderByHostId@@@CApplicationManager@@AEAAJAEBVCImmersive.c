/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1802DE8F8
 * Callers:
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1802E2C10 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 * Callees:
 *     ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x1800E92E0 (--$GetAppPosition@VCImmersiveAppFinderByHostId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmers.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(__int64 a1, int a2, _QWORD *a3, ...)
{
  __int64 result; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  if ( a3 )
    *a3 = 0LL;
  result = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
             (int)a1 + 624,
             a2,
             (__int64)a3,
             (int)va);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 632) + 8 * v7);
      return (**v6)(v6, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
  }
  return result;
}
