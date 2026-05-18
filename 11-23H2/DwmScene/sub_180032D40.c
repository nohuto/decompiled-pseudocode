/*
 * XREFs of sub_180032D40 @ 0x180032D40
 * Callers:
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180026698 @ 0x180026698 (sub_180026698.c)
 *     sub_1800266EC @ 0x1800266EC (sub_1800266EC.c)
 *     sub_180026DEC @ 0x180026DEC (sub_180026DEC.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002D824 @ 0x18002D824 (sub_18002D824.c)
 *     sub_18002DE00 @ 0x18002DE00 (sub_18002DE00.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_18002F848 @ 0x18002F848 (sub_18002F848.c)
 *     sub_18002FE3C @ 0x18002FE3C (sub_18002FE3C.c)
 *     sub_180033188 @ 0x180033188 (sub_180033188.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_18003475C @ 0x18003475C (sub_18003475C.c)
 *     sub_18003477C @ 0x18003477C (sub_18003477C.c)
 *     sub_1800347C8 @ 0x1800347C8 (sub_1800347C8.c)
 *     sub_180035944 @ 0x180035944 (sub_180035944.c)
 *     sub_180035B28 @ 0x180035B28 (sub_180035B28.c)
 *     sub_18004F698 @ 0x18004F698 (sub_18004F698.c)
 *     sub_180057484 @ 0x180057484 (sub_180057484.c)
 *     sub_180057760 @ 0x180057760 (sub_180057760.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_180032D40(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  int v8; // r8d
  int v9; // eax
  const char *v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r8
  unsigned __int64 i; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 *v25; // rbx
  __int64 *v26; // r14
  _QWORD *v27; // rdx
  __int64 v29; // [rsp+30h] [rbp-89h] BYREF
  __int64 v30; // [rsp+38h] [rbp-81h]
  __int64 v31; // [rsp+40h] [rbp-79h] BYREF
  __int64 v32; // [rsp+48h] [rbp-71h]
  _BYTE v33[16]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v34[16]; // [rsp+60h] [rbp-59h] BYREF
  _OWORD v35[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v36[4]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD *v38; // [rsp+E8h] [rbp+2Fh]

  sub_18002A070(a1 + 8, (__int64)v34);
  v4 = sub_18003475C(a1);
  sub_18002A070(v4, (__int64)v33);
  sub_18002A404(*a2 + 24);
  if ( !*(_DWORD *)(a1 + 552) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        sub_180010DD0(
          v35,
          (__int64)"This Engine instance cannot create multiple devices because it was created with option General.Engine"
                   "DeviceMode==Single.");
        v7 = (unsigned int)sub_180010DD0(
                             v36,
                             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\c"
                                      "pp\\source\\engine\\engine.cpp");
        sub_18006ED7C((unsigned int)pExceptionObject, v7, v8, (unsigned int)v35, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_18001DB68(
    &stru_1801C8288,
    3,
    "-----------------------------------------------------------------------------------");
  sub_18002E0A8(v36, (_QWORD *)(*a2 + 80));
  v9 = sub_180026650(*a2);
  sub_18001DB68(&stru_1801C8288, 3, "Engine::CreateDevice() -- attaching device id %u -- %s", v9, v10);
  sub_180011B24((__int64)v36);
  if ( (unsigned int)sub_1800266EC(*a2) )
  {
    sub_180033188(a1, &v31, v11, 0LL);
    v35[0] = 0LL;
    sub_180033EB4(a1, &v29, v12, v35);
    if ( v29 )
      sub_180057484(v31, &v29);
    if ( v30 )
      sub_180010530(v30);
    v13 = v31;
    v14 = sub_180026698(*a2, v35, 0);
    sub_180057760(v13, v14);
    if ( *((_QWORD *)&v35[0] + 1) )
      sub_180010530(*((__int64 *)&v35[0] + 1));
    sub_180015604(v35, a2);
    sub_18002FE3C((__int64 *)(a1 + 184), (__int64)v36, (__int64)v35);
    v15 = sub_18001246C(&v29, &v31);
    v16 = *v15;
    *v15 = *(_QWORD *)(v17 + 48);
    *(_QWORD *)(v17 + 48) = v16;
    v18 = v15[1];
    v15[1] = *(_QWORD *)(v17 + 56);
    *(_QWORD *)(v17 + 56) = v18;
    if ( v30 )
      sub_180010530(v30);
    if ( *((_QWORD *)&v35[0] + 1) )
      sub_180010574(*((volatile signed __int32 **)&v35[0] + 1));
    if ( v32 )
      sub_180010530(v32);
  }
  sub_18002A0C4(a1 + 112, (__int64)v35);
  v19 = *(_QWORD **)(a1 + 96);
  if ( v19 == *(_QWORD **)(a1 + 104) )
  {
    sub_18002E5A8((_QWORD *)(a1 + 88), *(char **)(a1 + 96), a2);
  }
  else
  {
    sub_18001246C(v19, a2);
    *(_QWORD *)(a1 + 96) += 16LL;
  }
  sub_180010F54((__int64)v35);
  sub_180035B28(a1);
  v20 = sub_18001246C(v35, a2);
  sub_18004F698(v21, v20);
  for ( i = 0LL; i < sub_1800347C8(a1); ++i )
  {
    sub_18003477C(a1, v35, i);
    if ( *(_QWORD *)&v35[0] && sub_180029664(*(__int64 *)&v35[0], 2) )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 16LL))(v23, a2);
    if ( *((_QWORD *)&v35[0] + 1) )
      sub_180010530(*((__int64 *)&v35[0] + 1));
  }
  sub_18001246C(&v31, a2);
  v38 = 0LL;
  if ( sub_18002F848() )
  {
    v24 = (_QWORD *)sub_18002D824(pExceptionObject, &v31);
    v38 = v24;
  }
  if ( v32 )
  {
    sub_180010530(v32);
    v24 = v38;
  }
  v25 = *(__int64 **)(a1 + 704);
  v26 = *(__int64 **)(a1 + 712);
  if ( v25 != v26 )
  {
    do
    {
      sub_18002A0C4(*v25 + 16, (__int64)v35);
      sub_18002DE00(*v25, (__int64)pExceptionObject);
      sub_180010F54((__int64)v35);
      v25 += 2;
    }
    while ( v25 != v26 );
    v24 = v38;
  }
  if ( v24 )
  {
    v27 = pExceptionObject;
    LOBYTE(v27) = v24 != pExceptionObject;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v24 + 32LL))(v24, v27);
  }
  sub_180026DEC(*a2);
  sub_180035944(a1);
  sub_180010F54((__int64)v33);
  return sub_180010F54((__int64)v34);
}
