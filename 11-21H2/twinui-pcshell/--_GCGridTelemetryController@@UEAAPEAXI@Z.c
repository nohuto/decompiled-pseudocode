/*
 * XREFs of ??_GCGridTelemetryController@@UEAAPEAXI@Z @ 0x1804D2770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CGridTelemetryController@@UEAA@XZ @ 0x18023771A (--1CGridTelemetryController@@UEAA@XZ.c)
 */

CGridTelemetryController *__fastcall CGridTelemetryController::`scalar deleting destructor'(
        CGridTelemetryController *this,
        char a2)
{
  CGridTelemetryController::~CGridTelemetryController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
