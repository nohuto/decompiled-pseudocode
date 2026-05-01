/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800FE1BC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B8A40 (-CreateInstance@-$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x1800FF104 (--0CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180107A98 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_180107A98.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x180137914 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18016F170.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewServiceProvider,IUnknown,>(_QWORD *a1)
{
  CMultitaskingViewServiceProvider *v2; // rax
  CMultitaskingViewServiceProvider *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (CMultitaskingViewServiceProvider *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CMultitaskingViewServiceProvider::CMultitaskingViewServiceProvider(v2);
    v4 = CMultitaskingViewServiceProvider::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>>(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
