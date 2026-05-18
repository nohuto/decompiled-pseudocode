/*
 * XREFs of sub_18006B8F4 @ 0x18006B8F4
 * Callers:
 *     sub_180064E40 @ 0x180064E40 (sub_180064E40.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180066CA0 @ 0x180066CA0 (sub_180066CA0.c)
 *     sub_1800930C0 @ 0x1800930C0 (sub_1800930C0.c)
 *     sub_1800930E4 @ 0x1800930E4 (sub_1800930E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_18006B8F4(__int64 a1, __int64 *a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  __int64 v9; // rdi
  float v10; // xmm6_4
  __int64 v11; // rcx
  float v12; // xmm2_4
  int v13; // xmm1_4
  __int64 v14; // rbx
  float v15; // xmm0_4
  __int64 v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF

  result = &retaddr;
  if ( *a2 )
  {
    sub_180011C50(*a2 + 56, &v17);
    sub_18001265C(v17, &v19);
    if ( v18 )
      sub_180010530(v18);
    v9 = sub_180034094(a1, *(_DWORD *)(v19 + 112));
    v17 = 0x3F8000003F800000LL;
    LODWORD(v18) = 1065353216;
    v10 = 0.0;
    result = (_UNKNOWN **)sub_180066CA0(v11, &v23, &v19);
    if ( v23 )
    {
      sub_180013E14(v23, &v21);
      result = (_UNKNOWN **)v21;
      if ( v21 )
      {
        v12 = *(float *)(v21 + 104);
        v10 = v12 + v12;
        v13 = *(_DWORD *)(v21 + 108);
        LODWORD(v17) = *(_DWORD *)(v21 + 100);
        *((float *)&v17 + 1) = v12;
        LODWORD(v18) = v13;
      }
      if ( v22 )
        result = (_UNKNOWN **)sub_180010530(v22);
    }
    if ( v24 )
      result = (_UNKNOWN **)sub_180010530(v24);
    if ( a3 )
    {
      v14 = *a2;
      v15 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 88LL))(v9, qword_1801D67E8);
      LODWORD(v17) = 0;
      *((float *)&v17 + 1) = v15 * v10;
      LODWORD(v18) = 0;
      result = (_UNKNOWN **)sub_1800930C0(v14, &v17);
    }
    if ( a4 )
    {
      v16 = *a2;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 88LL))(v9, qword_1801D6908);
      result = (_UNKNOWN **)sub_1800930E4(v16);
    }
    if ( v20 )
      return (_UNKNOWN **)sub_180010530(v20);
  }
  return result;
}
