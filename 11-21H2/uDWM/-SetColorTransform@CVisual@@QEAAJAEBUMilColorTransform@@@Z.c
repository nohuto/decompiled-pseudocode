/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180100604
 * Callers:
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x1800BCA50 (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memcmp_0 @ 0x1800636EF (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800A82C8 (-Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ??$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x1800A82FC (--$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::SetColorTransform(CVisual *this, const struct MilColorTransform *a2)
{
  CColorTransformResourceProxy *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CColorTransformResourceProxy *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  if ( memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = CCompositor::CreateProxy<CColorTransformResourceProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           &v11);
    v6 = v5;
    v4 = v11;
    if ( v5 < 0 )
    {
      v7 = 497LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_13;
    }
    v5 = CColorTransformResourceProxy::Update(v11, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 499LL;
      goto LABEL_11;
    }
  }
  if ( v4 )
    v8 = *(unsigned int *)(*((_QWORD *)v4 + 2) + 24LL);
  else
    v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 472LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 503LL;
    goto LABEL_11;
  }
  v6 = 0;
LABEL_13:
  if ( v4 )
    CBaseObject::Release(v4);
  return v6;
}
