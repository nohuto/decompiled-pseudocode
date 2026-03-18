/*
 * XREFs of ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019E98C
 * Callers:
 *     _lambda_19664e0b56b7920f045ba8c67b2f55c3_::_lambda_invoker_cdecl_ @ 0x180134CD0 (_lambda_19664e0b56b7920f045ba8c67b2f55c3_--_lambda_invoker_cdecl_.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019FA18 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800AC688 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800AC6B8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC838 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x18019DBF4 (-DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019F578 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801A053C (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 */

void __fastcall CManipulationManager::OnInput(CManipulationManager *this)
{
  __int64 v2; // rbx
  int *v3; // r14
  __int64 v4; // r8
  struct CManipulationFrame *v5; // rdi
  int v7; // [rsp+20h] [rbp-39h] BYREF
  struct CManipulationFrame *v8; // [rsp+28h] [rbp-31h] BYREF
  __int64 v9; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v10[48]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v11[48]; // [rsp+68h] [rbp+Fh] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v10, "GestureTargetingInput", 0LL);
  v2 = 0LL;
  v3 = &v7;
  do
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v11,
      "GestureTargetingInputFrame",
      (const struct InputTraceLogging::PerfRegion *)v10);
    LOBYTE(v4) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(&CManipulationManager::s_InputQueue, &v8, v4, v3);
    v5 = v8;
    v8 = 0LL;
    v9 = v2;
    v2 = (__int64)v5;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v8);
    v3 = 0LL;
    if ( v5 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&MANIPULATION_FRAME_DEQUEUED);
      InputTraceLogging::GestureTargeting::DequeueFrame(v5);
      CManipulationManager::ProcessManipulationInfo(this, v5);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v11);
  }
  while ( v7-- );
  v9 = (__int64)v5;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v9);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v10);
}
