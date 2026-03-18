/*
 * XREFs of ??1DXGDIAGNOSTICS@@QEAA@XZ @ 0x1C00536C4
 * Callers:
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0053764 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGDIAGNOSTICS::~DXGDIAGNOSTICS(DXGDIAGNOSTICS *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGDIAGNOSTICS *)((char *)this + 64));
}
