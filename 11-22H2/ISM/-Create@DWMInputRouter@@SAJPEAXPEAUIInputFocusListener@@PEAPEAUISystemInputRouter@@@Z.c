/*
 * XREFs of ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1801C5D80
 * Callers:
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18004E820 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18002B610 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  DWMInputRouter *v6; // rax
  DWMInputRouter *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWMInputRouter *v14; // [rsp+30h] [rbp+8h] BYREF
  DWMInputRouter *v15; // [rsp+48h] [rbp+20h]

  v14 = 0LL;
  if ( a1 && a3 )
  {
    v6 = (DWMInputRouter *)RefCountedObject::operator new(0x308uLL);
    v15 = v6;
    if ( v6 )
      v7 = DWMInputRouter::DWMInputRouter(v6, a1, a2);
    else
      v7 = 0LL;
    v14 = v7;
    if ( !v7 )
    {
      v8 = -2147024882;
      v9 = 2147942414LL;
      v10 = 640LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)v9);
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v14);
      return v8;
    }
    v11 = DWMInputRouter::Initialize(v7);
    v8 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 643LL;
      goto LABEL_10;
    }
    *a3 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v14);
    return 2147942487LL;
  }
}
