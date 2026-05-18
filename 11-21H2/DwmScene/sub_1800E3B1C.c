/*
 * XREFs of sub_1800E3B1C @ 0x1800E3B1C
 * Callers:
 *     sub_1800198B0 @ 0x1800198B0 (sub_1800198B0.c)
 *     sub_1800E3AA8 @ 0x1800E3AA8 (sub_1800E3AA8.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 * Callees:
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800E3B1C(_QWORD *a1, char *a2, char *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // [rsp+40h] [rbp+8h] BYREF
  char *v17; // [rsp+48h] [rbp+10h]
  char *v18; // [rsp+50h] [rbp+18h]

  v18 = a3;
  v17 = a2;
  v8 = 0LL;
  if ( &v16 != a2 )
  {
    v8 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v9 = a1[21];
  a1[21] = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = 0LL;
  if ( &v16 != a3 )
  {
    v10 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  v11 = a1[20];
  a1[20] = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = a1[22];
  if ( v12 )
  {
    a1[22] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  result = sub_1800E657C(a1, a4);
  v14 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)a3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return result;
}
