/*
 * XREFs of ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800C0A10
 * Callers:
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18020F818 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800845D8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CContent@@KAPEAX_K@Z @ 0x1800B30A8 (--2CContent@@KAPEAX_K@Z.c)
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800C0420 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800C3BD4 (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopTree::Initialize(struct CComposition **this)
{
  CVisual *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CVisual *)CContent::operator new(0x2C0uLL);
  if ( v2 )
    v2 = CVisual::CVisual(v2, this[2]);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(this + 590, v2);
  this[8] = this[590];
  v3 = CVisualTree::Initialize((CVisualTree *)this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
