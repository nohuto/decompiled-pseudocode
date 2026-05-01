/*
 * XREFs of ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1803BCB78
 * Callers:
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803BBCA4 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1803BBFBC (-LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsof.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIPersistStream@@@?$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPersistStream@@@WRL@Microsoft@@@Details@12@@Z @ 0x180316B7C (--$As@UIPersistStream@@@-$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PWSLayoutPolicyManager::XMLDocFromStream(
        struct Windows::Storage::Streams::IRandomAccessStream *a1,
        struct IXMLDOMDocument2 **a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  struct IXMLDOMDocument2 *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID ppv; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  v4 = CreateStreamOverRandomAccessStream(a1, &GUID_0000000c_0000_0000_c000_000000000046, &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppv);
    v4 = CoCreateInstance(
           &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
           0LL,
           1u,
           &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
           &ppv);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 269LL;
      goto LABEL_7;
    }
    v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 270LL;
      goto LABEL_7;
    }
    v14 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IXMLDOMDocument2>::As<IPersistStream>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&ppv,
           &v14);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 40LL))(v14, v13);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v9 = (struct IXMLDOMDocument2 *)ppv;
        if ( ppv )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
          v9 = (struct IXMLDOMDocument2 *)ppv;
        }
        *a2 = v9;
        v5 = 0;
        goto LABEL_16;
      }
      v8 = 274LL;
    }
    else
    {
      v8 = 273LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_16:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    goto LABEL_17;
  }
  v6 = 268LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_17:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppv);
  return v5;
}
