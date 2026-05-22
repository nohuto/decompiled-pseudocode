/*
 * XREFs of ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800EFD50
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004DE7C (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18003AE80 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct HeatDeviceCollection **a4)
{
  HIDDeviceCollection *v7; // rax
  HIDDeviceCollection *v8; // rbx
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 && a3 && a4 )
  {
    v7 = (HIDDeviceCollection *)RefCountedObject::operator new(0xAC8uLL);
    v8 = v7;
    if ( v7 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v7, a1);
      *((_QWORD *)v8 + 3) = a2;
      *(_QWORD *)v8 = &HeatDeviceCollection::`vftable';
      result = 0LL;
      *a4 = v8;
      return result;
    }
    v10 = -2147024882;
    v11 = 41LL;
  }
  else
  {
    v10 = -2147024809;
    v11 = 36LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
    (const char *)v10);
  return v10;
}
