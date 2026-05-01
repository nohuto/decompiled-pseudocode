/*
 * XREFs of ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804ACEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A72B8 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1804AC4E8 (-IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804AC620 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1804AE9B8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ResizeView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // ebx
  __int64 (__fastcall *v7)(struct IApplicationView *, void **); // rdi
  void **v8; // rax
  int v9; // eax
  const unsigned __int16 *v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  int IsViewManaged; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v23; // [rsp+68h] [rbp+28h] BYREF
  struct tagSIZE v24; // [rsp+70h] [rbp+30h]

  v24 = a3;
  cx = a3.cx;
  pv = 0LL;
  v7 = *(__int64 (__fastcall **)(struct IApplicationView *, void **))(*(_QWORD *)a2 + 136LL);
  v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v9 = v7(a2, v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = (unsigned int)v9;
    v13 = 570LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v12);
    goto LABEL_22;
  }
  if ( !HolographicApps::IsAppAllowedToBeResized((HolographicApps *)pv, v10) )
  {
    v11 = -2147467263;
    goto LABEL_22;
  }
  IsViewManaged = HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this + 16), a2, (int *)&v23);
  v11 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    v12 = (unsigned int)IsViewManaged;
    v13 = 574LL;
    goto LABEL_8;
  }
  if ( !(_DWORD)v23 )
  {
    v11 = -2147024809;
    v12 = 2147942487LL;
    v13 = 575LL;
    goto LABEL_8;
  }
  HolographicPositioner::_FindViewHostItem((char *)this - 120, &v19, a2);
  if ( !v19 )
  {
    v11 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070490LL);
    goto LABEL_18;
  }
  *(float *)&v23 = (float)cx;
  *((float *)&v23 + 1) = (float)v24.cy;
  v20 = 0LL;
  v15 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
          &v19,
          &v20);
  v11 = v15;
  if ( v15 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 72LL))(v20, v23);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v11 = 0;
      goto LABEL_17;
    }
    v16 = 585LL;
  }
  else
  {
    v16 = 584LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v15);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
LABEL_18:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v17)[2])(v17);
  }
LABEL_22:
  if ( pv )
    CoTaskMemFree(pv);
  return v11;
}
