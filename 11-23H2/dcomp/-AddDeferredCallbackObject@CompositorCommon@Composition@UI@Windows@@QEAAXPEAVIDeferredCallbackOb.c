/*
 * XREFs of ?AddDeferredCallbackObject@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVIDeferredCallbackObject@234@@Z @ 0x1801247BC
 * Callers:
 *     ?SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x18015751C (-SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeferredCallbackObject@Composition@UI@Windows@@@?$vector@PEAVIDeferredCallbackObject@Composition@UI@Windows@@V?$allocator@PEAVIDeferredCallbackObject@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVIDeferredCallbackObject@Composition@UI@Windows@@QEAPEAV2345@AEBQEAV2345@@Z @ 0x180122534 (--$_Emplace_reallocate@AEBQEAVIDeferredCallbackObject@Composition@UI@Windows@@@-$vector@PEAVIDef.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::AddDeferredCallbackObject(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::IDeferredCallbackObject *a2)
{
  _QWORD *v3; // rdi
  _BYTE *v4; // rdx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::IDeferredCallbackObject *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (_QWORD *)((char *)this + 920);
  v4 = (_BYTE *)*((_QWORD *)this + 116);
  if ( v4 == *((_BYTE **)this + 117) )
  {
    std::vector<Windows::UI::Composition::IDeferredCallbackObject *>::_Emplace_reallocate<Windows::UI::Composition::IDeferredCallbackObject * const &>(
      (__int64)this + 920,
      v4,
      &v9);
  }
  else
  {
    *(_QWORD *)v4 = a2;
    *((_QWORD *)this + 116) += 8LL;
  }
  if ( ((*((_QWORD *)this + 116) - *v3) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
  {
    LOBYTE(v4) = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 55) + 48LL))(*((_QWORD *)this + 55), v4);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        867LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
}
