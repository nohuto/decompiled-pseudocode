/*
 * XREFs of sub_180055EA0 @ 0x180055EA0
 * Callers:
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180051948 @ 0x180051948 (sub_180051948.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_1800564F0 @ 0x1800564F0 (sub_1800564F0.c)
 *     sub_18006FA84 @ 0x18006FA84 (sub_18006FA84.c)
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 *     sub_18008F990 @ 0x18008F990 (sub_18008F990.c)
 *     sub_1800D5B6C @ 0x1800D5B6C (sub_1800D5B6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180025AEC @ 0x180025AEC (sub_180025AEC.c)
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_180051000 @ 0x180051000 (sub_180051000.c)
 *     sub_180051F00 @ 0x180051F00 (sub_180051F00.c)
 *     sub_180054DB8 @ 0x180054DB8 (sub_180054DB8.c)
 *     sub_180054DF4 @ 0x180054DF4 (sub_180054DF4.c)
 *     sub_180055070 @ 0x180055070 (sub_180055070.c)
 *     sub_180055100 @ 0x180055100 (sub_180055100.c)
 *     sub_1800551D8 @ 0x1800551D8 (sub_1800551D8.c)
 *     sub_180055754 @ 0x180055754 (sub_180055754.c)
 *     sub_180055778 @ 0x180055778 (sub_180055778.c)
 *     sub_180056398 @ 0x180056398 (sub_180056398.c)
 *     sub_1800563E8 @ 0x1800563E8 (sub_1800563E8.c)
 *     sub_1800567A0 @ 0x1800567A0 (sub_1800567A0.c)
 *     sub_1800569EC @ 0x1800569EC (sub_1800569EC.c)
 *     sub_180056BB4 @ 0x180056BB4 (sub_180056BB4.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180055EA0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const void *a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v12; // r13
  size_t v13; // r12
  __int64 v14; // r14
  __int64 *v15; // rax
  void **v16; // rdx
  char v17; // bl
  unsigned int **v18; // r15
  char v19; // r13
  _DWORD *v20; // r8
  unsigned int v21; // eax
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  _QWORD *v26; // r14
  void *v27; // r12
  const void *v28; // r14
  __int64 v29; // rbx
  int v30; // eax
  unsigned int v31; // eax
  int v32; // r8d
  __int64 *v33; // rax
  _DWORD *v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  const void *v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-98h]
  unsigned int v41; // [rsp+70h] [rbp-90h] BYREF
  size_t v42; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v43; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v44; // [rsp+88h] [rbp-78h]
  _BYTE v45[24]; // [rsp+A0h] [rbp-60h] BYREF
  char v46[32]; // [rsp+B8h] [rbp-48h] BYREF
  void *v47; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-20h]
  _BYTE pExceptionObject[56]; // [rsp+F8h] [rbp-8h] BYREF

  v37 = a2;
  v36 = a3;
  LODWORD(v39) = a4;
  v12 = (__int64)a8;
  v38 = a8;
  v13 = a9;
  v40 = a9;
  v41 = a9;
  v14 = a10;
  LODWORD(v35) = 0;
  sub_180056BB4(a1 + 136, 0LL);
  if ( a4 )
  {
    v15 = sub_180055070((__int64 *)&v47, &v37, &v36, &v39, &a5, &a7, &a6);
    v35 = (_DWORD *)*v15;
    v16 = (void **)&v35;
    v17 = 12;
  }
  else
  {
    v15 = sub_180055100((__int64 *)&v42, &v37, &v36, &a5, &a7, &a6);
    v39 = *v15;
    v16 = (void **)&v39;
    v17 = 3;
  }
  *v15 = 0LL;
  v18 = (unsigned int **)(a1 + 128);
  sub_180054DB8((void **)(a1 + 128), v16);
  if ( (v17 & 8) != 0 )
  {
    v17 &= ~8u;
    sub_180055754((void **)&v35);
  }
  if ( (v17 & 4) != 0 )
  {
    v17 &= ~4u;
    sub_180055754(&v47);
  }
  if ( (v17 & 2) != 0 )
  {
    v17 &= ~2u;
    sub_180055754((void **)&v39);
  }
  if ( (v17 & 1) != 0 )
    sub_180055754((void **)&v42);
  v42 = v13;
  sub_180056398(v45, *v18, v12, v13);
  if ( v14 )
    sub_180029870(a1, 1, 1);
  v35 = (_DWORD *)sub_180029630(a1);
  v19 = 0;
  if ( sub_180029664(a1, 1) )
  {
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) )
      {
        sub_180010DD0(&v47, (__int64)"Texture cannot be created to just target generic devices");
        v21 = (unsigned int)sub_180010DD0(
                              &v43,
                              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\"
                                       "cpp\\source\\engine\\texture.cpp");
        sub_18006ED7C((unsigned int)pExceptionObject, v21, v22, (unsigned int)&v47, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      sub_1800563E8(a1, v45, v14);
      sub_180029870(a1, 2, 0);
      sub_180029870(v24, v23 + 4, v23);
      v19 = 1;
    }
    else
    {
      sub_18003655C((__int64)v20, (__int64 *)&v43);
      v25 = v43;
      v26 = v44;
      if ( v43 != v44 )
      {
        do
        {
          sub_18001246C(&v47, v25);
          v27 = v47;
          if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v47 + 32LL))(v47) )
          {
            sub_1800563E8(a1, v45, v27);
            v19 = 1;
          }
          if ( v48 )
            sub_180010530(v48);
          v25 += 2;
        }
        while ( v25 != v26 );
        v13 = v42;
      }
      sub_180013300((__int64)&v43);
    }
    v20 = v35;
  }
  v28 = v38;
  if ( v38 && (v20[138] == 1 || !v19) )
  {
    v29 = (__int64)*v18;
    v30 = sub_1800567A0((*v18)[4], **v18, (*v18)[1]);
    if ( (*(_BYTE *)(v29 + 20) & 0x10) != 0 )
      v30 *= 6;
    if ( *(_DWORD *)(v29 + 8) * v30 != v40 )
    {
      sub_180010DD0(&v47, (__int64)"Wrong buffer size");
      v31 = (unsigned int)sub_180010DD0(
                            &v43,
                            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cp"
                                     "p\\source\\engine\\texture.cpp");
      sub_18006ED7C((unsigned int)pExceptionObject, v31, v32, (unsigned int)&v47, 1);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_180051000(&v35, v13);
    sub_18000FF54(v35, v13, v28, v13);
    v33 = sub_1800551D8((__int64 *)&v38, (__int64)v45, (__int64 *)&v35, &v41);
    sub_180054DF4((__int64 *)(a1 + 136), v33);
    sub_180055778(&v38);
    sub_180025AEC((void **)&v35);
  }
  sub_1800569EC(a1);
  return sub_180051F00((__int64)v46);
}
