/*
 * XREFs of ??R_lambda_894185d22e1b3905ed8eff30edc7892d_@@QEBAJIPEAI@Z @ 0x1800875A0
 * Callers:
 *     ??R_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@QEBAJXZ @ 0x180087620 (--R_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@QEBAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_894185d22e1b3905ed8eff30edc7892d_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
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
