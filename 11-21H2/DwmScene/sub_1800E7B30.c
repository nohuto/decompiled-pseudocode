/*
 * XREFs of sub_1800E7B30 @ 0x1800E7B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_18005E3F8 @ 0x18005E3F8 (sub_18005E3F8.c)
 *     sub_18005E410 @ 0x18005E410 (sub_18005E410.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_1800E7B30(
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
  __int64 v13; // r11
  __int64 *v14; // rax
  char v15; // bl
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rax
  char v21; // bl
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // r14
  char v27; // si
  unsigned __int8 v28; // si
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rax
  char v33; // si
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 result; // rax
  _QWORD *v38; // rax
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // r8
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  _BYTE v47[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v60[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char v62; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v63[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v64[6]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v65[4]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v66[4]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+178h] [rbp+78h] BYREF

  v13 = 0LL;
  LODWORD(v42) = 0;
  v50 = 0LL;
  if ( *a7 )
  {
    v14 = sub_18005E29C(*a7, v49, *(_DWORD *)(a1 + 88));
    v15 = v13 + 1;
    v16 = *v14;
  }
  else
  {
    v48 = 0LL;
    v14 = (__int64 *)v47;
    v15 = 2;
    v16 = 0LL;
  }
  v53 = v16;
  v17 = v14[1];
  v54 = v17;
  *v14 = v13;
  v14[1] = v13;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    sub_180010910((__int64)v47);
  }
  if ( (v15 & 1) != 0 )
  {
    v15 &= ~1u;
    sub_180010910((__int64)v49);
  }
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = v54;
  }
  v51 = v16;
  v52 = v17;
  sub_180018704((__int64)v59);
  if ( (unsigned int)sub_18005E3F8(v59[0]) > 1 || (unsigned int)sub_18005E410(v18) > 1 )
  {
    sub_1800113D0(v65, "CopyTexture2D does not support mipmapped or MSAA textures");
    v40 = sub_1800113D0(
            v66,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180079B60(pExceptionObject, (__int64)v40, v41, (const char *)v65, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v19 )
  {
    v42 = 0LL;
    v20 = &v42;
    v22 = (unsigned __int8)v15 | 8u;
    v21 = v15 | 8;
LABEL_16:
    v23 = *v20;
    *v20 = 0LL;
    goto LABEL_17;
  }
  v20 = sub_1800E6288(v19, &v43);
  v21 = v15 | 4;
  LOBYTE(v22) = v21;
  v23 = 0LL;
  if ( &v62 != (char *)v20 )
    goto LABEL_16;
LABEL_17:
  v50 = v23;
  if ( (v21 & 8) != 0 )
  {
    v21 = v22 & 0xF7;
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  if ( (v21 & 4) != 0 )
  {
    v21 &= ~4u;
    v24 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  sub_180010910((__int64)v59);
  sub_180010910((__int64)&v53);
  v46 = 0LL;
  if ( *a2 )
  {
    v25 = sub_18005E29C(*a2, v63, *(_DWORD *)(a1 + 88));
    v26 = *v25;
    v27 = 16;
  }
  else
  {
    v61 = 0LL;
    v25 = (__int64 *)v60;
    v26 = 0LL;
    v27 = 32;
  }
  v28 = v21 | v27;
  v57 = v26;
  v29 = v25[1];
  v58 = v29;
  *v25 = 0LL;
  v25[1] = 0LL;
  if ( (v28 & 0x20) != 0 )
  {
    v28 &= ~0x20u;
    sub_180010910((__int64)v60);
  }
  if ( (v28 & 0x10) != 0 )
  {
    v28 &= ~0x10u;
    sub_180010910((__int64)v63);
  }
  if ( v29 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    v29 = v58;
  }
  v55 = v26;
  v56 = v29;
  sub_180018704((__int64)v49);
  if ( (unsigned int)sub_18005E3F8(v49[0]) > 1 || (unsigned int)sub_18005E410(v30) > 1 )
  {
    sub_1800113D0(v66, "CopyTexture2D does not support mipmapped or MSAA textures");
    v38 = sub_1800113D0(
            v65,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180079B60(pExceptionObject, (__int64)v38, v39, (const char *)v66, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v31 )
  {
    v44 = 0LL;
    v32 = &v44;
    v34 = v28 | 0x80u;
    v33 = v28 | 0x80;
LABEL_38:
    v35 = *v32;
    *v32 = 0LL;
    goto LABEL_39;
  }
  v32 = sub_1800E6288(v31, &v45);
  v33 = v28 | 0x40;
  LOBYTE(v34) = v33;
  v35 = 0LL;
  if ( v47 != (_BYTE *)v32 )
    goto LABEL_38;
LABEL_39:
  v46 = v35;
  if ( v33 < 0 )
  {
    v33 = v34 & 0x7F;
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  if ( (v33 & 0x40) != 0 )
  {
    v36 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  sub_180010910((__int64)v49);
  sub_180010910((__int64)&v57);
  v64[2] = 0;
  v64[0] = a8;
  v64[1] = a9;
  v64[3] = a5 + a8;
  v64[4] = a9 + a6;
  v64[5] = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *))(**(_QWORD **)(a1 + 144) + 368LL))(
             *(_QWORD *)(a1 + 144),
             v35,
             0LL,
             a3,
             a4,
             0,
             v23,
             0,
             v64);
  if ( v35 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v23 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return result;
}
