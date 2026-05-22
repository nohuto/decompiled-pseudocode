/*
 * XREFs of ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801A4010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?IsPointerDevice@@YAHPEBUDeviceInfo@@@Z @ 0x18014E760 (-IsPointerDevice@@YAHPEBUDeviceInfo@@@Z.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801A2958 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x1801A43A0 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Create(const struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  ControllerProcessor *v8; // rax
  ControllerProcessor *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v4) = IsPointerDevice(*a1);
  if ( v4 )
  {
    v5 = -2147024809;
    v6 = 432LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)v5);
    return v5;
  }
  v8 = (ControllerProcessor *)RefCountedObject::operator new(0x1E88uLL);
  if ( v8 )
    v9 = ControllerProcessor::ControllerProcessor(v8, *a1, a1[1]);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v5 = -2147024882;
    v6 = 439LL;
    goto LABEL_3;
  }
  v10 = ControllerProcessor::Initialize(v9);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
