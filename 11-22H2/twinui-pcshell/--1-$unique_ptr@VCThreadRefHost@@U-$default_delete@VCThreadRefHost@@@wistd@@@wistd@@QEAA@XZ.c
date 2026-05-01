/*
 * XREFs of ??1?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAA@XZ @ 0x18048A020
 * Callers:
 *     _CImmersiveShellCreationBehavior::CImmersiveShellCreationBehavior_::_1_::dtor$1 @ 0x1802C54E1 (_CImmersiveShellCreationBehavior--CImmersiveShellCreationBehavior_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::~unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
