/*
 * XREFs of ??R_lambda_7f441b3ad0480de7a84e0f5e20914d30_@@QEBAJIPEAI@Z @ 0x18007E684
 * Callers:
 *     ??R_lambda_c00b2ff9a306de4bec0320420481e79a_@@QEBAJXZ @ 0x18007E844 (--R_lambda_c00b2ff9a306de4bec0320420481e79a_@@QEBAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_7f441b3ad0480de7a84e0f5e20914d30_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
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
