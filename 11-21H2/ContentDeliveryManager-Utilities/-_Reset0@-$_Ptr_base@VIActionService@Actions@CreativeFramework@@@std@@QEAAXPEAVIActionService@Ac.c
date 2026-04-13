/*
 * XREFs of ?_Reset0@?$_Ptr_base@VIActionService@Actions@CreativeFramework@@@std@@QEAAXPEAVIActionService@Actions@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800C8200
 * Callers:
 *     ??$_Resetp@VLaunchUriService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVLaunchUriService@Actions@CreativeFramework@@@Z @ 0x1800C3278 (--$_Resetp@VLaunchUriService@Actions@CreativeFramework@@@-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ??$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVSetLockScreenHotspotsService@Actions@CreativeFramework@@@Z @ 0x1800CF198 (--$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@-$shared_ptr@VIActionServic.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ptr_base<CreativeFramework::Actions::IActionService>::_Reset0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax

  v3 = (volatile signed __int32 *)a1[1];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  a1[1] = a3;
  *a1 = a2;
  return result;
}
