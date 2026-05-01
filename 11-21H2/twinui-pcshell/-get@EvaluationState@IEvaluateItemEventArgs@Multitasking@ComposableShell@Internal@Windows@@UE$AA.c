/*
 * XREFs of ?get@EvaluationState@IEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4SwitchItemInclusion@3456@XZ @ 0x18043F670
 * Callers:
 *     ??R_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEBAXPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Z @ 0x18042FBA4 (--R_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEBAXPE$AAUISwitchItemDataView@Multitasking@Compos.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs::EvaluationState::get(
        __int64 a1)
{
  int v1; // eax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v1 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v3);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  return v3;
}
