/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180040C48
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180040B94 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x180034E8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180040EF8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1800FA300 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x1800FA354 (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rdx
  int Descriptor; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, HLOCAL, const wchar_t *, char *); // rbx
  int v8; // eax
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, char *, _QWORD, _QWORD); // rdi
  int v13; // eax
  struct InputConfigContextProvider *Instance; // rax
  struct InputConfigContextProvider *v15; // rbx
  __int64 v17; // rdx
  int v18; // eax
  const char *v19; // [rsp+20h] [rbp-60h]
  HLOCAL hMem; // [rsp+48h] [rbp-38h] BYREF
  char v21; // [rsp+50h] [rbp-30h]
  _BYTE v22[24]; // [rsp+58h] [rbp-28h] BYREF
  char v23; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v25; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+50h] BYREF
  void *v27; // [rsp+D8h] [rbp+58h]

  v27 = &DWMCursorBroker::s_lock;
  v3 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    goto LABEL_25;
  }
  hMem = 0LL;
  v21 = 0;
  v25 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&hMem, v4, (__int64)L"System\\Input\\CursorBrokerPort");
  v1 = Descriptor;
  if ( Descriptor < 0 )
  {
LABEL_25:
    v17 = 68LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)Descriptor,
      (int)v19);
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 22);
  Descriptor = CoreUICreate((char *)this + 176);
  v1 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 70LL;
    goto LABEL_32;
  }
  v6 = *((_QWORD *)this + 22);
  v7 = *(__int64 (__fastcall **)(__int64, HLOCAL, const wchar_t *, char *))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 25);
  v8 = v7(v6, hMem, L"System\\Input\\CursorBrokerPort", (char *)this + 200);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v8,
      (int)v19);
  v9 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 23);
  Descriptor = CoreUIFactoryCreate((char *)this + 184);
  v1 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 77LL;
    goto LABEL_32;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
          *v9,
          &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
          &v25);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v10,
      (int)v19);
  v11 = *v9;
  v12 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v11 + 32LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 24);
  v19 = L"System\\Input\\CursorBrokerEndpoint";
  v13 = v12(v11, (char *)this + 8, 0LL, v25);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v13,
      (int)L"System\\Input\\CursorBrokerEndpoint");
  Instance = InputConfigContextProvider::GetInstance();
  v15 = Instance;
  if ( Instance )
    (*(void (__fastcall **)(struct InputConfigContextProvider *))(*(_QWORD *)Instance + 8LL))(Instance);
  v26 = *((_QWORD *)this + 59);
  *((_QWORD *)this + 59) = v15;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v26);
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 59) + 24LL))(
                 *((_QWORD *)this + 59),
                 (char *)this + 16);
  v1 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 93LL;
    goto LABEL_32;
  }
  v23 = 0;
  if ( (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 59) + 40LL))(*((_QWORD *)this + 59), v22) < 0
    || (v18 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, v22),
        v1 = v18,
        v18 >= 0) )
  {
    *((_DWORD *)this + 114) = 3;
    v1 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v18,
      (int)L"System\\Input\\CursorBrokerEndpoint");
  }
  if ( v23 != -1 && v23 && v23 != 1 )
  {
    if ( v23 == 2 )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v22);
    }
    else if ( v23 == 3 )
    {
      std::vector<VirtualTouchpadRect>::_Tidy(v22);
    }
  }
LABEL_19:
  if ( hMem )
  {
    if ( v21 )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(hMem);
    hMem = 0LL;
  }
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v1;
}
