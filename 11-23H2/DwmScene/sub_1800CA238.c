/*
 * XREFs of sub_1800CA238 @ 0x1800CA238
 * Callers:
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800C891C @ 0x1800C891C (sub_1800C891C.c)
 *     sub_1800C8A10 @ 0x1800C8A10 (sub_1800C8A10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CA238(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-58h]
  _BYTE v7[16]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h]

  result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 504) + 128LL))(*(_QWORD *)(a1 + 504), &v8);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v8 )
    {
      v6 = v9;
      v3 = v8;
      v4 = *(_QWORD *)sub_1800C8A10((__int64 *)(a1 + 1648), (__int64)v7, (unsigned int *)&v8);
      *(_OWORD *)(v4 + 40) = v3;
      *(_OWORD *)(v4 + 56) = v6;
      v5 = *(_QWORD *)sub_1800C891C((__int64 *)(a1 + 1664), (__int64)v7, (unsigned int *)&v8 + 2);
      result = v9;
      *(_QWORD *)(v5 + 40) = v9;
    }
  }
  return result;
}
