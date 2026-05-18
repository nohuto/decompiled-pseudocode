/*
 * XREFs of sub_1800D08F0 @ 0x1800D08F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_1800568A8 @ 0x1800568A8 (sub_1800568A8.c)
 *     sub_1800568C0 @ 0x1800568C0 (sub_1800568C0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800D08F0(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 *a7,
        int a8,
        int a9)
{
  __int64 *v13; // rax
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rax
  char v20; // di
  char v21; // di
  __int64 *v22; // rax
  __int64 v23; // rcx
  char v24; // bl
  char v25; // bl
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rax
  char v30; // di
  char v31; // di
  _QWORD *v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v45[6]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v46[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v47[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E8h] [rbp-18h] BYREF

  LODWORD(v37) = 0;
  v44 = 0LL;
  if ( *a7 )
  {
    v13 = sub_1800566F0(*a7, &v42, *(_DWORD *)(a1 + 88));
    v14 = 1;
    v15 = *v13;
  }
  else
  {
    v39 = 0LL;
    v13 = &v38;
    v14 = 2;
    v15 = 0LL;
  }
  v40 = v15;
  v16 = v13[1];
  v41 = v16;
  *v13 = 0LL;
  v13[1] = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v39 )
      sub_180010530(v39);
  }
  if ( (v14 & 1) != 0 )
  {
    v14 &= ~1u;
    if ( v43 )
      sub_180010530(v43);
  }
  sub_18001246C(&v38, &v40);
  sub_180017600((__int64)&v42);
  if ( (unsigned int)sub_1800568A8(v42) > 1 || (unsigned int)sub_1800568C0(v17) > 1 )
  {
    sub_180010DD0(v46, (__int64)"CopyTexture2D does not support mipmapped or MSAA textures");
    v35 = sub_180010DD0(
            v47,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v35, v36, (const char *)v46, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v18 )
  {
    v19 = sub_1800CF0C8(v18, &v40);
    v20 = 4;
  }
  else
  {
    v37 = 0LL;
    v19 = &v37;
    v20 = 8;
  }
  v21 = v14 | v20;
  sub_1800CB6E8(&v44, v19);
  if ( (v21 & 8) != 0 )
  {
    v21 &= ~8u;
    sub_18000E72C(&v37);
  }
  if ( (v21 & 4) != 0 )
  {
    v21 &= ~4u;
    sub_18000E72C(&v40);
  }
  if ( v43 )
    sub_180010530(v43);
  if ( v16 )
    sub_180010530(v16);
  v37 = 0LL;
  if ( *a2 )
  {
    v22 = sub_1800566F0(*a2, &v38, *(_DWORD *)(a1 + 88));
    v23 = *v22;
    v24 = 16;
  }
  else
  {
    v43 = 0LL;
    v22 = &v42;
    v23 = 0LL;
    v24 = 32;
  }
  v25 = v21 | v24;
  v40 = v23;
  v26 = v22[1];
  v41 = v26;
  *v22 = 0LL;
  v22[1] = 0LL;
  if ( (v25 & 0x20) != 0 )
  {
    v25 &= ~0x20u;
    if ( v43 )
      sub_180010530(v43);
  }
  if ( (v25 & 0x10) != 0 )
  {
    v25 &= ~0x10u;
    if ( v39 )
      sub_180010530(v39);
  }
  sub_18001246C(&v38, &v40);
  sub_180017600((__int64)&v42);
  if ( (unsigned int)sub_1800568A8(v42) > 1 || (unsigned int)sub_1800568C0(v27) > 1 )
  {
    sub_180010DD0(v47, (__int64)"CopyTexture2D does not support mipmapped or MSAA textures");
    v33 = sub_180010DD0(
            v46,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v33, v34, (const char *)v47, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v28 )
  {
    v29 = sub_1800CF0C8(v28, &v38);
    v30 = 64;
  }
  else
  {
    v40 = 0LL;
    v29 = &v40;
    v30 = 0x80;
  }
  v31 = v25 | v30;
  sub_1800CB6E8(&v37, v29);
  if ( v31 < 0 )
  {
    v31 &= ~0x80u;
    sub_18000E72C(&v40);
  }
  if ( (v31 & 0x40) != 0 )
    sub_18000E72C(&v38);
  if ( v43 )
    sub_180010530(v43);
  if ( v26 )
    sub_180010530(v26);
  v45[2] = 0;
  v45[0] = a8;
  v45[1] = a9;
  v45[3] = a5 + a8;
  v45[4] = a9 + a6;
  v45[5] = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *))(**(_QWORD **)(a1 + 144)
                                                                                                  + 368LL))(
    *(_QWORD *)(a1 + 144),
    v37,
    0LL,
    a3,
    a4,
    0,
    v44,
    0,
    v45);
  sub_18000E72C(&v37);
  return sub_18000E72C(&v44);
}
