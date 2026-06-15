/*
 * XREFs of ??_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14009B960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14009B598 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

CSpatialCrossProcessEndpointTraceLogger *__fastcall CSpatialCrossProcessEndpointTraceLogger::`scalar deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
