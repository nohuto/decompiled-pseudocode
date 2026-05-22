/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180037060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x180042900 (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004DE7C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RIMRawInputProvider::Create(
        struct IRawInputClient *a1,
        unsigned int a2,
        struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rax
  RIMRawInputProvider *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RIMRawInputProvider *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( a1 && a3 )
  {
    v6 = (RIMRawInputProvider *)RefCountedObject::operator new(0x110uLL);
    v14 = v6;
    if ( v6 )
      v7 = RIMRawInputProvider::RIMRawInputProvider(v6, a1);
    else
      v7 = 0LL;
    v14 = v7;
    if ( v7 )
    {
      v8 = RIMRawInputProvider::Initialize(v7, a2);
      v9 = v8;
      if ( v8 >= 0 )
      {
        *a3 = v7;
        return 0LL;
      }
      v11 = (unsigned int)v8;
      v12 = 77LL;
    }
    else
    {
      v9 = -2147024882;
      v11 = 2147942414LL;
      v12 = 74LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)v11);
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v14);
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)0x80070057LL);
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v14);
    return 2147942487LL;
  }
}
