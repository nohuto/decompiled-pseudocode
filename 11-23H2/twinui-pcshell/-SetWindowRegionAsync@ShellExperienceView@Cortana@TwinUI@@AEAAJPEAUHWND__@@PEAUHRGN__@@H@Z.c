/*
 * XREFs of ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18046FE50
 * Callers:
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x18046FCC0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x18046F36C (Windows--Internal--ComTaskPool--QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(
        TwinUI::Cortana::ShellExperienceView *this,
        HWND a2,
        HRGN a3,
        int a4)
{
  HRGN v4; // rbx
  HRGN RectRgn; // rax
  int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  HGDIOBJ ho; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HRGN hrgnDst; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  hrgnDst = 0LL;
  if ( a3 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hrgnDst,
      RectRgn);
    v4 = hrgnDst;
    if ( !hrgnDst )
    {
      v10 = -2147467259;
      v11 = 378LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_11;
    }
    if ( !CombineRgn(hrgnDst, a3, 0LL, 5) )
    {
      v10 = -2147467259;
      v11 = 379LL;
      goto LABEL_10;
    }
  }
  v12 = *((_DWORD *)this + 76);
  ho = v4;
  v4 = 0LL;
  *(_QWORD *)v14 = a2;
  v16 = a4;
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___(
          (__int64)this,
          0x102u,
          v12,
          (__int64)v14);
  if ( ho )
    DeleteObject(ho);
  if ( v10 < 0 )
  {
    v11 = 387LL;
    goto LABEL_10;
  }
LABEL_11:
  if ( v4 )
    DeleteObject(v4);
  return (unsigned int)v10;
}
