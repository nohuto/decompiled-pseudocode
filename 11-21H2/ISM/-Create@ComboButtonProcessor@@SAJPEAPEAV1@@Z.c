/*
 * XREFs of ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801A632C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??R?$default_delete@VComboButtonProcessor@@@std@@QEBAXPEAVComboButtonProcessor@@@Z @ 0x1801A62A4 (--R-$default_delete@VComboButtonProcessor@@@std@@QEBAXPEAVComboButtonProcessor@@@Z.c)
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1801A6438 (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ComboButtonProcessor::Create(struct ComboButtonProcessor **a1)
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
    v4 = 28LL;
LABEL_8:
    v9 = v3;
    goto LABEL_9;
  }
  v5 = RefCountedObject::operator new(0x128uLL);
  v6 = v5;
  if ( !v5 )
  {
    v2 = 0LL;
    v3 = -2147024882;
    v4 = 35LL;
    goto LABEL_8;
  }
  memset_0(v5, 0, 0x128uLL);
  v6[1] = &RefCountedObject::`vftable';
  *((_DWORD *)v6 + 4) = 1;
  *v6 = &ComboButtonProcessor::`vftable'{for `IContextualProcessor'};
  v6[1] = &ComboButtonProcessor::`vftable'{for `RefCountedObject'};
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[6] = 0LL;
  v2 = (__int64)v6;
  v7 = ComboButtonProcessor::Initialize((ComboButtonProcessor *)v6);
  v3 = v7;
  if ( v7 >= 0 )
  {
    v2 = 0LL;
    *a1 = (struct ComboButtonProcessor *)v6;
    v3 = 0;
    goto LABEL_10;
  }
  v9 = (unsigned int)v7;
  v4 = 38LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\combobuttonprocessor.cpp",
    (const char *)v9);
LABEL_10:
  if ( v2 )
    std::default_delete<ComboButtonProcessor>::operator()(v8, v2);
  return v3;
}
