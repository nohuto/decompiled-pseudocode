/*
 * XREFs of ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x18003B9B8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VTipToGlassProcessor@@U?$default_delete@VTipToGlassProcessor@@@std@@@std@@QEAA@XZ @ 0x1801D2618 (--1-$unique_ptr@VTipToGlassProcessor@@U-$default_delete@VTipToGlassProcessor@@@std@@@std@@QEAA@X.c)
 */

__int64 __fastcall TipToGlassProcessor::Create(struct TipToGlassProcessor **a1)
{
  _BYTE *v2; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v2 = RefCountedObject::operator new(0x20uLL);
    if ( v2 )
    {
      v2[24] = 0;
      *((_QWORD *)v2 + 1) = &RefCountedObject::`vftable';
      *(_QWORD *)v2 = &TipToGlassProcessor::`vftable'{for `IContextualProcessor'};
      *((_QWORD *)v2 + 1) = &TipToGlassProcessor::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v2 + 4) = 1;
      *a1 = (struct TipToGlassProcessor *)v2;
      return 0LL;
    }
    v4 = -2147024882;
    v5 = 18LL;
  }
  else
  {
    v4 = -2147024809;
    v5 = 14LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\pentiptoglass\\system\\lib\\tip"
             "toglassprocessor.cpp",
    (const char *)v4);
  std::unique_ptr<TipToGlassProcessor>::~unique_ptr<TipToGlassProcessor>(&v7);
  return v4;
}
