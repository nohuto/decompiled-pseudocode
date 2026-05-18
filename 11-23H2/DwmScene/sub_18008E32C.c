/*
 * XREFs of sub_18008E32C @ 0x18008E32C
 * Callers:
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008E32C(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v7; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  char v9; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  _BYTE v11[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  sub_18001246C(&v7, (_QWORD *)(a1 + 152));
  if ( sub_180011DE0(&v7) )
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 48LL))(v7, v11);
    v4 = *v3;
    v5 = 5;
  }
  else
  {
    v10 = 0LL;
    v3 = (__int64 *)&v9;
    v4 = 0LL;
    v5 = 6;
  }
  *a2 = v4;
  a2[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v10 )
      sub_180010530(v10);
  }
  if ( (v5 & 1) != 0 && v12 )
    sub_180010530(v12);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
