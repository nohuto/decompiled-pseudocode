/*
 * XREFs of ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x180039BFC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TipToGlassProcessor::Create(struct TipToGlassProcessor **a1)
{
  unsigned int v1; // ebx
  _BYTE *v3; // rax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( !a1 )
  {
    v1 = -2147024809;
    v5 = 14LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\pentiptoglass\\system\\l"
                    "ib\\tiptoglassprocessor.cpp",
      (const char *)v1,
      v6);
    return v1;
  }
  v3 = RefCountedObject::operator new(0x20uLL);
  if ( !v3 )
  {
    v1 = -2147024882;
    v5 = 18LL;
    goto LABEL_7;
  }
  v3[24] = 0;
  *((_QWORD *)v3 + 1) = &RefCountedObject::`vftable';
  *(_QWORD *)v3 = &TipToGlassProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)v3 + 1) = &TipToGlassProcessor::`vftable'{for `RefCountedObject'};
  *((_DWORD *)v3 + 4) = 1;
  *a1 = (struct TipToGlassProcessor *)v3;
  return v1;
}
