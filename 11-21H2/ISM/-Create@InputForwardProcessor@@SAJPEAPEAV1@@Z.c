/*
 * XREFs of ?Create@InputForwardProcessor@@SAJPEAPEAV1@@Z @ 0x1801A8BB0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InputForwardProcessor@@QEAA@XZ @ 0x1801A8A04 (--0InputForwardProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputForwardProcessor::Create(struct InputForwardProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  InputForwardProcessor *v4; // rax
  InputForwardProcessor *v5; // rdi
  __int64 *v6; // rdi
  int v7; // eax
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  InputForwardProcessor *v13; // [rsp+48h] [rbp+10h]

  v2 = 0;
  v12 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 37LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\lib\\inpu"
           "tforwardprocessor.cpp",
      (const char *)v2);
    goto LABEL_14;
  }
  v4 = (InputForwardProcessor *)RefCountedObject::operator new(0x60uLL);
  v5 = v4;
  v13 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x60uLL);
    v6 = (__int64 *)InputForwardProcessor::InputForwardProcessor(v5);
  }
  else
  {
    v6 = 0LL;
  }
  v12 = v6;
  if ( !v6 )
  {
    v2 = -2147024882;
    v3 = 41LL;
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v6 + 3);
  v7 = CoreUICreate(v6 + 3);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\lib\\inpu"
           "tforwardprocessor.cpp",
      (const char *)(unsigned int)v7,
      v10);
  if ( !v6[3] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      26LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\lib\\"
               "inputforwardprocessor.cpp",
      v8);
  v12 = 0LL;
  *a1 = (struct InputForwardProcessor *)v6;
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
  return v2;
}
