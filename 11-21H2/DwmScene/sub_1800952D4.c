/*
 * XREFs of sub_1800952D4 @ 0x1800952D4
 * Callers:
 *     sub_180068BC0 @ 0x180068BC0 (sub_180068BC0.c)
 * Callees:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_18005C3E0 @ 0x18005C3E0 (sub_18005C3E0.c)
 *     sub_18009B310 @ 0x18009B310 (sub_18009B310.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800952D4(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1[6];
  if ( v4 )
    sub_18005C3E0(v4, a2);
  v5 = a1[8];
  if ( v5 )
    sub_18005C3E0(v5, a2);
  v6 = a1[10];
  if ( v6 )
    sub_18005C3E0(v6, a2);
  v7 = a1[12];
  if ( v7 )
    sub_18005C3E0(v7, a2);
  v8 = a1[22];
  if ( v8 )
    sub_18009B310(v8, a2);
  v12 = a2;
  result = sub_18002B024(a1 + 60, &v12);
  v10 = a1 + 48;
  v11 = a1 + 60;
  while ( v10 != v11 )
  {
    if ( *v10 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(*v10, a2);
    v10 += 2;
  }
  return result;
}
