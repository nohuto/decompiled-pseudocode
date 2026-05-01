/*
 * XREFs of ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803CFFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18016A720 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA298 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1803CF518 (-IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803D1ADC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ResizeView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // ebx
  __int64 v7; // rax
  int v8; // eax
  const unsigned __int16 *v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int IsViewManaged; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  HolographicApps *v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v22; // [rsp+68h] [rbp+28h] BYREF
  struct tagSIZE v23; // [rsp+70h] [rbp+30h]

  v23 = a3;
  cx = a3.cx;
  v7 = *(_QWORD *)a2;
  v20[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, HolographicApps **, struct tagSIZE, struct tagSIZE))(v7 + 136))(
         a2,
         v20,
         a3,
         a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 572LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v11);
    goto LABEL_22;
  }
  if ( !HolographicApps::IsAppAllowedToBeResized(v20[0], v9) )
  {
    v10 = -2147467263;
    goto LABEL_22;
  }
  IsViewManaged = HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this + 16), a2, (int *)&v22);
  v10 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    v11 = (unsigned int)IsViewManaged;
    v12 = 576LL;
    goto LABEL_8;
  }
  if ( !(_DWORD)v22 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 577LL;
    goto LABEL_8;
  }
  HolographicPositioner::_FindViewHostItem((char *)this - 120, &v18, a2);
  if ( !v18 )
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x244,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070490LL);
    goto LABEL_18;
  }
  *(float *)&v22 = (float)cx;
  *((float *)&v22 + 1) = (float)v23.cy;
  v19 = 0LL;
  v14 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
          &v18,
          &v19);
  v10 = v14;
  if ( v14 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 72LL))(v19, v22);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v10 = 0;
      goto LABEL_17;
    }
    v15 = 587LL;
  }
  else
  {
    v15 = 586LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v14);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
LABEL_18:
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v16)[2])(v16);
  }
LABEL_22:
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)v20);
  return v10;
}
