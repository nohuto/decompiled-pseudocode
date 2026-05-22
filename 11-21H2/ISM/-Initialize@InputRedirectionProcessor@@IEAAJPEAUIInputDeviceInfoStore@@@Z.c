/*
 * XREFs of ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180034EF4
 * Callers:
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x180034714 (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x180034E8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Initialize(
        InputRedirectionProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  __int64 *v3; // rdi
  int Descriptor; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HLOCAL, const wchar_t *, char *); // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, char *, _QWORD, _QWORD); // rdi
  __int64 v13; // rdx
  const char *v14; // [rsp+20h] [rbp-48h]
  HLOCAL hMem; // [rsp+40h] [rbp-28h] BYREF
  char v16; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = 0;
  hMem = 0LL;
  v16 = 0;
  *((_QWORD *)this + 9) = a2;
  v3 = (__int64 *)((char *)this + 40);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  Descriptor = CoreUICreate(v3);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v13 = 26LL;
  }
  else
  {
    Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&hMem, v5, (__int64)L"System\\TouchInputRedirection");
    v6 = Descriptor;
    if ( Descriptor < 0 )
    {
      v13 = 30LL;
    }
    else
    {
      v7 = *v3;
      v8 = *(__int64 (__fastcall **)(__int64, HLOCAL, const wchar_t *, char *))(*(_QWORD *)v7 + 56LL);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 7);
      Descriptor = v8(v7, hMem, L"System\\TouchInputRedirection", (char *)this + 56);
      v6 = Descriptor;
      if ( Descriptor < 0 )
      {
        v13 = 35LL;
      }
      else
      {
        v9 = (_QWORD *)((char *)this + 48);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
        Descriptor = CoreUIFactoryCreate((char *)this + 48);
        v6 = Descriptor;
        if ( Descriptor < 0 )
        {
          v13 = 37LL;
        }
        else
        {
          Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
                         *v9,
                         &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
                         &v18);
          v6 = Descriptor;
          if ( Descriptor < 0 )
          {
            v13 = 41LL;
          }
          else
          {
            v10 = *v9;
            v11 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v10 + 32LL);
            Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 8);
            v14 = L"TouchInputRedirection";
            Descriptor = v11(v10, (char *)this + 8, 0LL, v18);
            v6 = Descriptor;
            if ( Descriptor >= 0 )
            {
              v6 = 0;
              goto LABEL_8;
            }
            v13 = 49LL;
          }
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\"
                  "lib\\inputredirectionprocessor.cpp",
    (const char *)(unsigned int)Descriptor,
    (int)v14);
LABEL_8:
  if ( hMem )
  {
    if ( v16 )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(hMem);
  }
  return v6;
}
