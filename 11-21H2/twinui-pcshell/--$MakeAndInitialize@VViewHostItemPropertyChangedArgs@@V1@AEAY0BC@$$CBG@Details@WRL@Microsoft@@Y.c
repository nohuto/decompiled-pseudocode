/*
 * XREFs of ??$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemPropertyChangedArgs@@AEAY0BC@$$CBG@Z @ 0x1803CB2E0
 * Callers:
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1803D2D30 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18013B958 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180171840 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x1803CCB84 (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CF444 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemPropertyChangedArgs,ViewHostItemPropertyChangedArgs,unsigned short const (&)[18]>(
        ViewHostItemPropertyChangedArgs **a1,
        const WCHAR *a2)
{
  ViewHostItemPropertyChangedArgs *v4; // rax
  unsigned int v5; // ebx
  ViewHostItemPropertyChangedArgs *v6; // rax
  ViewHostItemPropertyChangedArgs *v7; // rdi
  HRESULT v8; // eax
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const WCHAR *v14; // [rsp+30h] [rbp+8h] BYREF
  ViewHostItemPropertyChangedArgs *v15; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (ViewHostItemPropertyChangedArgs *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ViewHostItemPropertyChangedArgs::ViewHostItemPropertyChangedArgs(v4);
    v15 = v6;
    v7 = v6;
    v14 = a2;
    *((_DWORD *)v6 + 12) = 5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((__int64 *)v6 + 7, 0LL);
    v8 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((HSTRING *)v7 + 12, &v14);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)v7 + 11);
      while ( v10 >= 0 )
      {
        if ( (_DWORD)v10 != 0x7FFFFFFF )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 11, v10 + 1, v10);
          if ( v11 != v10 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v9);
LABEL_11:
      *a1 = v7;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
