/*
 * XREFs of ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801BA090
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801B9BD4 (--0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x1801BA14C (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  ButtonProcessor *v4; // rax
  ButtonProcessor *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (ButtonProcessor *)RefCountedObject::operator new(0x188uLL);
  if ( v4 )
    v5 = ButtonProcessor::ButtonProcessor(v4, *a1, a1[1]);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = ButtonProcessor::Initialize(v5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
