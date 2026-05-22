/*
 * XREFs of ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800388F4
 * Callers:
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x18003BA20 (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180035CD8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003965C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Initialize(
        InputRedirectionProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  __int64 *v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const wchar_t *, char *); // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, unsigned __int64, _QWORD, _QWORD, const char *, _QWORD, char *); // rdi
  __int64 v13; // rdx
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  char v15; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0;
  v14 = 0LL;
  v15 = 0;
  *((_QWORD *)this + 9) = a2;
  v3 = (__int64 *)((char *)this + 40);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  v4 = CoreUICreate(v3);
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 26LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_8;
  }
  v4 = InputSecurityDescriptor::QueryDescriptor(&v14, v5, L"System\\TouchInputRedirection");
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 30LL;
    goto LABEL_12;
  }
  v7 = *v3;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v7 + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 7);
  v4 = v8(v7, v14, L"System\\TouchInputRedirection", (char *)this + 56);
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 35LL;
    goto LABEL_12;
  }
  v9 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  v4 = CoreUIFactoryCreate((char *)this + 48);
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 37LL;
    goto LABEL_12;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
         *v9,
         &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
         &v17);
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 41LL;
    goto LABEL_12;
  }
  v10 = *v9;
  v11 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, const char *, _QWORD, char *))(*(_QWORD *)v10 + 32LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 8);
  v4 = v11(
         v10,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         0LL,
         v17,
         L"TouchInputRedirection",
         *((_QWORD *)this + 7),
         (char *)this + 64);
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 49LL;
    goto LABEL_12;
  }
  v6 = 0;
LABEL_8:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v14);
  return v6;
}
