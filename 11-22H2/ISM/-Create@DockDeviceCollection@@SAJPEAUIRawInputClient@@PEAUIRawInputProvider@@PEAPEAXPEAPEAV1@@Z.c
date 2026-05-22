/*
 * XREFs of ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800F0E20
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004DE7C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DockDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800F0BB4 (--0DockDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??1?$unique_ptr@VDockDeviceCollection@@U?$default_delete@VDockDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800F0CE0 (--1-$unique_ptr@VDockDeviceCollection@@U-$default_delete@VDockDeviceCollection@@@std@@@std@@QEAA.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800F114C (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockDeviceCollection **a4)
{
  DockDeviceCollection *v8; // rax
  DockDeviceCollection *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DockDeviceCollection *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    v16 = 0LL;
    v8 = (DockDeviceCollection *)RefCountedObject::operator new(0xB50uLL);
    if ( v8 )
      v9 = DockDeviceCollection::DockDeviceCollection(v8, a1, a2);
    else
      v9 = 0LL;
    v16 = v9;
    if ( !v9 )
    {
      v10 = -2147024882;
      v11 = 2147942414LL;
      v12 = 25LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
        (const char *)v11);
      std::unique_ptr<DockDeviceCollection>::~unique_ptr<DockDeviceCollection>(&v16);
      return v10;
    }
    v13 = DockDeviceCollection::Initialize(v9, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 27LL;
      goto LABEL_12;
    }
    *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
