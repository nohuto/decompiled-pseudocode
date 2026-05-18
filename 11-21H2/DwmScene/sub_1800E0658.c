/*
 * XREFs of sub_1800E0658 @ 0x1800E0658
 * Callers:
 *     sub_1800E0710 @ 0x1800E0710 (sub_1800E0710.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800DF1C4 @ 0x1800DF1C4 (sub_1800DF1C4.c)
 *     sub_1800DF2D0 @ 0x1800DF2D0 (sub_1800DF2D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800E0658(__int64 a1)
{
  _QWORD *result; // rax
  _OWORD *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-58h]
  __int128 v5; // [rsp+30h] [rbp-48h]
  __int128 v6; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-28h]

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 504) + 128LL))(
                       *(_QWORD *)(a1 + 504),
                       &v6);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v6 )
    {
      v4 = v6;
      v5 = v7;
      v3 = (_OWORD *)sub_1800DF2D0((__int64 *)(a1 + 1648), (unsigned int *)&v6);
      *v3 = v4;
      v3[1] = v5;
      result = (_QWORD *)sub_1800DF1C4((__int64 *)(a1 + 1664), (unsigned int *)&v6 + 2);
      *result = v7;
    }
  }
  return result;
}
