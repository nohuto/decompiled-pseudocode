/*
 * XREFs of ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x1800A3D00
 * Callers:
 *     ??_ECLaunchActivatedEventArgs@@GBBI@EAAPEAXI@Z @ 0x180210560 (--_ECLaunchActivatedEventArgs@@GBBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x1800A3F50 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

CLaunchActivatedEventArgs *__fastcall CLaunchActivatedEventArgs::`scalar deleting destructor'(
        CLaunchActivatedEventArgs *this,
        char a2)
{
  CLaunchActivatedEventArgs::~CLaunchActivatedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
