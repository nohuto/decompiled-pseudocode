/*
 * XREFs of ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DF030
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004D61C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0ConsumerControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800DEE24 (--0ConsumerControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??1?$unique_ptr@VConsumerControlDeviceCollection@@U?$default_delete@VConsumerControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800DEF08 (--1-$unique_ptr@VConsumerControlDeviceCollection@@U-$default_delete@VConsumerControlDeviceCollec.c)
 *     ?Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DF3C8 (-Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ConsumerControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct ConsumerControlDeviceCollection **a4)
{
  ConsumerControlDeviceCollection *v8; // rax
  ConsumerControlDeviceCollection *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ConsumerControlDeviceCollection *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v8 = (ConsumerControlDeviceCollection *)RefCountedObject::operator new(0xB08uLL);
    if ( v8 )
      v9 = ConsumerControlDeviceCollection::ConsumerControlDeviceCollection(v8, a1, a2);
    else
      v9 = 0LL;
    v16 = v9;
    if ( !v9 )
    {
      v10 = -2147024882;
      v11 = 2147942414LL;
      v12 = 34LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
        (const char *)v11);
      std::unique_ptr<ConsumerControlDeviceCollection>::~unique_ptr<ConsumerControlDeviceCollection>(&v16);
      return v10;
    }
    v13 = ConsumerControlDeviceCollection::Initialize(v9, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 36LL;
      goto LABEL_11;
    }
    *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)0x80070057LL);
    std::unique_ptr<ConsumerControlDeviceCollection>::~unique_ptr<ConsumerControlDeviceCollection>(&v16);
    return 2147942487LL;
  }
}
