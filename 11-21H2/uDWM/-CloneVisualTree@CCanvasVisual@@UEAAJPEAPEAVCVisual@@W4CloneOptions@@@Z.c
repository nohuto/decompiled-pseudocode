/*
 * XREFs of ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800466C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800265D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046748 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCanvasVisual::CloneVisualTree(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CBaseObject *v8; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CCanvasVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  v6 = CCanvasVisual::Create(&v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 77LL;
  }
  else
  {
    v6 = CRenderDataVisual::InitializeVisualTreeClone(a1, v12, a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = 0LL;
      *a2 = v12;
      v7 = 0;
      goto LABEL_4;
    }
    v10 = 78LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\canvasvisual.cpp",
    (const char *)(unsigned int)v6);
  v8 = v12;
LABEL_4:
  if ( v8 )
  {
    v12 = 0LL;
    CBaseObject::Release(v8);
  }
  return v7;
}
