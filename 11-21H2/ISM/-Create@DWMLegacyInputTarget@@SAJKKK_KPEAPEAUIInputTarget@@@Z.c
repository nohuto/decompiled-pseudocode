/*
 * XREFs of ?Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x18019CD60
 * Callers:
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x18019A3E8 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DWMLegacyInputTarget@@IEAA@KKK_K@Z @ 0x18019CCBC (--0DWMLegacyInputTarget@@IEAA@KKK_K@Z.c)
 */

__int64 __fastcall DWMLegacyInputTarget::Create(int a1, int a2, int a3, unsigned __int64 a4, struct IInputTarget **a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  DWMLegacyInputTarget *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a5 )
  {
    v9 = -2147467261;
    v10 = 50LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
      (const char *)v9);
    return v9;
  }
  *a5 = 0LL;
  v12 = (DWMLegacyInputTarget *)RefCountedObject::operator new(0x50uLL);
  if ( v12 )
    v12 = DWMLegacyInputTarget::DWMLegacyInputTarget(v12, a1, a2, a3, a4);
  if ( !v12 )
  {
    v9 = -2147024882;
    v10 = 63LL;
    goto LABEL_3;
  }
  *a5 = v12;
  return 0LL;
}
