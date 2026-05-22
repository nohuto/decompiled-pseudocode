/*
 * XREFs of ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003728C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004DE7C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003A204 (--0-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBKV.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18003AE80 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??1?$unique_ptr@VCallControlDeviceCollection@@U?$default_delete@VCallControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800EF5C4 (--1-$unique_ptr@VCallControlDeviceCollection@@U-$default_delete@VCallControlDeviceCollection@@@s.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CallControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct CallControlDeviceCollection **a4)
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
      *(_QWORD *)v11 = &CallControlDeviceCollection::`vftable';
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
      LODWORD(v18) = 65555;
      v12 = HIDDeviceCollection::Initialize(v11, v9, (struct _RIM_USAGE_ANDPAGE *const)&v18, v10, 0x28u, a3);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *a4 = v11;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
        (const char *)(unsigned int)v12);
      v15 = 31LL;
    }
    else
    {
      v13 = -2147024882;
      v15 = 29LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)v13);
    std::unique_ptr<CallControlDeviceCollection>::~unique_ptr<CallControlDeviceCollection>(&v16);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
