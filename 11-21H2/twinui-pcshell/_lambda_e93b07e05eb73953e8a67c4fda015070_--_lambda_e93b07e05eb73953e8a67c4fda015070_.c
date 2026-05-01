/*
 * XREFs of _lambda_e93b07e05eb73953e8a67c4fda015070_::_lambda_e93b07e05eb73953e8a67c4fda015070_ @ 0x1800A32C8
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800A2F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800718C4 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_1800718C4.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x1800A3714 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_e93b07e05eb73953e8a67c4fda015070_::_lambda_e93b07e05eb73953e8a67c4fda015070_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        const struct ExperienceManagerUtils::CopyableHString *a4,
        __int64 a5)
{
  __int64 v8; // rcx

  v8 = *a2;
  *a1 = *a2;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  a1[1] = a3;
  ExperienceManagerUtils::CopyableHString::CopyableHString((ExperienceManagerUtils::CopyableHString *)(a1 + 2), a4);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 4),
    a5);
  a1[4] = (__int64)&SingleViewExperienceTelemetry::Launch::`vftable';
  return a1;
}
