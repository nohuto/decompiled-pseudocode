/*
 * XREFs of ??_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z @ 0x18001A93C
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001AC20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18007CA98 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x1801CA600 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ??1TouchUpdateInfo@InteractionLatencyTelemetry@@QEAA@XZ @ 0x18001A968 (--1TouchUpdateInfo@InteractionLatencyTelemetry@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

InteractionLatencyTelemetry::TouchUpdateInfo *__fastcall InteractionLatencyTelemetry::TouchUpdateInfo::`scalar deleting destructor'(
        InteractionLatencyTelemetry::TouchUpdateInfo *this)
{
  InteractionLatencyTelemetry::TouchUpdateInfo::~TouchUpdateInfo(this);
  operator delete(this, 0xD8uLL);
  return this;
}
