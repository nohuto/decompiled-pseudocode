/*
 * XREFs of ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003AEC4
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004D61C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180038330 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041388 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??1?$unique_ptr@VPenDeviceCollection@@U?$default_delete@VPenDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E48F0 (--1-$unique_ptr@VPenDeviceCollection@@U-$default_delete@VPenDeviceCollection@@@std@@@std@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct PenDeviceCollection **a4)
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
      *(_QWORD *)v9 = &PenDeviceCollection::`vftable';
      *((_QWORD *)v9 + 3) = a2;
      v16[0] = v9;
      LODWORD(v18) = 852000;
      v12 = HIDDeviceCollection::Initialize(v9, v10, (struct _RIM_USAGE_ANDPAGE *const)&v18, v11, 1u, a3);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *a4 = v9;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
        (const char *)(unsigned int)v12);
      v15 = 33LL;
    }
    else
    {
      v16[0] = 0LL;
      v13 = -2147024882;
      v15 = 31LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)v13);
    std::unique_ptr<PenDeviceCollection>::~unique_ptr<PenDeviceCollection>(v16);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)0x80070057LL);
    std::unique_ptr<PenDeviceCollection>::~unique_ptr<PenDeviceCollection>(v16);
    return 2147942487LL;
  }
}
