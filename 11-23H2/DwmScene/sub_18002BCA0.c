/*
 * XREFs of sub_18002BCA0 @ 0x18002BCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800742F0 @ 0x1800742F0 (sub_1800742F0.c)
 *     sub_1800A0F9C @ 0x1800A0F9C (sub_1800A0F9C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002BCA0(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // bl
  char v9; // r14
  char v10; // r15
  char v11; // r12
  char v12; // r13
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  _BYTE v21[8]; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  char v24; // [rsp+80h] [rbp+8h]
  char v25; // [rsp+90h] [rbp+18h]

  v4 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v21);
  result = sub_180011C50(v4, &v19);
  if ( v22 )
    result = sub_180010574(v22);
  if ( v19 )
  {
    v6 = sub_180026618(v19);
    v7 = sub_180034094(v6, a2);
    v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D4728, 0LL);
    v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D4748, 0LL);
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D4668, 0LL);
    v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D4688, 0LL);
    v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D46A8, 0LL);
    v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D46C8, 0LL);
    v25 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D46E8, 0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D4708, 0LL);
    v14 = v8 && !v9;
    if ( v10 )
      v14 = (unsigned int)v14 | 2;
    if ( v11 )
      v14 = (unsigned int)v14 | 4;
    if ( v12 )
      v14 = (unsigned int)v14 | 8;
    if ( v24 )
      v14 = (unsigned int)v14 | 0x40;
    if ( v25 )
      v14 = (unsigned int)v14 | 0x10;
    if ( v13 )
      v14 = (unsigned int)v14 | 0x20;
    sub_1800742F0(a1[57], v19, v14);
    v15 = a1[55];
    v16 = a1[60];
    v17 = (_QWORD *)sub_180026580(v19);
    v18 = sub_18001246C(&v23, v17);
    result = sub_1800A0F9C(v15, v18, v16);
  }
  if ( v20 )
    return sub_180010530(v20);
  return result;
}
