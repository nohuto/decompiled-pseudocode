/*
 * XREFs of ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801EB9CC
 * Callers:
 *     ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x1801EB5A0 (--$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180038090 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 */

__int64 __fastcall PTPProcessor::RuntimeClassInitialize(
        PTPProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  int ChildInputProcessor; // ebx
  __int64 v5; // rdx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = a3;
  *((_DWORD *)a2 + 1) |= 6u;
  v7[2] = this;
  v7[0] = a2;
  v7[1] = a3;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 2);
  ChildInputProcessor = CreateChildInputProcessor(2u, (__int64)v7, (__int64)this + 16);
  if ( ChildInputProcessor < 0 )
  {
    v5 = 55LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    return (unsigned int)ChildInputProcessor;
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 3);
  ChildInputProcessor = CreateChildInputProcessor(4u, (__int64)v7, (__int64)this + 24);
  if ( ChildInputProcessor < 0 )
  {
    v5 = 60LL;
    goto LABEL_3;
  }
  return 0LL;
}
