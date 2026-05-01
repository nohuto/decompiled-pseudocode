/*
 * XREFs of ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1803CB0F8
 * Callers:
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@@012@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1803CB1CC (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holograp_ea_1803CB1CC.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D30E8 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180171840 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x1803CCAB0 (--0ViewHostItemEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z @ 0x1803CD5B0 (-Attach@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CF41C (-InternalRelease@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,std::nullptr_t>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  ViewHostItemEventArgs *v7; // rax
  ViewHostItemEventArgs *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 *v11; // rcx
  volatile int *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (ViewHostItemEventArgs *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = ViewHostItemEventArgs::ViewHostItemEventArgs(v7);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::Attach(&v16, v8);
    v9 = *a3;
    v10 = v16;
    v11 = (__int64 *)(v16 + 56);
    *(_DWORD *)(v16 + 48) = *a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=(v11, v9);
    v13 = *(_QWORD *)(v10 + 80);
    while ( v13 >= 0 )
    {
      if ( (_DWORD)v13 != 0x7FFFFFFF )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 80), v13 + 1, v13);
        if ( v14 != v13 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v12);
LABEL_9:
    *a1 = v16;
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
