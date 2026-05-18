/*
 * XREFs of sub_18005D5BC @ 0x18005D5BC
 * Callers:
 *     sub_1800E2B34 @ 0x1800E2B34 (sub_1800E2B34.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18005DEB4 @ 0x18005DEB4 (sub_18005DEB4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005D5BC(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rbx
  __int64 v5; // rax
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-48h] BYREF
  char *v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-20h]

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  v5 = sub_18005DEB4(v7, a2, 0LL, 0LL);
  result = v4(a1, a2, v5);
  if ( v8 )
    return sub_180010884(v8, (v9 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFE0uLL);
  return result;
}
