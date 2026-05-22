/*
 * XREFs of ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C9C84
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DockableDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800C9928 (--0DockableDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??R?$default_delete@VDockableDeviceCollection@@@std@@QEBAXPEAVDockableDeviceCollection@@@Z @ 0x1800C9BD4 (--R-$default_delete@VDockableDeviceCollection@@@std@@QEBAXPEAVDockableDeviceCollection@@@Z.c)
 *     ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800C9F7C (-Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockableDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockableDeviceCollection **a4)
{
  DockableDeviceCollection *v8; // rax
  DockableDeviceCollection *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 || !a2 || !a3 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = (DockableDeviceCollection *)RefCountedObject::operator new(0xAE0uLL);
  if ( v8 )
    v9 = DockableDeviceCollection::DockableDeviceCollection(v8, a1, a2);
  else
    v9 = 0LL;
  v10 = (__int64)v9;
  if ( v9 )
  {
    v14 = DockableDeviceCollection::Initialize(v9, a3);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v10 = 0LL;
      *a4 = v9;
      v11 = 0;
      goto LABEL_14;
    }
    v12 = (unsigned int)v14;
    v13 = 39LL;
  }
  else
  {
    v11 = -2147024882;
    v12 = 2147942414LL;
    v13 = 37LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
    (const char *)v12);
LABEL_14:
  if ( v10 )
    std::default_delete<DockableDeviceCollection>::operator()(v15, v10);
  return v11;
}
