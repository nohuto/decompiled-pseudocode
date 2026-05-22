/*
 * XREFs of ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BB420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800DEF30 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x1801BAEB8 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::OnInputReport(GazeProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v6; // rdx
  struct tagPOINT *v7; // r9
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rcx
  struct InputContext *v14; // rdi
  struct tagPOINT v16; // [rsp+30h] [rbp-29h] BYREF
  struct InputContext *v17; // [rsp+38h] [rbp-21h] BYREF
  int v18[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v19; // [rsp+48h] [rbp-11h] BYREF
  __int128 v20; // [rsp+58h] [rbp-1h]
  _BYTE v21[24]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = 0;
  *(_QWORD *)v18 = 0LL;
  v16 = 0LL;
  if ( *(_DWORD *)a2 == 0x4000 )
  {
    if ( *((_BYTE *)this + 72) != 1 )
      goto LABEL_33;
    if ( *((_BYTE *)a2 + 60) )
    {
      v5 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
             (GazeProcessor *)((char *)this - 24),
             *(struct tagPOINT *)((char *)a2 + 52),
             (struct tagPOINT *)((char *)a2 + 44),
             &v16);
      if ( v5 < 0 )
      {
        v6 = 248LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
          (const char *)(unsigned int)v5);
        v4 = v5;
        goto LABEL_33;
      }
      *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)((char *)a2 + 44);
    }
    if ( *((_BYTE *)a2 + 80) )
    {
      v7 = &v16;
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
        goto LABEL_13;
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
    *(struct tagPOINT *)&v21[12] = v16;
    v21[20] = 1;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
    v8 = InputContext::Create(&v17);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
      v12 = (_QWORD *)((char *)this + 304);
      (*(void (__fastcall **)(__int64, __int128 *, struct InputContext *, _QWORD, int *))(*(_QWORD *)v11 + 56LL))(
        v11,
        &v19,
        v17,
        *((_QWORD *)this + 38),
        v18);
      v13 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 != *((_QWORD *)this + 38) )
      {
        if ( *v12 )
        {
          *((_DWORD *)a2 + 10) = 2;
          v8 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(*(_QWORD *)*v12 + 24LL))(*v12, a2);
          v9 = v8;
          if ( v8 < 0 )
          {
            v10 = 294LL;
            goto LABEL_31;
          }
          v13 = *(_QWORD *)v18;
        }
        if ( !v13
          || (*((_DWORD *)a2 + 10) = 1,
              v8 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2),
              v9 = v8,
              v8 >= 0) )
        {
          v14 = v17;
          if ( *((struct InputContext **)this + 39) != v17 )
          {
            v16 = (struct tagPOINT)v17;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v16);
            v16 = (struct tagPOINT)*((_QWORD *)this + 39);
            *((_QWORD *)this + 39) = v14;
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
          }
          Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 38, (__int64 *)v18);
          goto LABEL_32;
        }
        v10 = 301LL;
        goto LABEL_31;
      }
      if ( !*(_QWORD *)v18 )
        goto LABEL_32;
      *((_DWORD *)a2 + 10) = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2);
      v9 = v8;
      if ( v8 >= 0 )
        goto LABEL_32;
      v10 = 311LL;
    }
    else
    {
      v10 = 279LL;
    }
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v8);
    v4 = v9;
LABEL_32:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
    goto LABEL_33;
  }
  v4 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE8,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)0x80070057LL);
LABEL_33:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v18);
  return v4;
}
