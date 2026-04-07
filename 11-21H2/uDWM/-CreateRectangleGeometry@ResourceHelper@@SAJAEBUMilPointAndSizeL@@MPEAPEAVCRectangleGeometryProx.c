/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180005DEC
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18002BF30 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000DBA0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x18000FBD0 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        const struct MilPointAndSizeL *a1,
        float a2,
        struct CRectangleGeometryProxy **a3)
{
  int v5; // eax
  unsigned int v6; // edi
  CBaseObject *v7; // rbx
  struct CRectangleGeometryProxy *v8; // rax
  __int64 v10; // rdx
  bool v11; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  CRectangleGeometryProxy *v13; // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v5 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v13);
  v6 = v5;
  v7 = v13;
  if ( v5 < 0 )
  {
    v10 = 71LL;
  }
  else
  {
    v5 = CRectangleGeometryProxy::SetRectangle(
           v13,
           (float)*(int *)a1,
           (float)*((int *)a1 + 1),
           (float)(*(_DWORD *)a1 + *((_DWORD *)a1 + 2)),
           (float)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 3)),
           a2,
           a2,
           a2,
           a2,
           a2,
           a2,
           a2,
           a2,
           v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v8 = v7;
      v7 = 0LL;
      *a3 = v8;
      v6 = 0;
      goto LABEL_4;
    }
    v10 = 86LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\resourcehelper.cpp",
    (const char *)(unsigned int)v5);
LABEL_4:
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
