/*
 * XREFs of ?RuntimeClassInitialize@CompositionCommitDeferral@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x1801825D8
 * Callers:
 *     ??$MakeAndInitialize2@VCommitDeferral@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCommitDeferral@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011FED4 (--$MakeAndInitialize2@VCommitDeferral@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCommitDeferral::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionCommitDeferral *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  if ( v4 < 0 )
  {
    v5 = 96LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncommitdeferral.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionCommitDeferral *, struct Windows::UI::Composition::Compositor *))(*(_QWORD *)this + 280LL))(
         this,
         a2);
  if ( v4 < 0 )
  {
    v5 = 98LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 144) = 1;
  return 0LL;
}
