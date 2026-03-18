/*
 * XREFs of ??1CMit@@UEAA@XZ @ 0x1801B0588
 * Callers:
 *     ??_GCMit@@UEAAPEAXI@Z @ 0x1801B05D0 (--_GCMit@@UEAAPEAXI@Z.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1801B0FC4 (--1CGlobalMit@@UEAA@XZ.c)
 * Callees:
 *     ?Stop@CMit@@QEAAXXZ @ 0x1801B060C (-Stop@CMit@@QEAAXXZ.c)
 */

void __fastcall CMit::~CMit(CMit *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMit::`vftable';
  CMit::Stop(this);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 != (void *)-1LL )
    CloseHandle(v2);
  *((_QWORD *)this + 1) = 0LL;
}
