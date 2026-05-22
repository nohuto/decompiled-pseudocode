/*
 * XREFs of ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1801B3B68
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x1801B3C78 (-Initialize@TapProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TapProcessor::Create(struct TapProcessor **a1)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  __int64 v4; // rdx
  TapProcessor *v5; // rax
  TapProcessor *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TapProcessor *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( a1 )
  {
    v5 = (TapProcessor *)RefCountedObject::operator new(0x58uLL);
    v6 = v5;
    if ( v5 )
    {
      *((_QWORD *)v5 + 2) = &RefCountedObject::`vftable';
      *((_DWORD *)v5 + 6) = 1;
      *(_QWORD *)v5 = &TapProcessor::`vftable'{for `IContextualProcessor'};
      *((_QWORD *)v5 + 1) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
      *((_QWORD *)v5 + 2) = &TapProcessor::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v5 + 8) = 63;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_BYTE *)v5 + 64) = 0;
      *((_QWORD *)v5 + 9) = 0LL;
      *((_DWORD *)v5 + 20) = 0;
    }
    else
    {
      v6 = 0LL;
    }
    v10 = v6;
    if ( v6 )
    {
      v7 = TapProcessor::Initialize(v6);
      v2 = v7;
      if ( v7 >= 0 )
      {
        v10 = 0LL;
        *a1 = v6;
        v2 = 0;
        goto LABEL_12;
      }
      v3 = (unsigned int)v7;
      v4 = 49LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 2147942414LL;
      v4 = 46LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 2147942487LL;
    v4 = 39LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
    (const char *)v3);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  return v2;
}
