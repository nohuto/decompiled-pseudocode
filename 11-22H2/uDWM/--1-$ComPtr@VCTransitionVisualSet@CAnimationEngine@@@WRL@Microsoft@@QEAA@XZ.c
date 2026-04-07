/*
 * XREFs of ??1?$ComPtr@VCTransitionVisualSet@CAnimationEngine@@@WRL@Microsoft@@QEAA@XZ @ 0x1800AAC54
 * Callers:
 *     _CAnimationEngine::OnTick_::_1_::dtor$1 @ 0x180067FD7 (_CAnimationEngine--OnTick_--_1_--dtor$1.c)
 *     _CAnimationEngine::StopAnimations_::_1_::dtor$0 @ 0x180067FE9 (_CAnimationEngine--StopAnimations_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAnimationEngine::CTransitionVisualSet>::~ComPtr<CAnimationEngine::CTransitionVisualSet>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
  }
  return result;
}
