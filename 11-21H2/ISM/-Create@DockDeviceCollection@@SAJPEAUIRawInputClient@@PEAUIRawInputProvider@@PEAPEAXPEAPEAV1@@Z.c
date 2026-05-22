/*
 * XREFs of ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C8510
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DockDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800C82E8 (--0DockDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??R?$default_delete@VDockDeviceCollection@@@std@@QEBAXPEAVDockDeviceCollection@@@Z @ 0x1800C847C (--R-$default_delete@VDockDeviceCollection@@@std@@QEBAXPEAVDockDeviceCollection@@@Z.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800C883C (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockDeviceCollection **a4)
{
  DockDeviceCollection *v8; // rax
  DockDeviceCollection *v9; // rax
  struct DockDeviceCollection *v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 || !a2 || !a3 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = (DockDeviceCollection *)RefCountedObject::operator new(0xB50uLL);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_11;
  }
  v9 = DockDeviceCollection::DockDeviceCollection(v8, a1, a2);
  v10 = v9;
  v11 = (__int64)v9;
  if ( !v9 )
  {
LABEL_11:
    v14 = -2147024882;
    v15 = 2147942414LL;
    v16 = 25LL;
    goto LABEL_12;
  }
  v12 = DockDeviceCollection::Initialize(v9, a3);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = (unsigned int)v12;
    v16 = 27LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)v15);
    goto LABEL_13;
  }
  v11 = 0LL;
  *a4 = v10;
  v14 = 0;
LABEL_13:
  if ( v11 )
    std::default_delete<DockDeviceCollection>::operator()(v13, v11);
  return v14;
}
