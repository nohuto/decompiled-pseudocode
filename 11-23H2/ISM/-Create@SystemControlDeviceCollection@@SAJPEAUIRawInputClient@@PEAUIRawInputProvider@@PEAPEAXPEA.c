/*
 * XREFs of ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003B138
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004D61C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180038330 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003D99C (--0-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBKV.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041388 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??1?$unique_ptr@VSystemControlDeviceCollection@@U?$default_delete@VSystemControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800DFDAC (--1-$unique_ptr@VSystemControlDeviceCollection@@U-$default_delete@VSystemControlDeviceCollection.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct SystemControlDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r9d
  HIDDeviceCollection *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rdx
  HIDDeviceCollection *v16; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HIDDeviceCollection *v18; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 && a3 && a4 )
  {
    v16 = 0LL;
    v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xB08uLL);
    v11 = v8;
    v18 = v8;
    if ( v8 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v8, a1);
      *(_QWORD *)v11 = &SystemControlDeviceCollection::`vftable';
      std::unordered_map<unsigned long,std::array<unsigned short,20>>::unordered_map<unsigned long,std::array<unsigned short,20>>((char *)v11 + 2760);
      *((_QWORD *)v11 + 3) = a2;
    }
    else
    {
      v11 = 0LL;
    }
    v16 = v11;
    if ( v11 )
    {
      LODWORD(v18) = 65664;
      v12 = HIDDeviceCollection::Initialize(v11, v9, (struct _RIM_USAGE_ANDPAGE *const)&v18, v10, 0x28u, a3);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *a4 = v11;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
        (const char *)(unsigned int)v12);
      v15 = 28LL;
    }
    else
    {
      v13 = -2147024882;
      v15 = 26LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)v13);
    std::unique_ptr<SystemControlDeviceCollection>::~unique_ptr<SystemControlDeviceCollection>(&v16);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
