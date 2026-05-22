/*
 * XREFs of ?OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800239D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall OneCoreUAPInputHost::OnTargetWithFocusChanged(
        OneCoreUAPInputHost *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 i; // rdi
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  if ( v6 )
  {
    v16 = 0LL;
    if ( (**v6)(v6, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, &v16) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v16 + 24LL))(
             v16,
             a2,
             a3);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
          (const char *)(unsigned int)v7,
          v14);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
        return v8;
      }
    }
    v9 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = *((_QWORD *)this + 7);
  for ( i = *((_QWORD *)this + 8); v10 != i; v10 += 24LL )
  {
    v16 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v10 + 16))(
           *(_QWORD *)(v10 + 16),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v16) >= 0 )
      (*(void (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v16 + 24LL))(
        v16,
        a2,
        a3);
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( a2 != a3 )
    *(_BYTE *)(*((_QWORD *)this + 11) + 192LL) = 1;
  return 0LL;
}
