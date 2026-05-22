/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJXZ @ 0x1800390F8
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800391E0 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180027EEC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, char *); // rbx
  int v4; // ebx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, char *); // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *); // rsi
  HKEY v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
  v3 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 72LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 14);
  v4 = v3(v2, (char *)this + 112);
  if ( v4 < 0 )
  {
    v8 = 117LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v4,
      v14);
    return (unsigned int)v4;
  }
  v5 = *((_QWORD *)this + 14);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 15);
  v4 = v6(v5, *((_QWORD *)this + 7), 1LL, (char *)this + 120);
  if ( v4 < 0 )
  {
    v8 = 118LL;
    goto LABEL_7;
  }
  if ( !IsEdition(253345LL) )
    return 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v16);
  v10 = CoreUICreate(&v16);
  v4 = v10;
  if ( v10 >= 0 )
  {
    v11 = v16;
    v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *))(*(_QWORD *)v16 + 144LL);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 213);
    v10 = v12(v11, lambda_bee3b73c73505971acff5e8346377b68_::_lambda_invoker_cdecl_, this, (char *)this + 1704);
    v4 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 16);
      RegistryWatcher::Create(
        v13,
        L"SYSTEM\\MOUSE",
        this,
        lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_,
        (struct RegistryWatcher **)this + 16);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v16);
      return 0LL;
    }
    v9 = 132LL;
  }
  else
  {
    v9 = 123LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
    (const char *)(unsigned int)v10,
    v14);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v16);
  return (unsigned int)v4;
}
