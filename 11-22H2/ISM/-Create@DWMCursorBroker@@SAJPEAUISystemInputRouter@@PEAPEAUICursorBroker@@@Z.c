/*
 * XREFs of ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180037AD4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180035300 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180050AF0 (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMCursorBroker::Create(struct ISystemInputRouter *a1, struct ICursorBroker **a2)
{
  DWMCursorBroker *v4; // rax
  DWMCursorBroker *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWMCursorBroker *v12; // [rsp+38h] [rbp+10h] BYREF
  DWMCursorBroker *v13; // [rsp+40h] [rbp+18h]

  v12 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v4 = (DWMCursorBroker *)RefCountedObject::operator new(0x200uLL);
    v13 = v4;
    if ( v4 )
      v5 = DWMCursorBroker::DWMCursorBroker(v4, a1);
    else
      v5 = 0LL;
    v12 = v5;
    if ( v5 )
    {
      v6 = DWMCursorBroker::Initialize(v5);
      v7 = v6;
      if ( v6 >= 0 )
      {
        *a2 = v5;
        return 0LL;
      }
      v9 = (unsigned int)v6;
      v10 = 132LL;
    }
    else
    {
      v7 = -2147024882;
      v9 = 2147942414LL;
      v10 = 129LL;
    }
  }
  else
  {
    v7 = -2147024809;
    v9 = 2147942487LL;
    v10 = 120LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)v9);
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v12);
  return v7;
}
