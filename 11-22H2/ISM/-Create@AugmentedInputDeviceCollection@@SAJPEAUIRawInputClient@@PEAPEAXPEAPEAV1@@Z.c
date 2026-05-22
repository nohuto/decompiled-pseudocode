/*
 * XREFs of ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x180037508
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004DE7C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z @ 0x1800389A4 (--0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180041CD8 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??1?$unique_ptr@VAugmentedInputDeviceCollection@@U?$default_delete@VAugmentedInputDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E2CEC (--1-$unique_ptr@VAugmentedInputDeviceCollection@@U-$default_delete@VAugmentedInputDeviceCollecti.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AugmentedInputDeviceCollection::Create(
        struct IRawInputClient *a1,
        void **a2,
        struct AugmentedInputDeviceCollection **a3)
{
  AugmentedInputDeviceCollection *v6; // rax
  AugmentedInputDeviceCollection *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  AugmentedInputDeviceCollection *v14; // [rsp+30h] [rbp+8h] BYREF
  AugmentedInputDeviceCollection *v15; // [rsp+48h] [rbp+20h]

  v14 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (AugmentedInputDeviceCollection *)RefCountedObject::operator new(0xAE0uLL);
    v15 = v6;
    if ( v6 )
      v7 = AugmentedInputDeviceCollection::AugmentedInputDeviceCollection(v6, a1);
    else
      v7 = 0LL;
    v14 = v7;
    if ( v7 )
    {
      v8 = AugmentedInputDeviceCollection::Initialize(v7, a2);
      v9 = v8;
      if ( v8 >= 0 )
      {
        *a3 = v7;
        return 0LL;
      }
      v11 = (unsigned int)v8;
      v12 = 38LL;
    }
    else
    {
      v9 = -2147024882;
      v11 = 2147942414LL;
      v12 = 36LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)v11);
    std::unique_ptr<AugmentedInputDeviceCollection>::~unique_ptr<AugmentedInputDeviceCollection>(&v14);
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)0x80070057LL);
    std::unique_ptr<AugmentedInputDeviceCollection>::~unique_ptr<AugmentedInputDeviceCollection>(&v14);
    return 2147942487LL;
  }
}
