/*
 * XREFs of ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x180792934
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805CA804 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18074608C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_EnsureDockedViewSizing(CAppLayoutOperation *this)
{
  int v2; // esi
  int v3; // r14d
  int v4; // r12d
  int v5; // ebx
  int v6; // edi
  bool v7; // zf
  const struct LAYOUT_ENVIRONMENT_DETAILS *v8; // rdx
  enum DEVICE_SCALE_FACTOR v9; // r8d
  int v10; // eax
  __int64 v11; // rsi
  int v12; // ecx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  unsigned int v14; // r14d
  __int64 *v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // edi
  __int64 **v20; // rax
  int v21; // eax
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, _QWORD, __int64); // rbx
  int v24; // eax
  int v25; // eax
  __int64 (__fastcall *v26)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v27; // rbx
  int v28; // eax
  __int64 v30; // [rsp+30h] [rbp-89h] BYREF
  int v31[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v32; // [rsp+40h] [rbp-79h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-71h] BYREF
  __int64 v34; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v35[8]; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v36[4]; // [rsp+A0h] [rbp-19h] BYREF
  _DWORD v37[2]; // [rsp+B0h] [rbp-9h] BYREF
  int v38; // [rsp+B8h] [rbp-1h]
  int v39; // [rsp+BCh] [rbp+3h]
  __int128 v40; // [rsp+D8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 88LL))(*((_QWORD *)this + 4), 2LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 4LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 1LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), 2LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL);
  if ( v2 )
  {
    if ( v2 != 1 || v3 || v4 != 1 || v5 != 1 )
      return 0LL;
    v7 = v6 == 2;
  }
  else
  {
    v7 = v5 == 1;
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v37);
    v10 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v37, v8, v9);
    v11 = *((_QWORD *)this + 5);
    v33 = 0LL;
    v12 = v10 * (v6 - 1);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v11 + 112LL);
    v14 = v38 - v12 - v37[0];
    v15 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v33, &v30);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v15);
    v16 = v13(v11, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E7,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v16);
LABEL_22:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      return v17;
    }
    v18 = (*v33)[10](v33, (GUID *)v37, (__int64 *)v14);
    v32 = 0LL;
    v19 = v18;
    v20 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v32, &v30);
    v21 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v33, *v20);
    v17 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v21);
LABEL_21:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
      goto LABEL_22;
    }
    v36[2] = v38;
    v36[0] = v38 - v19;
    v36[1] = v37[1];
    v36[3] = v39;
    (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v32 + 104LL))(v32, 0LL, v36);
    (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v32 + 104LL))(v32, 1LL, v36);
    v22 = *((_QWORD *)this + 5);
    *(_QWORD *)v31 = 0LL;
    v23 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v22 + 136LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v31);
    v24 = v23(v22, 0LL, 1LL);
    v17 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v24);
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v31);
      goto LABEL_21;
    }
    while ( 1 )
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)v31 + 24LL))(*(_QWORD *)v31, 5LL, v35);
      if ( v25 < 0 )
        break;
      if ( ((*(__int64 (__fastcall **)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v35[0] + 32LL))((__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35[0]) & 2) == 0 )
      {
        v30 = 0LL;
        v26 = **(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v35[0];
        v27 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v30, &v34);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v27);
        v28 = v26(v35[0], &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v27);
        v17 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x200,
            (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
            (const char *)(unsigned int)v28);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
          goto LABEL_20;
        }
        v40 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v30 + 104LL))(v30, 0LL, &v40);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      }
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FB,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v31);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
  }
  return 0LL;
}
