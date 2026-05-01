/*
 * XREFs of _lambda_eb6f3c00c449fec7f92c47bd2b9dab3d_::operator() @ 0x1801398D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eb6f3c00c449fec7f92c47bd2b9dab3d___::Run @ 0x1801398B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_eb6f3c00c449fec7f92c47bd2b9dab3d___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_eb6f3c00c449fec7f92c47bd2b9dab3d_::operator()(__int64 *a1)
{
  HRESULT v2; // eax
  int v3; // edx
  unsigned int v4; // r8d
  HSTRING v5; // rbx
  int ActivationFactory; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  int v13; // eax
  _QWORD *v14; // rax
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h] BYREF
  HSTRING_HEADER v24; // [rsp+50h] [rbp-38h] BYREF
  HSTRING v25; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v19 = 0LL;
  v25 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &v24, &v25);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0xB84,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v18);
  }
  v5 = v25;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v19);
  v8 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  v21 = 0LL;
  v9 = *a1;
  LOBYTE(v7) = *(_DWORD *)(*a1 + 232) == 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 136LL))(v19, v7, &v21);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB87,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v10,
      v18);
  v18 = 0LL;
  v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  v12 = **v21;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  v13 = v12(v11, &GUID_3c00fd60_2950_5939_a21a_2d12c5a01b8a, &v18);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB8A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v13,
      v18);
  v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v9 + 280) + 144LL))(
                    *(_QWORD *)(v9 + 280),
                    &v23);
  v15 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v14 + 48LL))(
                                                              *v14,
                                                              &v22);
  v20 = 0LL;
  (**v15)(v15, &GUID_d928b176_b291_4bd6_9f6f_2e21e3ef6cbc, &v20);
  if ( v22 )
    (*(void (**)(void))(*(_QWORD *)v22 + 16LL))();
  if ( v23 )
    (*(void (**)(void))(*(_QWORD *)v23 + 16LL))();
  v16 = v20;
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v20 + 56LL))(v20, *(unsigned int *)(v9 + 296), v18);
    v16 = v20;
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  return 0LL;
}
