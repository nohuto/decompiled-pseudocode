/*
 * XREFs of ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180511398
 * Callers:
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180511D10 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180614EB0 (-_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x180615CFC (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeOperation::QueryResizeApps(__int64 a1, int a2, __int64 a3)
{
  const struct LAYOUT_ENVIRONMENT_DETAILS *v5; // rdx
  int v6; // esi
  int v7; // r15d
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, GUID *, __int64); // rsi
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v23; // rcx
  __int64 v25; // rbx
  int (__fastcall *v26)(__int64, GUID *, __int64); // rsi
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v29; // eax
  __int128 v30; // xmm6
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, __int64, GUID *, __int64 *); // rbx
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, __int64, GUID *, __int64 *); // rbx
  int v37; // eax
  int v38; // r10d
  int v39; // r8d
  __int64 v40; // rdi
  __int64 (__fastcall *v41)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v42; // eax
  __int64 v43; // rdi
  __int64 (__fastcall *v44)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v45; // eax
  int v46; // r10d
  int v47; // r8d
  __int64 v48; // rdi
  __int64 (__fastcall *v49)(__int64, __int64, GUID *, __int64 *); // rbx
  int v50; // eax
  __int64 v51; // rdi
  __int64 (__fastcall *v52)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v53; // eax
  __int64 v54; // rdi
  __int64 (__fastcall *v55)(__int64, __int64, GUID *, __int64 *); // rbx
  int v56; // eax
  __int64 v57; // [rsp+38h] [rbp-69h] BYREF
  __int64 v58; // [rsp+40h] [rbp-61h] BYREF
  __int128 v59; // [rsp+48h] [rbp-59h] BYREF
  __int128 v60; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v62[12]; // [rsp+6Ch] [rbp-35h]
  int v63; // [rsp+78h] [rbp-29h]
  __int128 v64; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  *(_QWORD *)&v60 = a3;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v61);
  v6 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&v61, v5);
  v7 = *(_DWORD *)&v62[4];
  v8 = v61;
  v9 = *(_DWORD *)&v62[4] - v61 - v6;
  if ( !a2 )
  {
    v57 = 0LL;
    v51 = *(_QWORD *)(a1 + 64);
    v52 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v51 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v53 = v52(v51, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v57);
    v17 = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v53);
      goto LABEL_19;
    }
    *(_QWORD *)&v59 = __PAIR64__(*(unsigned int *)v62, v61);
    HIDWORD(v59) = *(_DWORD *)&v62[8];
    DWORD2(v59) = *(_DWORD *)v60 - v6 / 2;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v59);
    v58 = 0LL;
    v54 = *(_QWORD *)(a1 + 64);
    v55 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v54 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    v56 = v55(v54, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v58);
    v17 = v56;
    if ( v56 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v56);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
      goto LABEL_19;
    }
    *(_QWORD *)((char *)&v64 + 4) = *(_QWORD *)v62;
    HIDWORD(v64) = *(_DWORD *)&v62[8];
    LODWORD(v64) = v6 + DWORD2(v59);
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
LABEL_49:
    v34 = &v57;
    goto LABEL_50;
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    v57 = 0LL;
    v43 = *(_QWORD *)(a1 + 64);
    v44 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v43 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v45 = v44(v43, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v57);
    v17 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v45);
      goto LABEL_19;
    }
    v46 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v57 + 72LL))(v57, &v61, v9);
    v47 = 320 * v63 / 100 + 2 * (v63 / 100);
    if ( v46 > v47 )
      v47 = v46;
    *(_QWORD *)&v60 = __PAIR64__(*(unsigned int *)v62, v61);
    HIDWORD(v60) = *(_DWORD *)&v62[8];
    DWORD2(v60) = v47 + v61;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v60);
    v58 = 0LL;
    v48 = *(_QWORD *)(a1 + 64);
    v49 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v48 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    v50 = v49(v48, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v58);
    v17 = v50;
    if ( v50 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v50);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
      goto LABEL_19;
    }
    *(_QWORD *)((char *)&v59 + 4) = *(_QWORD *)v62;
    HIDWORD(v59) = *(_DWORD *)&v62[8];
    LODWORD(v59) = v6 + DWORD2(v60);
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v59);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    goto LABEL_49;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v57 = 0LL;
    v35 = *(_QWORD *)(a1 + 64);
    v36 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v35 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v37 = v36(v35, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v57);
    v17 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v37);
      goto LABEL_19;
    }
    v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v57 + 72LL))(v57, &v61, v9);
    v39 = 320 * v63 / 100 + 2 * (v63 / 100);
    if ( v38 > v39 )
      v39 = v38;
    *(_QWORD *)((char *)&v60 + 4) = *(_QWORD *)v62;
    HIDWORD(v60) = *(_DWORD *)&v62[8];
    LODWORD(v60) = *(_DWORD *)&v62[4] - v39;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v60);
    v58 = 0LL;
    v40 = *(_QWORD *)(a1 + 64);
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v40 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    v42 = v41(v40, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v58);
    v17 = v42;
    if ( v42 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAB,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v42);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
      goto LABEL_19;
    }
    *(_QWORD *)&v59 = __PAIR64__(*(unsigned int *)v62, v61);
    HIDWORD(v59) = *(_DWORD *)&v62[8];
    DWORD2(v59) = v60 - v6;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v59);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    goto LABEL_49;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *(_QWORD *)&v59 = __PAIR64__(*(unsigned int *)v62, v61);
    *((_QWORD *)&v59 + 1) = *(_QWORD *)&v62[4];
    v58 = 0LL;
    v27 = *(_QWORD *)(a1 + 64);
    v28 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v27 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    v29 = v28(v27, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v58);
    v17 = v29;
    if ( v29 >= 0 )
    {
      v30 = v59;
      v64 = v59;
      DWORD2(v64) = (int)(v7 - v8 - v6) / 2 + v8;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v64);
      v57 = 0LL;
      v31 = *(_QWORD *)(a1 + 64);
      v32 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v31 + 96LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
      v33 = v32(v31, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v57);
      v17 = v33;
      if ( v33 >= 0 )
      {
        v60 = v30;
        LODWORD(v60) = v6 + DWORD2(v64);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v60);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
        v34 = &v58;
LABEL_50:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v34);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v33);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v29);
    }
    v23 = &v58;
    goto LABEL_20;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v57 = 0LL;
    v21 = *(_QWORD *)(a1 + 64);
    v22 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v21 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v16 = v22(v21, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v57);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 87LL;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v61);
    v16 = CAppLayoutOperation::_EvictItem(a1 + 24, 0LL, 3LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 91LL;
      goto LABEL_18;
    }
    v25 = v57;
    v26 = *(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v57 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 88));
    if ( v26(v25, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, a1 + 88) >= 0 )
      CAppLayoutOperation::_UpdateOperationActions(a1 + 24, 2LL);
    goto LABEL_49;
  }
  if ( v13 == 1 )
  {
    v57 = 0LL;
    v14 = *(_QWORD *)(a1 + 64);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v14 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v16 = v15(v14, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v57);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 105LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v16);
LABEL_19:
      v23 = &v57;
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
      return v17;
    }
    (*(void (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v61);
    v16 = CAppLayoutOperation::_EvictItem(a1 + 24, 1LL, 4LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 109LL;
      goto LABEL_18;
    }
    v19 = v57;
    v20 = *(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v57 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 88));
    if ( v20(v19, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, a1 + 88) >= 0 )
      CAppLayoutOperation::_UpdateOperationActions(a1 + 24, 2LL);
    goto LABEL_49;
  }
  return 0LL;
}
