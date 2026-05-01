/*
 * XREFs of ??1CDamIoctl@@QEAA@XZ @ 0x18006B0B4
 * Callers:
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x18006AECC (--1CImmersiveMode@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDamIoctl::~CDamIoctl(HANDLE *this)
{
  if ( *this != (HANDLE)-1LL )
  {
    CloseHandle(*this);
    *this = (HANDLE)-1LL;
  }
}
