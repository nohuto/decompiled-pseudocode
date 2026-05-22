/*
 * XREFs of ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800E3324
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004D61C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DockableDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800E2FB8 (--0DockableDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??1?$unique_ptr@VDockableDeviceCollection@@U?$default_delete@VDockableDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E3090 (--1-$unique_ptr@VDockableDeviceCollection@@U-$default_delete@VDockableDeviceCollection@@@std@@@s.c)
 *     ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800E3614 (-Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockableDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockableDeviceCollection **a4)
{
  DockableDeviceCollection *v8; // rax
  DockableDeviceCollection *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DockableDeviceCollection *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    v16 = 0LL;
    v8 = (DockableDeviceCollection *)RefCountedObject::operator new(0xAE0uLL);
    if ( v8 )
      v9 = DockableDeviceCollection::DockableDeviceCollection(v8, a1, a2);
    else
      v9 = 0LL;
    v16 = v9;
    if ( !v9 )
    {
      v10 = -2147024882;
      v11 = 2147942414LL;
      v12 = 37LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)v11);
      std::unique_ptr<DockableDeviceCollection>::~unique_ptr<DockableDeviceCollection>(&v16);
      return v10;
    }
    v13 = DockableDeviceCollection::Initialize(v9, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 39LL;
      goto LABEL_12;
    }
    *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
