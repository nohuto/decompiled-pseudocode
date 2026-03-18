/*
 * XREFs of ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x1800E9E10
 * Callers:
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801FF898 (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180047320 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateVisualTree(CCachedVisualImage *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rdx
  CVisual *v4; // rdi
  int VisualTree; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 184);
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 64) == *((_QWORD *)this + 18) )
      return 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 23);
    if ( *v1 )
      return 0LL;
  }
  v4 = (CVisual *)*((_QWORD *)this + 18);
  if ( !v4 )
    return 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v1);
  VisualTree = CVisual::GetVisualTree(v4, (struct CVisualTree **)v1);
  v6 = VisualTree;
  if ( VisualTree >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A4,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
    (const char *)(unsigned int)VisualTree);
  return v6;
}
