/*
 * XREFs of ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801B4524
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??R?$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z @ 0x1801B42F8 (--R-$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z.c)
 *     ?Initialize@RawButtonProcessor@@AEAAJXZ @ 0x1801B487C (-Initialize@RawButtonProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RawButtonProcessor::Create(struct RawButtonProcessor **a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147024809;
    v4 = 33LL;
LABEL_8:
    v9 = v3;
    goto LABEL_9;
  }
  v5 = RefCountedObject::operator new(0x158uLL);
  v6 = v5;
  if ( !v5 )
  {
    v2 = 0LL;
    v3 = -2147024882;
    v4 = 40LL;
    goto LABEL_8;
  }
  memset_0(v5, 0, 0x158uLL);
  v6[1] = &RefCountedObject::`vftable';
  *((_DWORD *)v6 + 4) = 1;
  *v6 = &RawButtonProcessor::`vftable'{for `IContextualProcessor'};
  v6[1] = &RawButtonProcessor::`vftable'{for `RefCountedObject'};
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  *((_OWORD *)v6 + 18) = 0LL;
  *((_OWORD *)v6 + 19) = 0LL;
  v6[40] = 0LL;
  v6[41] = &RawButtonProcessor::PrivateMessageSession::`vftable';
  v2 = (__int64)v6;
  v7 = RawButtonProcessor::Initialize((RawButtonProcessor *)v6);
  v3 = v7;
  if ( v7 >= 0 )
  {
    v2 = 0LL;
    *a1 = (struct RawButtonProcessor *)v6;
    v3 = 0;
    goto LABEL_10;
  }
  v9 = (unsigned int)v7;
  v4 = 43LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\rawbut"
         "tonprocessor.cpp",
    (const char *)v9);
LABEL_10:
  if ( v2 )
    std::default_delete<RawButtonProcessor>::operator()(v8, v2);
  return v3;
}
