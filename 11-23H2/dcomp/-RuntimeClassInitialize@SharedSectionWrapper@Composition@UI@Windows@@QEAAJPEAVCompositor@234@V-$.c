/*
 * XREFs of ?RuntimeClassInitialize@SharedSectionWrapper@Composition@UI@Windows@@QEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BF64
 * Callers:
 *     ??$MakeAndInitialize2@VSharedSectionWrapper@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAV?$span@E$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVSharedSectionWrapper@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAV?$span@E$0?0@gsl@@@Z @ 0x180131F68 (--$MakeAndInitialize2@VSharedSectionWrapper@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08 (-MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V-$span@.c)
 */

__int64 __fastcall Windows::UI::Composition::SharedSectionWrapper::RuntimeClassInitialize(
        Windows::UI::Composition::ProxyObject *this,
        struct Windows::UI::Composition::Compositor *a2,
        __int128 *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 171, 0);
  if ( v6 < 0 )
  {
    v7 = 33LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedsectionwrapper.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *a3;
  v6 = Windows::UI::Composition::SharedSectionWrapper::MarshalSharedData(
         (DirectComposition::CDelayedDestructionObject **)this,
         (__int64)a2,
         (__int64)&v9);
  if ( v6 < 0 )
  {
    v7 = 35LL;
    goto LABEL_3;
  }
  return 0LL;
}
