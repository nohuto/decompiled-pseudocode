/*
 * XREFs of ??_GMonitorFrame@@UEAAPEAXI@Z @ 0x180430ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MonitorFrame@@UEAA@XZ @ 0x18042EBA4 (--1MonitorFrame@@UEAA@XZ.c)
 */

MonitorFrame *__fastcall MonitorFrame::`scalar deleting destructor'(
        MonitorFrame *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  MonitorFrame::~MonitorFrame(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
