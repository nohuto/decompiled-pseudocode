/*
 * XREFs of sub_1800E5DE4 @ 0x1800E5DE4
 * Callers:
 *     sub_1800EA210 @ 0x1800EA210 (sub_1800EA210.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011570 @ 0x180011570 (sub_180011570.c)
 *     unknown_libname_3 @ 0x1800142CC (unknown_libname_3.c)
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     unknown_libname_5 @ 0x180031D40 (unknown_libname_5.c)
 *     sub_18005E25C @ 0x18005E25C (sub_18005E25C.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 *     sub_180089078 @ 0x180089078 (sub_180089078.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 *     sub_1800E67E4 @ 0x1800E67E4 (sub_1800E67E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_1800E5DE4(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v8; // ecx
  char v9; // r8
  int v10; // edx
  int v11; // edi
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  _QWORD *v17; // rbx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v24; // r8
  const void **v25; // rax
  __int64 v26; // r8
  __int64 v27; // r8
  const void **v28; // rax
  __int64 v29; // r8
  __int64 v30; // r8
  const void **v31; // rax
  __int64 v32; // r8
  __int64 v33; // r8
  const void **v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // r8
  const void **v37; // rax
  __int64 v38; // r8
  __int64 v39; // r8
  const void **v40; // rbx
  _QWORD *v41; // rax
  __int64 v42; // r8
  _BYTE *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v47; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v50[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v52[12]; // [rsp+98h] [rbp-68h] BYREF
  const void *Src[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v54[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v55; // [rsp+F8h] [rbp-8h]
  _BYTE v56[32]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v57[32]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+158h] [rbp+58h] BYREF

  v47 = a2;
  sub_18005E25C(a1);
  v8 = sub_18005E30C(a1);
  if ( (unsigned int)(v8 - 23) <= 1 )
    v10 = 2;
  else
    v10 = (v9 & 8) != 0;
  v11 = sub_1800E0240(v8, v10);
  v12 = (_QWORD *)(a1 + 184);
  if ( sub_180010D08((_QWORD *)(a1 + 184)) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v12 + 80LL))(*v12, v54);
    if ( v54[0] != __PAIR64__(a4, a3) || v55 != v11 )
    {
      v13 = *v12;
      if ( *v12 )
      {
        *v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( sub_1800E2DE0((_QWORD *)(a1 + 184)) )
  {
    v52[10] = 0;
    v52[0] = a3;
    v52[1] = a4;
    v52[2] = 1;
    v52[7] = 2;
    v52[9] = 0x10000;
    v52[4] = v11;
    v52[5] = 1;
    v52[6] = 0;
    v52[3] = 1;
    v52[8] = 8;
    v48 = 0LL;
    v14 = *(_QWORD *)(a1 + 80);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      while ( v15 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15);
        if ( v16 == v15 )
        {
          v48 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_180020FCC(v49, (__int64 *)&v48);
    sub_180010910((__int64)&v48);
    sub_1800DA968(v49[0], &v47);
    v46 = 0LL;
    v17 = v47;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, _QWORD, __int64 *))(*v47 + 40LL))(v47, v52, 0LL, &v46);
    sub_1800DD668(v49[0], v18);
    if ( v18 < 0 )
    {
      sub_1800113D0(Src, "THROW_IF_FAILED_DETAILED. ");
      v25 = sub_18001F640(Src, " File=", v24);
      sub_18001F640(
        v25,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        v26);
      v28 = sub_18001F640(Src, " Line=", v27);
      sub_18001F640(v28, "929", v29);
      v31 = sub_18001F640(Src, " Message=", v30);
      sub_18001F640(v31, "\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"", v32);
      v34 = sub_18001F640(Src, " Details=\"", v33);
      unknown_libname_5(v50);
      v35 = (_QWORD *)sub_1800E62C8(v56, v52, v50);
      v37 = sub_18001F5AC((__int64)v34, v35, v36);
      sub_18001F640(v37, "\"", v38);
      sub_180011570((__int64)v56);
      sub_180089078((__int64)v50);
      v40 = sub_18001F640(Src, " HRESULT=", v39);
      v41 = (_QWORD *)sub_1800E67E4(v57, (unsigned int)v18);
      sub_18001F5AC((__int64)v40, v41, v42);
      sub_180011570((__int64)v57);
      v43 = unknown_libname_3(Src);
      sub_1800113D0(v54, v43);
      v44 = sub_1800113D0(
              v51,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_180079BE8(pExceptionObject, (__int64)v44, v45, v18, (const char *)v54, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v19 = *v12;
    v20 = v46;
    if ( *v12 != v46 )
    {
      v21 = v46;
      if ( v46 )
      {
        (*(void (**)(void))(*(_QWORD *)v46 + 8LL))();
        v19 = *v12;
        v20 = v46;
      }
      *v12 = v21;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v20 = v46;
      }
    }
    if ( v20 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    sub_180010910((__int64)v49);
  }
  v22 = *v12;
  *a2 = *v12;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  return a2;
}
