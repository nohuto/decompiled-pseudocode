/*
 * XREFs of ?CreateNarratorProxy@NarratorProxy@@QEAAJAEAV?$ComPtr@UIMessageFactory@@@WRL@Microsoft@@PEAUIMessageProxyListener@@@Z @ 0x1800FE288
 * Callers:
 *     ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800FF570 (-SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NarratorProxy::CreateNarratorProxy(__int64 *a1, _QWORD *a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*a2 + 24LL))(
         *a2,
         &GUID_036f83f6_2c8b_4f50_ad5a_833402b2feb4,
         &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = *a2;
    v10 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v9 + 40LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
    v6 = v10(v9, L"System\\RemoteTextInputOverrider", v15, &v16);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
      v12 = **v16;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1);
      v6 = v12(v11, &GUID_036f83f6_2c8b_4f50_ad5a_833402b2feb4, a1);
      v7 = v6;
      if ( v6 >= 0 )
      {
        v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v16)[7])(v16, a3);
        v7 = v6;
        if ( v6 >= 0 )
        {
          v7 = 0;
          goto LABEL_11;
        }
        v8 = 28LL;
      }
      else
      {
        v8 = 25LL;
      }
    }
    else
    {
      v8 = 22LL;
    }
  }
  else
  {
    v8 = 21LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardoverrid"
             "erdispatcher.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
  return v7;
}
