/*
 * XREFs of ??R_lambda_5b90162c3283c8543ba7727952cf2e29_@@QEBAJIPEAI@Z @ 0x18046F90C
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@PEAI@Z @ 0x180470EE0 (-GetMany@-$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V-$Ve.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_5b90162c3283c8543ba7727952cf2e29_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax

  v5 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a1 + 32LL)
                                                                              + 128LL))(
             *(_QWORD *)(**(_QWORD **)a1 + 32LL),
             a2,
             **(unsigned int **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             **(_QWORD **)(a1 + 24));
  if ( (int)result >= 0 )
    *a3 = v5 + ***(_DWORD ***)(a1 + 24);
  return result;
}
