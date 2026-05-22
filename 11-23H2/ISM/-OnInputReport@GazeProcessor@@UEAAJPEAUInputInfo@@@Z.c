/*
 * XREFs of ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801D9770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044CFC (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800F8BD0 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x1801D91E0 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::OnInputReport(GazeProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v6; // rdx
  struct tagPOINT *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  struct InputContext *v14; // rdi
  struct InputContext *v16; // [rsp+30h] [rbp-29h] BYREF
  struct tagPOINT v17; // [rsp+38h] [rbp-21h] BYREF
  int v18[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v19; // [rsp+48h] [rbp-11h] BYREF
  __int128 v20; // [rsp+58h] [rbp-1h]
  _BYTE v21[24]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = 0;
  *(_QWORD *)v18 = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)a2 == 0x4000 )
  {
    if ( *((_BYTE *)this + 72) != 1 )
      goto LABEL_32;
    if ( *((_BYTE *)a2 + 60) )
    {
      v5 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
             (GazeProcessor *)((char *)this - 24),
             *(struct tagPOINT *)((char *)a2 + 52),
             (struct tagPOINT *)((char *)a2 + 44),
             &v17);
      if ( v5 < 0 )
      {
        v6 = 248LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
          (const char *)(unsigned int)v5);
LABEL_8:
        v4 = v5;
        goto LABEL_32;
      }
      *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)((char *)a2 + 44);
    }
    if ( *((_BYTE *)a2 + 80) )
    {
      v7 = &v17;
      if ( *((_BYTE *)a2 + 60) )
        v7 = 0LL;
      v5 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
             (GazeProcessor *)((char *)this - 24),
             *(struct tagPOINT *)((char *)a2 + 72),
             (struct tagPOINT *)a2 + 8,
             v7);
      if ( v5 < 0 )
      {
        v6 = 260LL;
        goto LABEL_7;
      }
      *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 8);
    }
    v19 = 0LL;
    v20 = 0LL;
    memset(v21, 0, sizeof(v21));
    DWORD1(v19) = *((_DWORD *)a2 + 1);
    LODWORD(v19) = 16386;
    HIDWORD(v20) = 4;
    *(_DWORD *)&v21[8] = 1;
    *(struct tagPOINT *)&v21[12] = v17;
    v21[20] = 1;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
    v5 = InputContext::Create(&v16);
    if ( v5 < 0 )
    {
      v8 = 279LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
      goto LABEL_8;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    v10 = (_QWORD *)((char *)this + 304);
    (*(void (__fastcall **)(__int64, __int128 *, struct InputContext *, _QWORD, int *))(*(_QWORD *)v9 + 56LL))(
      v9,
      &v19,
      v16,
      *((_QWORD *)this + 38),
      v18);
    v11 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 == *((_QWORD *)this + 38) )
    {
      if ( *(_QWORD *)v18 )
      {
        *((_DWORD *)a2 + 10) = 0;
        v12 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v11 + 24LL))(v11, a2);
        if ( v12 < 0 )
        {
          v13 = 311LL;
          goto LABEL_27;
        }
      }
    }
    else
    {
      if ( *v10 )
      {
        *((_DWORD *)a2 + 10) = 2;
        v5 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(*(_QWORD *)*v10 + 24LL))(*v10, a2);
        if ( v5 < 0 )
        {
          v8 = 294LL;
          goto LABEL_18;
        }
        v11 = *(_QWORD *)v18;
      }
      if ( v11 )
      {
        *((_DWORD *)a2 + 10) = 1;
        v12 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v11 + 24LL))(v11, a2);
        if ( v12 < 0 )
        {
          v13 = 301LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
          v4 = v12;
          goto LABEL_32;
        }
      }
      v14 = v16;
      if ( *((struct InputContext **)this + 39) != v16 )
      {
        v17 = (struct tagPOINT)v16;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v17);
        v17 = (struct tagPOINT)*((_QWORD *)this + 39);
        *((_QWORD *)this + 39) = v14;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
      }
      Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)this + 38, (__int64 *)v18);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
    goto LABEL_32;
  }
  v4 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)0x80070057LL);
LABEL_32:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v18);
  return v4;
}
