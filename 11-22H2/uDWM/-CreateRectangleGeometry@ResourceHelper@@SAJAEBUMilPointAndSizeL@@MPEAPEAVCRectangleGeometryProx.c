/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800D6750
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180029050 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003749C (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x180052644 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        const struct MilPointAndSizeL *a1,
        float a2,
        struct CRectangleGeometryProxy **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct CRectangleGeometryProxy *v7; // rbx
  int v8; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  CRectangleGeometryProxy *v12; // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v5 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (__int64)"clientcore\\windows\\dwm\\udwm\\resourcehelper.cpp",
      (const char *)(unsigned int)v5);
LABEL_5:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
    return v6;
  }
  v7 = v12;
  v8 = CRectangleGeometryProxy::SetRectangle(
         v12,
         (float)*(int *)a1,
         (float)*((int *)a1 + 1),
         (float)(*(_DWORD *)a1 + *((_DWORD *)a1 + 2)));
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"clientcore\\windows\\dwm\\udwm\\resourcehelper.cpp",
      (const char *)(unsigned int)v8);
    v6 = v9;
    goto LABEL_5;
  }
  *a3 = v7;
  return 0LL;
}
