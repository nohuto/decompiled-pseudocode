/*
 * XREFs of sub_180053660 @ 0x180053660
 * Callers:
 *     sub_180052770 @ 0x180052770 (sub_180052770.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180051F74 @ 0x180051F74 (sub_180051F74.c)
 *     sub_180052044 @ 0x180052044 (sub_180052044.c)
 *     sub_180052114 @ 0x180052114 (sub_180052114.c)
 *     sub_1800521E4 @ 0x1800521E4 (sub_1800521E4.c)
 *     sub_1800522B4 @ 0x1800522B4 (sub_1800522B4.c)
 *     sub_180052384 @ 0x180052384 (sub_180052384.c)
 *     sub_180052454 @ 0x180052454 (sub_180052454.c)
 *     sub_180052524 @ 0x180052524 (sub_180052524.c)
 *     sub_180052654 @ 0x180052654 (sub_180052654.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180053660(__int64 a1)
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
  _BYTE v12[16]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+10h] BYREF
  struct _Mtx_internal_imp_t *v14; // [rsp+48h] [rbp+18h]

  v1 = (__int64 *)(a1 + 496);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v14 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 512));
  v13 = _std_type_info_hash(&qword_1801C9630);
  v3 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_180052384(*v3 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180011C7C(v2);
  v13 = _std_type_info_hash(&qword_1801C9668);
  v4 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_180052044(*v4 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180011C7C(v2);
  v13 = _std_type_info_hash(&qword_1801C9550);
  v5 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_180052114(*v5 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180011C7C(v2);
  v13 = _std_type_info_hash(&qword_1801C9588);
  v6 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_1800521E4(*v6 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180011C7C(v2);
  v13 = _std_type_info_hash(&qword_1801C95C0);
  v7 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_180051F74(*v7 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180011C7C(v2);
  v13 = _std_type_info_hash(&qword_1801C8F08);
  v8 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_180052454(*v8 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180011C7C(v2);
  v13 = _std_type_info_hash(&qword_1801C95F8);
  v9 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_180052524(*v9 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180011C7C(v2);
  v13 = _std_type_info_hash(&qword_1801C9518);
  v10 = (_QWORD *)sub_180052654(v1, (__int64)v12, (unsigned __int64 *)&v13);
  sub_1800522B4(*v10 + 40LL);
  return Mtx_unlock(v2);
}
