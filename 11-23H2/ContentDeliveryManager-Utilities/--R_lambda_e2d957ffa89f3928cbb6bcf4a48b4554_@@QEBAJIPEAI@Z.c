/*
 * XREFs of ??R_lambda_e2d957ffa89f3928cbb6bcf4a48b4554_@@QEBAJIPEAI@Z @ 0x18002E4E4
 * Callers:
 *     ??R_lambda_370198c38e40afa513502561f37c5943_@@QEBAJXZ @ 0x18002CE48 (--R_lambda_370198c38e40afa513502561f37c5943_@@QEBAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_e2d957ffa89f3928cbb6bcf4a48b4554_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
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
