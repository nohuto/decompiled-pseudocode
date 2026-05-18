/*
 * XREFs of sub_18003B9D0 @ 0x18003B9D0
 * Callers:
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 *     sub_180015190 @ 0x180015190 (sub_180015190.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o___std_type_info_name @ 0x18000BEFE (_o___std_type_info_name.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18001E8C0 @ 0x18001E8C0 (sub_18001E8C0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_18003D980 @ 0x18003D980 (sub_18003D980.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18003EE84 @ 0x18003EE84 (sub_18003EE84.c)
 *     sub_1800403BC @ 0x1800403BC (sub_1800403BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_18003B9D0(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r10
  _QWORD *v15; // r12
  _QWORD *v16; // r13
  __int64 v17; // rbx
  _QWORD *v18; // rax
  void (__fastcall *v19)(__int64, _OWORD *, __int64 *, _QWORD *); // r11
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  void **v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+38h] [rbp-C8h]
  int v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  _QWORD v44[6]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v45[4]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v46[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v48[7]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v49[4]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v50[4]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v51[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v52[4]; // [rsp+1C0h] [rbp+C0h] BYREF

  v44[4] = a2;
  v44[5] = a4;
  v37 = 0;
  sub_18003E330(a1);
  if ( sub_180011DD0(a4) )
  {
    v8 = sub_180012624(a1, &v42);
    sub_180011020(a4, v8);
    if ( v43 )
      sub_180010530(v43);
  }
  sub_18001265C(a1, &v42);
  sub_18001265C(*a4, &v40);
  if ( sub_180011DD0(&v40) )
  {
    v9 = (__int64 *)sub_18001265C(a1, v46);
    sub_180011020(&v40, v9);
    if ( *((_QWORD *)&v46[0] + 1) )
      sub_180010530(*((__int64 *)&v46[0] + 1));
  }
  if ( *(_QWORD *)(v40 + 104) != *(_QWORD *)(v42 + 104) )
  {
    sub_180010DD0(v46, (__int64)"SceneNode::Clone() -- source and target scenes must belong to the same engine");
    v10 = sub_180010DD0(
            v44,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\scenenode.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v10, v11, (__int64)v46, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180015678(&v40, &v42);
  v12 = sub_18001246C(v46, a4);
  sub_1800403BC(v14, a2, v13, v12);
  v37 = 1;
  *(_QWORD *)(*a2 + 448) = *(_QWORD *)(a1 + 448);
  if ( *a2 + 432 != a1 + 432 )
    sub_18003EE84();
  sub_1800134DC((void **)(*a2 + 400), (void **)(a1 + 400));
  v38 = *(_QWORD *)(a1 + 172);
  v39 = *(_DWORD *)(a1 + 180);
  v46[0] = *(_OWORD *)(a1 + 156);
  v35 = *(_QWORD *)(a1 + 144);
  v36 = *(_DWORD *)(a1 + 152);
  sub_18003D980(*a2, &v35, v46, &v38);
  if ( (a3 & 2) != 0 )
  {
    LODWORD(v35) = a3;
    sub_18003E330(a1);
    v15 = *(_QWORD **)(a1 + 376);
    v16 = *(_QWORD **)(a1 + 384);
    while ( v15 != v16 )
    {
      v17 = *v15;
      v18 = sub_18001246C(v44, a2);
      v19(v17, v46, &v35, v18);
      if ( sub_180011DE0(v46) )
      {
        sub_18003B7C4(*a2, v46);
      }
      else if ( (a3 & 0x10000) == 0 )
      {
        v20 = (_QWORD *)(*v15 + 24LL);
        _RTtypeid();
        v21 = o___std_type_info_name();
        v22 = sub_180010DD0(v49, v21);
        v23 = sub_18001C6E8(v50, (__int64)"SceneNode::Clone() -- component type ", v22);
        v24 = (void **)sub_18001C61C(v51, v23, (__int64)" with name ");
        v25 = sub_18001E8C0(v52, v24, v20);
        v26 = sub_18001C61C(pExceptionObject, v25, (__int64)" could not be cloned");
        v27 = sub_180010DD0(
                v45,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\scenenode.cpp");
        sub_18003AF58(v48, (__int64)v27, v28, (__int64)v26, 1);
        throw (Spectre::Engine::EngineInvalidArgException *)v48;
      }
      if ( *((_QWORD *)&v46[0] + 1) )
        sub_180010530(*((__int64 *)&v46[0] + 1));
      v15 += 2;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    sub_18003E330(a1);
    v29 = *(_QWORD *)(a1 + 32);
    v30 = *(_QWORD *)(a1 + 40);
    while ( v29 != v30 )
    {
      v31 = sub_18001246C(v44, a2);
      sub_18003B9D0(v32, v46, a3, v31);
      if ( *((_QWORD *)&v46[0] + 1) )
        sub_180010530(*((__int64 *)&v46[0] + 1));
      v29 += 16LL;
    }
  }
  if ( v41 )
    sub_180010530(v41);
  if ( v43 )
    sub_180010530(v43);
  v33 = a4[1];
  if ( v33 )
    sub_180010530(v33);
  return a2;
}
