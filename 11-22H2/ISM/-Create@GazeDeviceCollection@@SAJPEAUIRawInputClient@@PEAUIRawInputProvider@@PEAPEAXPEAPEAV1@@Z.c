/*
 * XREFs of ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800371C0
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004DE7C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18003AE80 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??1?$unique_ptr@VGazeDeviceCollection@@U?$default_delete@VGazeDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800F0388 (--1-$unique_ptr@VGazeDeviceCollection@@U-$default_delete@VGazeDeviceCollection@@@std@@@std@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct GazeDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // r9d
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rdx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HIDDeviceCollection *v18; // [rsp+60h] [rbp+8h] BYREF

  v16[0] = 0LL;
  if ( a1 && a3 && a4 )
  {
    v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xAC8uLL);
    v9 = v8;
    v18 = v8;
    if ( v8 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v8, a1);
      *(_QWORD *)v9 = &GazeDeviceCollection::`vftable';
      *((_QWORD *)v9 + 3) = a2;
      v16[0] = v9;
      LODWORD(v18) = 1179649;
      v12 = HIDDeviceCollection::Initialize(v9, v10, (struct _RIM_USAGE_ANDPAGE *const)&v18, v11, 0x40u, a3);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *a4 = v9;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
        (const char *)(unsigned int)v12);
      v15 = 38LL;
    }
    else
    {
      v16[0] = 0LL;
      v13 = -2147024882;
      v15 = 36LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)v13);
    std::unique_ptr<GazeDeviceCollection>::~unique_ptr<GazeDeviceCollection>(v16);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)0x80070057LL);
    std::unique_ptr<GazeDeviceCollection>::~unique_ptr<GazeDeviceCollection>(v16);
    return 2147942487LL;
  }
}
