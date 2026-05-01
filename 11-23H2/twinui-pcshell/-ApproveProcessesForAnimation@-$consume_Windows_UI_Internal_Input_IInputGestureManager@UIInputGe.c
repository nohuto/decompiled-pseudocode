/*
 * XREFs of ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x1801B7940
 * Callers:
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007FC60 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800E4020 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421040 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::ApproveProcessesForAnimation(
        __int64 *a1,
        __m128i *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax

  v2 = *a1;
  v3 = 4LL;
  if ( _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8)) )
    v3 = a2->m128i_i64[0];
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v2 + 112LL))(v2, a2->m128i_u32[2], v3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
