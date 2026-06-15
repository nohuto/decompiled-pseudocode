/*
 * XREFs of ??$AtomicUpdate@V_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@V_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@AEBV_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_@@@Z @ 0x14007CB44
 * Callers:
 *     ??R_lambda_2bcda90c2be21ba0d8fba1c4633a033a_@@QEBAJXZ @ 0x1400811D8 (--R_lambda_2bcda90c2be21ba0d8fba1c4633a033a_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x140081708 (--R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_,_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
