/*
 * XREFs of ??_ECLaunchToMonitor@@UEAAPEAXI@Z @ 0x1805EFF00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

CLaunchToMonitor *__fastcall CLaunchToMonitor::`vector deleting destructor'(CLaunchToMonitor *this, char a2)
{
  *((_DWORD *)this + 15) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CLaunchToMonitor *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
