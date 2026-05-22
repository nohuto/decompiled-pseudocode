/*
 * XREFs of ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x180034714
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180034EF4 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionProcessor::Create(
        struct IInputDeviceInfoStore *a1,
        struct InputRedirectionProcessor **a2)
{
  char *v4; // rax
  InputRedirectionProcessor *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  InputRedirectionProcessor *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    v9 = 2147942487LL;
    v10 = 63LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)v9,
      v11);
    goto LABEL_7;
  }
  v4 = (char *)malloc(0x68uLL);
  v5 = (InputRedirectionProcessor *)v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *(_OWORD *)(v4 + 88) = 0LL;
    *((_DWORD *)v4 + 8) = 1;
    *(_QWORD *)v4 = &InputRedirectionProcessor::`vftable'{for `IContextualProcessor'};
    *((_QWORD *)v4 + 1) = &InputRedirectionProcessor::`vftable'{for `IRemoteInputRedirection'};
    *((_QWORD *)v4 + 2) = &InputRedirectionProcessor::`vftable'{for `IMessageObjectOwner'};
    *((_QWORD *)v4 + 3) = &InputRedirectionProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 10) = 0LL;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v13 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    v9 = 2147942414LL;
    v10 = 70LL;
    goto LABEL_12;
  }
  v6 = InputRedirectionProcessor::Initialize(v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 73LL;
    goto LABEL_12;
  }
  v13 = 0LL;
  *a2 = v5;
  v7 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v13);
  return v7;
}
