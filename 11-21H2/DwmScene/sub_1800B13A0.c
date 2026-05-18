/*
 * XREFs of sub_1800B13A0 @ 0x1800B13A0
 * Callers:
 *     sub_1800B1CA0 @ 0x1800B1CA0 (sub_1800B1CA0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B13A0(__int64 a1, __int64 a2)
{
  __int64 v3; // xmm1_8
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 80)
    || *(float *)(a1 + 32) != *(float *)(a1 + 8)
    || *(float *)(a1 + 36) != *(float *)(a1 + 12)
    || *(float *)(a1 + 40) != *(float *)(a1 + 16)
    || *(float *)(a1 + 44) != *(float *)(a1 + 20)
    || *(float *)(a1 + 48) != *(float *)(a1 + 24)
    || *(float *)(a1 + 52) != *(float *)(a1 + 28) )
  {
    v3 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 48) = v3;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 184LL))(a2);
  }
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}
