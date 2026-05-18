/*
 * XREFs of sub_180088DF8 @ 0x180088DF8
 * Callers:
 *     sub_180088A60 @ 0x180088A60 (sub_180088A60.c)
 * Callees:
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     sub_180054C80 @ 0x180054C80 (sub_180054C80.c)
 *     sub_18008863C @ 0x18008863C (sub_18008863C.c)
 *     sub_180088674 @ 0x180088674 (sub_180088674.c)
 *     sub_1800888BC @ 0x1800888BC (sub_1800888BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180088DF8(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  unsigned int v9; // ebp
  int v10; // esi
  unsigned int v11; // ebx
  const void *v12; // r10
  size_t v13; // r11
  void *v14; // rcx
  __int64 v15; // r12
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1[14];
  if ( v6 )
    v9 = *(_DWORD *)(v6 + 16);
  else
    v9 = 0;
  v10 = a6;
  if ( a6 == 23 || a6 == 24 )
    v11 = ((a3 + 1) & 0xFFFFFFFE) * sub_1800488C8(a6);
  else
    v11 = a3 * sub_1800488C8(a6);
  v14 = (void *)a1[17];
  if ( v14 )
  {
    if ( v14 == v12 )
      goto LABEL_15;
    if ( (unsigned int)v13 <= v9 )
    {
      sub_18000FF54(v14, v9, v12, v11);
      sub_180054C80(a1 + 15);
      goto LABEL_15;
    }
  }
  v9 = v13;
  v15 = v13;
  v16 = sub_180088674(&v19, v13, v12, v11);
  sub_180011020(a1 + 17, v16);
  if ( v20 )
    sub_180010530(v20);
  sub_1800297B0((__int64)a1, v15, 15);
LABEL_15:
  v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, unsigned int, int, int))(*a1 + 48))(
                     a1,
                     &v21,
                     a3,
                     v11,
                     v9,
                     a5,
                     v10);
  sub_18008863C(a1 + 14, v17);
  sub_1800888BC(&v21);
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
}
