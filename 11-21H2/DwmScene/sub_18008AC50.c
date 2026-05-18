/*
 * XREFs of sub_18008AC50 @ 0x18008AC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18004A0D8 @ 0x18004A0D8 (sub_18004A0D8.c)
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     sub_18005221C @ 0x18005221C (sub_18005221C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008AC50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // r8
  __int64 v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_1800520F8(a2, (__int64)v13);
  if ( (unsigned __int8)sub_18004A0D8(v13[0], v5, v6) )
  {
    v7 = sub_18002850C(a3);
    v8 = sub_180036808(v7, 1);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &qword_1801F8938, 0LL);
  }
  v9 = sub_18005221C(a2, v14);
  sub_18004E560(*v9, v10, v11);
  sub_180010910((__int64)v14);
  return sub_180010910((__int64)v13);
}
