/*
 * XREFs of ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18012D350
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180032978 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800329A8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019FEE8 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1801A2E64 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadCallback(
        struct _MIT_INPUT_INTEROP_MESSAGE *a1,
        CManipulationManager *a2)
{
  unsigned int v3; // ebx
  const char *v5; // rdx
  unsigned int v6; // eax
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v5 = "GT:MIT_INPUT_INTEROP_MTCALLBACK";
      goto LABEL_7;
    case 1:
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, "GT:MIT_INPUT_INTEROP_HOVER", 0LL);
      v6 = CInputManager::s_HoverHittestRequest((struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8));
LABEL_8:
      v3 = v6;
      InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v8);
      return v3;
    case 2:
      v5 = "GT:MIT_INPUT_INTEROP_INERTIA";
LABEL_7:
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, v5, 0LL);
      v6 = CManipulationManager::ProcessManipulationThreadCallbackInput(
             (struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8),
             a2);
      goto LABEL_8;
  }
  return v3;
}
