/*
 * XREFs of ?XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18031A04C
 * Callers:
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801172B8 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180317DA4 (-GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180317FB4 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1803189C0 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIPersistStream@@@?$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPersistStream@@@WRL@Microsoft@@@Details@12@@Z @ 0x180316B7C (--$As@UIPersistStream@@@-$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::XMLDocFromStream(
        TaskbarLayoutPolicyManager *this,
        struct Windows::Storage::Streams::IRandomAccessStream *a2,
        struct IXMLDOMDocument2 **a3)
{
  int v5; // ebx
  HRESULT v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  struct IXMLDOMDocument2 *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppv = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  v5 = CreateStreamOverRandomAccessStream(a2, &GUID_0000000c_0000_0000_c000_000000000046, &v13);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppv);
    v6 = CoCreateInstance(
           &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
           0LL,
           1u,
           &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
           &ppv);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 631LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_14;
    }
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 632LL;
      goto LABEL_6;
    }
    v14 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IXMLDOMDocument2>::As<IPersistStream>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&ppv,
           &v14);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 40LL))(v14, v13);
      if ( v5 >= 0 )
      {
        v9 = (struct IXMLDOMDocument2 *)ppv;
        if ( ppv )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
          v9 = (struct IXMLDOMDocument2 *)ppv;
        }
        *a3 = v9;
        v5 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27B,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v5;
}
