/*
 * XREFs of ?SetInkLookupId@CSynchronousSuperWetInk@DirectComposition@@QEAAJI@Z @ 0x1800FCA9C
 * Callers:
 *     ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z @ 0x1800E6CC0 (-RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::SetInkLookupId(
        DirectComposition::CSynchronousSuperWetInk *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 20) != 2 )
  {
    v2 = -2147467259;
    v3 = 318LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)v2);
    return v2;
  }
  v2 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
         (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 2) + 8LL),
         11,
         a2);
  if ( (v2 & 0x80000000) != 0 )
  {
    v3 = 321LL;
    goto LABEL_5;
  }
  return v2;
}
