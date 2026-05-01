/*
 * XREFs of ?OnCreating@ApplicationContainerActivationPolicy@@UEAAJPEAUICreateProcessInputs@@@Z @ 0x1805736B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall ApplicationContainerActivationPolicy::OnCreating(
        ApplicationContainerActivationPolicy *this,
        struct ICreateProcessInputs *a2)
{
  HRESULT (__stdcall *QueryInterface)(ICreateProcessInputs *, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  const wchar_t *v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  HRESULT (__stdcall *v11)(ICreateProcessInputs *, const IID *const, void **); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  void (__fastcall *v17)(char *, GUID *, IUnknown **); // rbx
  __int64 *v18; // [rsp+30h] [rbp-268h] BYREF
  __int64 v19; // [rsp+38h] [rbp-260h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-258h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-250h] BYREF
  __int128 v22; // [rsp+50h] [rbp-248h] BYREF
  int v23; // [rsp+60h] [rbp-238h]
  int v24; // [rsp+70h] [rbp-228h] BYREF
  wchar_t v25[262]; // [rsp+74h] [rbp-224h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  LODWORD(v18) = 0;
  ((void (__fastcall *)(struct ICreateProcessInputs *, __int64))a2->lpVtbl->AddCreateFlags)(a2, 4LL);
  v19 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  v5 = ((__int64 (__fastcall *)(struct ICreateProcessInputs *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_a8cfdc36_0812_41e8_822a_0b69e430a412,
         &v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    return v6;
  }
  if ( *((_QWORD *)this + 12) )
  {
    memset_0(v25, 0, 0x208uLL);
    v24 = 16;
    v8 = (const wchar_t *)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v8 = *(const wchar_t **)v8;
    StringCchCopyW(v25, 260LL, v8);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v19 + 80LL))(
           v19,
           131089LL,
           &v24,
           524LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      return v10;
    }
  }
  if ( *((_DWORD *)this + 15)
    || *((_DWORD *)this + 16)
    || *((_DWORD *)this + 17)
    || *((_DWORD *)this + 18)
    || *((_DWORD *)this + 19) )
  {
    v18 = 0LL;
    v11 = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
    v12 = ((__int64 (__fastcall *)(struct ICreateProcessInputs *, GUID *, __int64 **))v11)(
            a2,
            &GUID_51b2b540_434a_464c_b440_37bd2a243e56,
            &v18);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      return v13;
    }
    v14 = *v18;
    v22 = *(_OWORD *)((char *)this + 60);
    v23 = *((_DWORD *)this + 19);
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v14 + 24))(v18, &v22);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      return v16;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  LODWORD(v18) = 2;
  v17 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 6) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v17((char *)this - 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  LOBYTE(v17) = IUnknown_QueryService(
                  punk,
                  &GUID_c2b937a9_3110_4398_8a56_f34c6342d244,
                  &GUID_c2b937a9_3110_4398_8a56_f34c6342d244,
                  &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( (_BYTE)v17 )
    (*(void (__fastcall **)(void *, struct ICreateProcessInputs *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  return 0LL;
}
