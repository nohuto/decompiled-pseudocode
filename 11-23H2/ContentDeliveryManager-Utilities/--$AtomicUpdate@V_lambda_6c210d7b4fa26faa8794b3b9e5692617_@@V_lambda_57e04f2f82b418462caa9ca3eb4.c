/*
 * XREFs of ??$AtomicUpdate@V_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@AEBV_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@Z @ 0x18007A8E4
 * Callers:
 *     ??$Do@V_lambda_660cab06c15ab3e981810d6687fee6df_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_660cab06c15ab3e981810d6687fee6df_@@AEBV_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@Z @ 0x18007B0D4 (--$Do@V_lambda_660cab06c15ab3e981810d6687fee6df_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@-.c)
 * Callees:
 *     ??R_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@QEBA@XZ @ 0x18007DFD8 (--R_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@QEBA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6c210d7b4fa26faa8794b3b9e5692617_,_lambda_57e04f2f82b418462caa9ca3eb4aec1f_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v3 = *a1;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a2 + 64LL)
                                                                           + 128LL))(
           *(_QWORD *)(**(_QWORD **)a2 + 64LL),
           v3,
           **(unsigned int **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24));
    v8 = (unsigned int)v7;
    if ( v7 < 0 )
      break;
    v10 = _InterlockedCompareExchange(a1, v3 + ***(_DWORD ***)(a2 + 24), v3);
    v9 = v3 == v10;
    v3 = v10;
    if ( v9 )
      break;
    _lambda_57e04f2f82b418462caa9ca3eb4aec1f_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
