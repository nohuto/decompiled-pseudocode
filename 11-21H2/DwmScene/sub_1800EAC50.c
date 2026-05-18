/*
 * XREFs of sub_1800EAC50 @ 0x1800EAC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180096E78 @ 0x180096E78 (sub_180096E78.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 sub_1800EAC50(__int64 a1, __int64 *a2, unsigned int a3, int a4, ...)
{
  __int64 *v6; // rdx
  char v7; // bl
  __int64 v8; // rdi
  __int64 v9; // rbx
  _BYTE v11[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  _QWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  int v16; // [rsp+A8h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+40h] BYREF

  va_start(va, a4);
  v16 = a4;
  LODWORD(v15) = 0;
  if ( *a2 )
  {
    v6 = sub_180096E78(*a2, v14, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v12 = 0LL;
    v6 = (__int64 *)v11;
    v7 = 2;
    v8 = 0LL;
  }
  v13[0] = v8;
  v13[1] = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    sub_180010910((__int64)v11);
  }
  if ( (v7 & 1) != 0 )
    sub_180010910((__int64)v14);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 104);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v8 + 104));
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v15 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, char *, int *))(**(_QWORD **)(a1 + 144) + 144LL))(
    *(_QWORD *)(a1 + 144),
    a3,
    1LL,
    &v15,
    va,
    &v16);
  return sub_180010910((__int64)v13);
}
