/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x1800390D8
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18003BB24 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800318E4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180035CD8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x1800393BC (--$-4VInputConfigContextProvider@@@-$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180039408 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003965C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, const wchar_t *, char *); // rbx
  int v8; // eax
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, unsigned __int64, _QWORD, _QWORD); // rdi
  int v13; // eax
  _QWORD *v14; // rsi
  struct InputConfigContextProvider *Instance; // rax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  char v21; // [rsp+48h] [rbp-28h]
  _BYTE v22[32]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v24; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+50h] BYREF
  void *v26; // [rsp+C8h] [rbp+58h]

  v26 = &DWMCursorBroker::s_lock;
  v3 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    goto LABEL_12;
  }
  v20 = 0LL;
  v21 = 0;
  v24 = 0;
  v25 = 0LL;
  v5 = InputSecurityDescriptor::QueryDescriptor(&v20, v4, L"System\\Input\\CursorBrokerPort");
  v1 = v5;
  if ( v5 < 0 )
  {
LABEL_12:
    v17 = 68LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 22);
  v5 = CoreUICreate((char *)this + 176);
  v1 = v5;
  if ( v5 < 0 )
  {
    v17 = 70LL;
    goto LABEL_15;
  }
  v6 = *((_QWORD *)this + 22);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 25);
  v8 = v7(v6, v20, L"System\\Input\\CursorBrokerPort", (char *)this + 200);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v8,
      v19);
  v9 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 23);
  v5 = CoreUIFactoryCreate((char *)this + 184);
  v1 = v5;
  if ( v5 < 0 )
  {
    v17 = 77LL;
    goto LABEL_15;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
          *v9,
          &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
          &v24);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v10,
      v19);
  v11 = *v9;
  v12 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 32LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 24);
  v13 = v12(v11, ((unsigned __int64)this + 8) & -(__int64)(this != 0LL), 0LL, v24);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v13,
      (int)L"System\\Input\\CursorBrokerEndpoint");
  v14 = (_QWORD *)((char *)this + 472);
  Instance = InputConfigContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>((char *)this + 472, Instance);
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v14 + 24LL))(
         *v14,
         ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  v1 = v5;
  if ( v5 < 0 )
  {
    v17 = 93LL;
    goto LABEL_15;
  }
  v22[24] = 0;
  if ( (*(int (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v14 + 40LL))(*v14, v22) < 0
    || (v18 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, v22),
        v1 = v18,
        v18 >= 0) )
  {
    *((_DWORD *)this + 114) = 3;
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v22);
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v20);
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v18);
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v22);
LABEL_22:
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v25);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v20);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v1;
}
