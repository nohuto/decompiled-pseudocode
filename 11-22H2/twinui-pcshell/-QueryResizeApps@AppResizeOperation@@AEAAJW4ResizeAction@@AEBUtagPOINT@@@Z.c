/*
 * XREFs of ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1805C9848
 * Callers:
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1805CA1C0 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18074608C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180793650 (-_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppResizeOperation::QueryResizeApps(__int64 a1, int a2, __int64 a3)
{
  const struct LAYOUT_ENVIRONMENT_DETAILS *v5; // rdx
  int v6; // esi
  int v7; // r12d
  int v8; // r13d
  unsigned int v9; // r15d
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
  __int64 *v21; // rcx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v24; // rcx
  __int64 v26; // rbx
  int (__fastcall *v27)(__int64, GUID *, __int64); // rsi
  int v28; // r15d
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v31; // eax
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, __int64, GUID *, __int64 *); // rbx
  int v34; // eax
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
  __int64 v57; // [rsp+30h] [rbp-49h] BYREF
  __int64 v58; // [rsp+38h] [rbp-41h] BYREF
  __int64 v59; // [rsp+40h] [rbp-39h] BYREF
  int v60; // [rsp+48h] [rbp-31h] BYREF
  int v61; // [rsp+4Ch] [rbp-2Dh]
  int v62; // [rsp+50h] [rbp-29h]
  int v63; // [rsp+54h] [rbp-25h]
  int v64; // [rsp+58h] [rbp-21h] BYREF
  int v65; // [rsp+5Ch] [rbp-1Dh]
  int v66; // [rsp+60h] [rbp-19h]
  int v67; // [rsp+64h] [rbp-15h]
  int v68; // [rsp+68h] [rbp-11h] BYREF
  int v69; // [rsp+6Ch] [rbp-Dh]
  int v70; // [rsp+70h] [rbp-9h]
  int v71; // [rsp+74h] [rbp-5h]
  int v72; // [rsp+78h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v57 = a3;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v68);
  v6 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&v68, v5);
  v7 = v70;
  v8 = v68;
  v9 = v70 - v68 - v6;
  if ( !a2 )
  {
    v59 = 0LL;
    v51 = *(_QWORD *)(a1 + 64);
    v52 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v51 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
    v53 = v52(v51, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v59);
    v17 = v53;
    if ( v53 >= 0 )
    {
      v60 = v68;
      v61 = v69;
      v63 = v71;
      v62 = *(_DWORD *)v57 - v6 / 2;
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v59 + 104LL))(v59, 0LL, &v60);
      v58 = 0LL;
      v54 = *(_QWORD *)(a1 + 64);
      v55 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v54 + 96LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
      v56 = v55(v54, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v58);
      v17 = v56;
      if ( v56 >= 0 )
      {
        v65 = v69;
        v66 = v70;
        v67 = v71;
        v64 = v6 + v62;
        (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v64);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
        v21 = &v59;
        goto LABEL_50;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v56);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v53);
    }
    v24 = &v59;
    goto LABEL_20;
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
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v45);
      goto LABEL_19;
    }
    v46 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v57 + 72LL))(v57, &v68, v9);
    v47 = 320 * v72 / 100 + 2 * (v72 / 100);
    if ( v46 > v47 )
      v47 = v46;
    v60 = v68;
    v61 = v69;
    v63 = v71;
    v62 = v47 + v68;
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v60);
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
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v50);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
      goto LABEL_19;
    }
    v65 = v69;
    v66 = v70;
    v67 = v71;
    v64 = v6 + v62;
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
LABEL_13:
    v21 = &v57;
LABEL_50:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
    return 0LL;
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
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v37);
      goto LABEL_19;
    }
    v38 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v57 + 72LL))(v57, &v68, v9);
    v39 = 320 * v72 / 100 + 2 * (v72 / 100);
    if ( v38 > v39 )
      v39 = v38;
    v61 = v69;
    v62 = v70;
    v63 = v71;
    v60 = v70 - v39;
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v60);
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
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v42);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
      goto LABEL_19;
    }
    v64 = v68;
    v65 = v69;
    v67 = v71;
    v66 = v60 - v6;
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v28 = v69;
    LODWORD(v57) = v71;
    v58 = 0LL;
    v29 = *(_QWORD *)(a1 + 64);
    v30 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v29 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
    v31 = v30(v29, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v58);
    v17 = v31;
    if ( v31 >= 0 )
    {
      v60 = v8;
      v61 = v28;
      v63 = v57;
      v62 = (v7 - v8 - v6) / 2 + v8;
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v58 + 104LL))(v58, 0LL, &v60);
      v59 = 0LL;
      v32 = *(_QWORD *)(a1 + 64);
      v33 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v32 + 96LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
      v34 = v33(v32, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v59);
      v17 = v34;
      if ( v34 >= 0 )
      {
        v65 = v28;
        v66 = v7;
        v67 = v57;
        v64 = v6 + v62;
        (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v59 + 104LL))(v59, 0LL, &v64);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
        v21 = &v58;
        goto LABEL_50;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v34);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v31);
    }
    v24 = &v58;
    goto LABEL_20;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v57 = 0LL;
    v22 = *(_QWORD *)(a1 + 64);
    v23 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v22 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v16 = v23(v22, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v57);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 87LL;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v68);
    v16 = CAppLayoutOperation::_EvictItem(a1 + 24, 0LL, 3LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 91LL;
      goto LABEL_18;
    }
    v26 = v57;
    v27 = *(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v57 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 88));
    if ( v27(v26, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, a1 + 88) >= 0 )
      CAppLayoutOperation::_UpdateOperationActions(a1 + 24, 2LL);
    goto LABEL_13;
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
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v16);
LABEL_19:
      v24 = &v57;
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v24);
      return v17;
    }
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v57 + 104LL))(v57, 0LL, &v68);
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
    goto LABEL_13;
  }
  return 0LL;
}
