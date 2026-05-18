/*
 * XREFs of sub_18001568C @ 0x18001568C
 * Callers:
 *     sub_1800159F4 @ 0x1800159F4 (sub_1800159F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 *     sub_180017754 @ 0x180017754 (sub_180017754.c)
 *     sub_1800179B4 @ 0x1800179B4 (sub_1800179B4.c)
 *     sub_180017C00 @ 0x180017C00 (sub_180017C00.c)
 *     sub_180017CC8 @ 0x180017CC8 (sub_180017CC8.c)
 *     sub_180017DEC @ 0x180017DEC (sub_180017DEC.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180020220 @ 0x180020220 (sub_180020220.c)
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_1800348FC @ 0x1800348FC (sub_1800348FC.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 *     sub_180036F90 @ 0x180036F90 (sub_180036F90.c)
 *     sub_180063DC8 @ 0x180063DC8 (sub_180063DC8.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_18001568C(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  bool v24; // di
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *result; // rax
  __int64 *v29; // rcx
  __int64 v30; // rdi
  void (__fastcall *v31)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // [rsp+30h] [rbp-1D8h] BYREF
  _BYTE v38[8]; // [rsp+38h] [rbp-1D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-1C8h]
  _QWORD *v40; // [rsp+48h] [rbp-1C0h]
  int v41; // [rsp+50h] [rbp-1B8h]
  _QWORD *v42; // [rsp+58h] [rbp-1B0h]
  _OWORD v43[2]; // [rsp+60h] [rbp-1A8h] BYREF
  _OWORD v44[2]; // [rsp+80h] [rbp-188h] BYREF
  _QWORD *v45; // [rsp+A0h] [rbp-168h]
  _QWORD *v46; // [rsp+A8h] [rbp-160h]
  Spectre::Utils::SpectreException *v47; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-140h] BYREF
  _BYTE v50[8]; // [rsp+D8h] [rbp-130h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-128h]
  _BYTE v52[96]; // [rsp+E8h] [rbp-120h] BYREF
  _BYTE v53[96]; // [rsp+148h] [rbp-C0h] BYREF
  _OWORD v54[2]; // [rsp+1A8h] [rbp-60h] BYREF

  v45 = a3;
  v46 = a4;
  v42 = a5;
  v40 = a5;
  v9 = 0;
  v41 = 0;
  if ( sub_180011DD0(a3) )
  {
    v10 = (__int64 *)sub_180020220(v38);
    v11 = *v10;
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    *a3 = v11;
    v13 = a3[1];
    a3[1] = v12;
    if ( v13 )
      sub_180010530(v13);
    if ( v39 )
      sub_180010530(v39);
  }
  v14 = sub_18001C190(1632LL);
  try
  {
    v37 = v14;
    if ( v14 )
    {
      sub_18001246C(&v48, a5);
      sub_18001246C(&v49, a4);
      v15 = (unsigned int)sub_18001246C(v44, a3);
      v19 = sub_180063DC8(v18, *(_DWORD *)(a2 + 20), v15, v17, v16);
    }
    else
    {
      v19 = 0LL;
    }
    v37 = v19;
    v20 = sub_1800344A0(v19, v54);
    sub_180017C00(&qword_1801D3ED8, v20);
    sub_180011B24((__int64)v54);
    *(_OWORD *)(v19 + 528) = *(_OWORD *)a2;
    *(_OWORD *)(v19 + 544) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v19 + 560) = *(_QWORD *)(a2 + 32);
    sub_180017CC8(v19 + 568, a2 + 40);
    *(_OWORD *)(v19 + 664) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(v19 + 680) = *(_OWORD *)(a2 + 152);
    v43[0] = *(_OWORD *)(a2 + 136);
    v54[0] = *(_OWORD *)(a2 + 152);
    v21 = sub_180017754(v52, a2 + 40);
    v43[1] = v54[0];
    sub_180015C10(v19, v50, v21, v43);
    sub_180034A40(v19, a2);
    if ( (unsigned __int8)sub_180017DEC(
                            &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
                            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor') )
    {
      v54[0] = *(_OWORD *)(a2 + 136);
      v43[0] = *(_OWORD *)(a2 + 152);
      v22 = sub_180017754(v53, a2 + 40);
      v44[0] = v54[0];
      v44[1] = v43[0];
      sub_180015AE0(v19, v54, v22, v44);
      if ( *((_QWORD *)&v54[0] + 1) )
        sub_180010530(*((__int64 *)&v54[0] + 1));
    }
    sub_18003678C(v19);
    v24 = 0;
    if ( *(_BYTE *)(a2 + 28) )
    {
      v23 = (_QWORD *)sub_1800348FC(v19, v54);
      v9 = 1;
      if ( sub_180011DE0(v23) )
        v24 = 1;
    }
    if ( (v9 & 1) != 0 && *((_QWORD *)&v54[0] + 1) )
      sub_180010530(*((__int64 *)&v54[0] + 1));
    if ( v24 )
      sub_180036F90(v19);
    v37 = 0LL;
    *a1 = v19;
    if ( v51 )
      sub_180010530(v51);
    sub_1800179B4(&v37);
    v25 = a3[1];
    if ( v25 )
      sub_180010530(v25);
    v26 = a4[1];
    if ( v26 )
      sub_180010530(v26);
    v27 = v42[1];
    if ( v27 )
      sub_180010530(v27);
    result = a1;
  }
  catch ( Spectre::Utils::SpectreException *v47 )
  {
    if ( sub_180011DE0(v40) )
    {
      v30 = *v29;
      v31 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)*v29 + 24LL);
      v32 = (*(__int64 (__fastcall **)(Spectre::Utils::SpectreException *))(*(_QWORD *)v47 + 8LL))(v47);
      v35 = sub_18003476C(v34, v33, v32);
      v31(v30, 0LL, v36, v35);
    }
    throw;
  }
  return result;
}
