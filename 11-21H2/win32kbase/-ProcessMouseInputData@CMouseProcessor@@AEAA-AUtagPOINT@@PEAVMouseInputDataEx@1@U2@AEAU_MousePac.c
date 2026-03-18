/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0035C74
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01FB694 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035E4C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00363B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C0038180 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C003C4E0 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00AFDCC (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00B2384 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C00C5CC0 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 */

struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4,
        struct _MOUSE_INPUT_DATA *a5,
        const struct tagUIPI_INFO_INT *a6,
        struct tagUIPI_INFO_INT *a7)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _MOUSE_INPUT_DATA *v12; // r15
  struct tagPOINT v14; // r8
  __m128i *UnionRegion; // rax
  char v16; // r11
  __int64 v17; // r10
  __m128i v18; // xmm0
  unsigned int v19; // r9d
  _BYTE v20[768]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagPOINT v21; // [rsp+340h] [rbp+240h] BYREF
  char v22; // [rsp+358h] [rbp+258h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v22,
    "ProcessMouseInputData",
    0LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = a5;
  v21 = (struct tagPOINT)a4;
  *(LARGE_INTEGER *)&a5->UnitId = PerformanceCounter;
  a5 = (struct _MOUSE_INPUT_DATA *)*((_QWORD *)this + 431);
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          8LL)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          0x8000LL) )
  {
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&a5,
      a7,
      0LL);
  }
  else
  {
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                            a3,
                            4LL) )
    {
      v21 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
      a5 = 0LL;
      UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v20);
      v16 = gptInd;
      v14 = v21;
      v17 = 3LL * (unsigned int)gptInd;
      v18 = _mm_srli_si128(*UnionRegion, 8);
      v19 = LOWORD(v21.y) | (unsigned int)((v18.m128i_i32[1] - HIDWORD(UnionRegion->m128i_i64[0]) - 1) << 16);
      *((_DWORD *)&gaptMouse + 2 * v17) = LOWORD(v21.x) | ((unsigned __int16)(v18.m128i_i16[0]
                                                                            - UnionRegion->m128i_i64[0]
                                                                            - 1) << 16);
      *((_DWORD *)&gaptMouse + 2 * v17 + 1) = v19;
      *((_DWORD *)&gaptMouse + 2 * v17 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 48LL);
      *((_QWORD *)&gaptMouse + v17 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
      gptInd = (v16 + 1) & 0x3F;
    }
    else
    {
      CMouseProcessor::GetMouseCoord(
        this,
        *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
        &v21,
        (struct _SUBPIXELS *)&a5);
      v14 = v21;
    }
    if ( a6
      && !*(_WORD *)(*(_QWORD *)&a3 + 4LL)
      && !*((_WORD *)a6 + 2)
      && ((*((_BYTE *)a6 + 2) ^ *(_BYTE *)(*(_QWORD *)&a3 + 2LL)) & 1) == 0 )
    {
      InputTraceLogging::Mouse::CoalesceInput(*(_QWORD *)(*(_QWORD *)&a3 + 56LL));
      goto LABEL_4;
    }
    CMouseProcessor::CommitMousePosAndMoveCursor(
      this,
      *(struct CMouseProcessor::MouseInputDataEx **)&a3,
      v14,
      (struct _MousePacketPerf *)v12);
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&a5,
      a7,
      &v21);
    v21 = gptCursorAsync;
  }
  *(LARGE_INTEGER *)&v12->RawButtons = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((char *)this + 3416);
  MousePerfSummary::CollectMousePacketPerfTelemetry(
    (CMouseProcessor *)((char *)this + 2792),
    (const struct _MousePacketPerf *)v12);
  *((_QWORD *)this + 428) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
  KeLeaveCriticalRegion();
LABEL_4:
  *a2 = v21;
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
  return (struct tagPOINT)a2;
}
