/*
 * XREFs of ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x18003BA20
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800388F4 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionProcessor::Create(
        struct IInputDeviceInfoStore *a1,
        struct InputRedirectionProcessor **a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  void *v13; // [rsp+40h] [rbp+18h]

  v12 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    v9 = 63LL;
LABEL_11:
    v10 = v7;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)v10);
    goto LABEL_7;
  }
  v4 = RefCountedObject::operator new(0x68uLL);
  v5 = (__int64)v4;
  v13 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x68uLL);
    *(_QWORD *)(v5 + 24) = &RefCountedObject::`vftable';
    *(_DWORD *)(v5 + 32) = 1;
    *(_QWORD *)v5 = &InputRedirectionProcessor::`vftable'{for `IContextualProcessor'};
    *(_QWORD *)(v5 + 8) = &InputRedirectionProcessor::`vftable'{for `IRemoteInputRedirection'};
    *(_QWORD *)(v5 + 16) = &InputRedirectionProcessor::`vftable'{for `IMessageObjectOwner'};
    *(_QWORD *)(v5 + 24) = &InputRedirectionProcessor::`vftable'{for `RefCountedObject'};
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_QWORD *)(v5 + 96) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v12 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    v9 = 70LL;
    goto LABEL_11;
  }
  v6 = InputRedirectionProcessor::Initialize((InputRedirectionProcessor *)v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v9 = 73LL;
    goto LABEL_13;
  }
  v12 = 0LL;
  *a2 = (struct InputRedirectionProcessor *)v5;
  v7 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v12);
  return v7;
}
