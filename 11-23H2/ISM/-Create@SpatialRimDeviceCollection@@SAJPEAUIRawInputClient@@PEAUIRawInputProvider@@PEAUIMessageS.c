/*
 * XREFs of ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18003B214
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004D61C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x180031914 (--0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180041988 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??1?$unique_ptr@VSpatialRimDeviceCollection@@U?$default_delete@VSpatialRimDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800D7AA4 (--1-$unique_ptr@VSpatialRimDeviceCollection@@U-$default_delete@VSpatialRimDeviceCollection@@@std.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialRimDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct IMessageSession *a3,
        void **a4,
        struct SpatialRimDeviceCollection **a5)
{
  SpatialRimDeviceCollection *v9; // rax
  SpatialRimDeviceCollection *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  SpatialRimDeviceCollection *v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v16 = 0LL;
  if ( !a5 )
  {
    v14 = 409LL;
LABEL_14:
    v12 = -2147024809;
    goto LABEL_15;
  }
  *a5 = 0LL;
  if ( !a1 || !a4 )
  {
    v14 = 411LL;
    goto LABEL_14;
  }
  v9 = (SpatialRimDeviceCollection *)RefCountedObject::operator new(0xBA8uLL);
  if ( v9 )
    v10 = SpatialRimDeviceCollection::SpatialRimDeviceCollection(v9, a1, a2, a3);
  else
    v10 = 0LL;
  v16 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v14 = 414LL;
LABEL_15:
    v15 = v12;
    goto LABEL_16;
  }
  v11 = SpatialRimDeviceCollection::Initialize(v10, a4);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a5 = v10;
    return 0LL;
  }
  v15 = (unsigned int)v11;
  v14 = 416LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)v15);
  std::unique_ptr<SpatialRimDeviceCollection>::~unique_ptr<SpatialRimDeviceCollection>(&v16);
  return v12;
}
