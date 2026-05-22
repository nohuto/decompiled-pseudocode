/*
 * XREFs of ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1801DF8C8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x1801DF9D4 (-Initialize@TapProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TapProcessor::Create(struct TapProcessor **a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  TapProcessor *v4; // rax
  TapProcessor *v5; // rbx
  unsigned __int64 v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TapProcessor *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 39LL;
LABEL_8:
    v6 = v2;
    goto LABEL_9;
  }
  v4 = (TapProcessor *)RefCountedObject::operator new(0x58uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    *(_QWORD *)v4 = &TapProcessor::`vftable'{for `IContextualProcessor'};
    *((_QWORD *)v4 + 1) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
    *((_QWORD *)v4 + 2) = &TapProcessor::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v4 + 8) = 63;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_BYTE *)v4 + 64) = 0;
    *((_QWORD *)v4 + 9) = 0LL;
    *((_DWORD *)v4 + 20) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v10 = v5;
  if ( !v5 )
  {
    v2 = -2147024882;
    v3 = 46LL;
    goto LABEL_8;
  }
  v7 = TapProcessor::Initialize(v5);
  v2 = v7;
  if ( v7 >= 0 )
  {
    v10 = 0LL;
    *a1 = v5;
    v2 = 0;
    goto LABEL_13;
  }
  v6 = (unsigned int)v7;
  v3 = 49LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
    (const char *)v6);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  return v2;
}
