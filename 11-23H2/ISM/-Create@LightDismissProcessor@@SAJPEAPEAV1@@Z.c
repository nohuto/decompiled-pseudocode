/*
 * XREFs of ?Create@LightDismissProcessor@@SAJPEAPEAV1@@Z @ 0x18003B81C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LightDismissProcessor::Create(struct LightDismissProcessor **a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    v5 = 38LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lightdismiss\\processor\\ligh"
               "tdismissprocessor.cpp",
      (const char *)v2);
    goto LABEL_6;
  }
  v3 = RefCountedObject::operator new(0x18uLL);
  if ( v3 )
  {
    v3[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v3 + 4) = 1;
    *v3 = &LightDismissProcessor::`vftable'{for `IContextualProcessor'};
    v3[1] = &LightDismissProcessor::`vftable'{for `RefCountedObject'};
  }
  else
  {
    v3 = 0LL;
  }
  v7 = v3;
  if ( !v3 )
  {
    v2 = -2147024882;
    v5 = 45LL;
    goto LABEL_10;
  }
  v7 = 0LL;
  *a1 = (struct LightDismissProcessor *)v3;
LABEL_6:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v7);
  return v2;
}
