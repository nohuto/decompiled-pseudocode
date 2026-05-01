/*
 * XREFs of ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@Foundation@6@1UKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800C1F84
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800C14F0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1804858AC (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AddOptionsRelativeToInside(int a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 *a6)
{
  int v6; // r11d
  int v7; // r10d
  int v8; // r14d
  int v9; // esi
  __int128 v10; // xmm6
  __int128 v11; // xmm8
  __int128 v12; // xmm9
  _QWORD *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v49; // rdx
  __int128 v50; // [rsp+28h] [rbp-79h] BYREF
  __int128 v51; // [rsp+38h] [rbp-69h]
  __int128 v52; // [rsp+48h] [rbp-59h]
  __int64 v53; // [rsp+58h] [rbp-49h]
  __int128 v54; // [rsp+68h] [rbp-39h] BYREF
  __int128 v55; // [rsp+78h] [rbp-29h]
  __int128 v56; // [rsp+88h] [rbp-19h]
  __int64 v57; // [rsp+98h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v6 = (int)*(float *)(a3 + 8);
  v7 = (int)*(float *)(a3 + 12);
  v8 = (int)*(float *)(a2 + 8);
  v9 = (int)*(float *)(a2 + 12);
  v50 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  LODWORD(v50) = a1;
  BYTE8(v50) = a5;
  BYTE9(v50) = a5;
  HIDWORD(v50) = v7;
  *(_QWORD *)&v51 = __PAIR64__(HIDWORD(a4), v6);
  LODWORD(v52) = 0;
  *((_QWORD *)&v51 + 1) = (unsigned int)a4;
  v10 = v50;
  v54 = v50;
  v11 = v51;
  v12 = v52;
  DWORD1(v54) = 5;
  v13 = (_QWORD *)*a6;
  v14 = *(_QWORD *)*a6;
  v50 = v54;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v14 + 104))(v13, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 59LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a6);
    return v16;
  }
  v54 = v10;
  DWORD1(v54) = 1;
  v17 = *a6;
  v18 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v18 + 104))(v17, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 63LL;
    goto LABEL_36;
  }
  v54 = v10;
  DWORD1(v54) = 9;
  v19 = *a6;
  v20 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v20 + 104))(v19, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 67LL;
    goto LABEL_36;
  }
  v54 = v10;
  DWORD1(v54) = 4;
  v21 = *a6;
  v22 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v22 + 104))(v21, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 71LL;
    goto LABEL_36;
  }
  v54 = v10;
  DWORD1(v54) = 0;
  v23 = *a6;
  v24 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v24 + 104))(v23, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 75LL;
    goto LABEL_36;
  }
  v54 = v10;
  DWORD1(v54) = 8;
  v25 = *a6;
  v26 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v26 + 104))(v25, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 79LL;
    goto LABEL_36;
  }
  v54 = v10;
  DWORD1(v54) = 6;
  v27 = *a6;
  v28 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v28 + 104))(v27, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 83LL;
    goto LABEL_36;
  }
  v54 = v10;
  DWORD1(v54) = 2;
  v29 = *a6;
  v30 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v30 + 104))(v29, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 87LL;
    goto LABEL_36;
  }
  v54 = v10;
  DWORD1(v54) = 10;
  v31 = *a6;
  v32 = *(_QWORD *)*a6;
  v50 = v54;
  v51 = v11;
  v52 = v12;
  v53 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v32 + 104))(v31, &v50);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 91LL;
    goto LABEL_36;
  }
  v50 = v10;
  v51 = v11;
  DWORD1(v50) = 7;
  HIDWORD(v50) = v9;
  HIDWORD(v51) = v9;
  v33 = *a6;
  v34 = *(_QWORD *)*a6;
  v54 = v50;
  v55 = v51;
  v56 = v12;
  v57 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v34 + 104))(v33, &v54);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 106LL;
    goto LABEL_36;
  }
  v50 = v10;
  v51 = v11;
  DWORD1(v50) = 3;
  HIDWORD(v50) = v9;
  HIDWORD(v51) = v9;
  v35 = *a6;
  v36 = *(_QWORD *)*a6;
  v54 = v50;
  v55 = v51;
  v56 = v12;
  v57 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v36 + 104))(v35, &v54);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 112LL;
    goto LABEL_36;
  }
  v50 = v10;
  v51 = v11;
  DWORD1(v50) = 11;
  HIDWORD(v50) = v9;
  HIDWORD(v51) = v9;
  v37 = *a6;
  v38 = *(_QWORD *)*a6;
  v54 = v50;
  v55 = v51;
  v56 = v12;
  v57 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v38 + 104))(v37, &v54);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 118LL;
    goto LABEL_36;
  }
  v50 = v10;
  v51 = v11;
  DWORD1(v50) = 13;
  LODWORD(v51) = v8;
  v39 = *a6;
  v40 = *(_QWORD *)*a6;
  v54 = v50;
  v55 = v51;
  v56 = v12;
  v57 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v40 + 104))(v39, &v54);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 132LL;
    goto LABEL_36;
  }
  v50 = v10;
  v51 = v11;
  DWORD1(v50) = 3;
  LODWORD(v51) = v8;
  v41 = *a6;
  v42 = *(_QWORD *)*a6;
  v54 = v50;
  v55 = v51;
  v56 = v12;
  v57 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v42 + 104))(v41, &v54);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 137LL;
    goto LABEL_36;
  }
  v50 = v10;
  v51 = v11;
  DWORD1(v50) = 14;
  LODWORD(v51) = v8;
  v43 = *a6;
  v44 = *(_QWORD *)*a6;
  v54 = v50;
  v55 = v51;
  v56 = v12;
  v57 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v44 + 104))(v43, &v54);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 142LL;
    goto LABEL_36;
  }
  v50 = v10;
  v51 = v11;
  v52 = v12;
  DWORD1(v50) = 15;
  HIDWORD(v50) = v9;
  LODWORD(v51) = v8;
  HIDWORD(v51) = v9;
  LODWORD(v52) = v8;
  v45 = *a6;
  v46 = *(_QWORD *)*a6;
  v54 = v50;
  v55 = v51;
  v56 = v52;
  v57 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v46 + 104))(v45, &v54);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = 159LL;
    goto LABEL_36;
  }
  v47 = *a6;
  if ( *a6 )
  {
    *a6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  return 0LL;
}
