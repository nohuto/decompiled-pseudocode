/*
 * XREFs of ??1?$lambda_call@V_lambda_12abaff33ac527a70ddc02944390cf89_@@@details@wil@@QEAA@XZ @ 0x180028ECC
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180040AE0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>::~lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    RemoveDirectoryW(**(LPCWSTR **)a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 56LL))(
             *(_QWORD *)(a1 + 8) + 48LL,
             **(_QWORD **)(a1 + 16));
  }
  return result;
}
