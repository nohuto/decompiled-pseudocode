/*
 * XREFs of ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18057B584
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     ImageList_Add @ 0x1802DAD84 (ImageList_Add.c)
 *     ImageList_Create @ 0x1802DADF0 (ImageList_Create.c)
 *     ImageList_GetIcon @ 0x1802DAEC8 (ImageList_GetIcon.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18057ADC8 (--1-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_Destroy@@YAH0@ZU.c)
 */

// Hidden C++ exception states: #wind=1
HICON __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        HBITMAP a2)
{
  int v3; // r9d
  struct _IMAGELIST *v4; // rax
  HBITMAP v5; // r8
  struct _IMAGELIST *v6; // rbx
  int v7; // edx
  UINT v8; // r8d
  HICON Icon; // rbx
  int v11; // [rsp+20h] [rbp-38h]
  _BYTE pv[4]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h]
  int cy; // [rsp+38h] [rbp-20h]
  struct _IMAGELIST *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = this;
  if ( GetObjectW(a2, 32, pv) )
  {
    v4 = ImageList_Create(v13, cy, 0x20021u, v3, v11);
    v6 = v4;
    v15 = v4;
    if ( v4 && ImageList_Add(v4, a2, v5) != -1 )
    {
      Icon = ImageList_GetIcon(v6, v7, v8);
      wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>(&v15);
      return Icon;
    }
    wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>(&v15);
  }
  return 0LL;
}
