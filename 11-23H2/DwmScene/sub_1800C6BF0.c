/*
 * XREFs of sub_1800C6BF0 @ 0x1800C6BF0
 * Callers:
 *     sub_1800C4174 @ 0x1800C4174 (sub_1800C4174.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180052654 @ 0x180052654 (sub_180052654.c)
 *     sub_1800C207C @ 0x1800C207C (sub_1800C207C.c)
 *     sub_1800C214C @ 0x1800C214C (sub_1800C214C.c)
 *     sub_1800C221C @ 0x1800C221C (sub_1800C221C.c)
 *     sub_1800C22EC @ 0x1800C22EC (sub_1800C22EC.c)
 *     sub_1800C23BC @ 0x1800C23BC (sub_1800C23BC.c)
 *     sub_1800C248C @ 0x1800C248C (sub_1800C248C.c)
 *     sub_1800C255C @ 0x1800C255C (sub_1800C255C.c)
 *     sub_1800C262C @ 0x1800C262C (sub_1800C262C.c)
 *     sub_1800C26FC @ 0x1800C26FC (sub_1800C26FC.c)
 *     sub_1800C27CC @ 0x1800C27CC (sub_1800C27CC.c)
 *     sub_1800C289C @ 0x1800C289C (sub_1800C289C.c)
 *     sub_1800C296C @ 0x1800C296C (sub_1800C296C.c)
 *     sub_1800C2A3C @ 0x1800C2A3C (sub_1800C2A3C.c)
 *     sub_1800C2B0C @ 0x1800C2B0C (sub_1800C2B0C.c)
 *     sub_1800C2BDC @ 0x1800C2BDC (sub_1800C2BDC.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800C2D7C @ 0x1800C2D7C (sub_1800C2D7C.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800C6BF0(__int64 a1)
{
  __int64 *v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+40h] [rbp+10h] BYREF
  struct _Mtx_internal_imp_t *v23; // [rsp+48h] [rbp+18h]

  v1 = (__int64 *)(a1 + 496);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v23 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 512));
  v22 = _std_type_info_hash(&qword_1801C8FD8);
  v3 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C207C(*v3 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9BC8);
  v4 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C248C(*v4 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9518);
  v5 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C296C(*v5 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9588);
  v6 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C2A3C(*v6 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C8F08);
  v7 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C22EC(*v7 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C95F8);
  v8 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C2B0C(*v8 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C8C30);
  v9 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C2D7C(*v9 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9630);
  v10 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C2BDC(*v10 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9CB0);
  v11 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C255C(*v11 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9550);
  v12 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C2CAC(*v12 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C95C0);
  v13 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C262C(*v13 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9668);
  v14 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C26FC(*v14 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9C00);
  v15 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C27CC(*v15 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9C78);
  v16 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C214C(*v16 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9C40);
  v17 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C289C(*v17 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C9B48);
  v18 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C221C(*v18 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180011C7C(v2);
  v22 = _std_type_info_hash(&qword_1801C8FA8);
  v19 = (_QWORD *)sub_180052654(v1, (__int64)v21, (unsigned __int64 *)&v22);
  sub_1800C23BC(*v19 + 40LL);
  return Mtx_unlock(v2);
}
