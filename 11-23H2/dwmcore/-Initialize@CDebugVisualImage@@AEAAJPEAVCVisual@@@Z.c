/*
 * XREFs of ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180218180
 * Callers:
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1802180BC (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18002820C (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007FD6C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x1800ED050 (-UpdateVisualTree@CCachedVisualImage@@MEAAJXZ.c)
 */

__int64 __fastcall CDebugVisualImage::Initialize(CDebugVisualImage *this, struct CVisual *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 87;
  *((_DWORD *)this + 41) = 1;
  CCachedVisualImage::ChoosePixelFormat(this);
  *((_QWORD *)this + 18) = a2;
  updated = CResource::RegisterNotifier(this, a2);
  if ( updated < 0 )
  {
    v5 = 67LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CCachedVisualImage::UpdateVisualTree(this);
  if ( updated < 0 )
  {
    v5 = 68LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 1776) = 1;
  return 0LL;
}
