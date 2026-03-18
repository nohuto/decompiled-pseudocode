/*
 * XREFs of ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C0169330
 * Callers:
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1C0169380 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x1C016C890 (--1COPMProtectedOutput@@UEAA@XZ.c)
 * Callees:
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x1C0169414 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x1C0169450 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 */

void __fastcall OPM::CMonitorPDO::~CMonitorPDO(OPM::CMonitorPDO *this)
{
  unsigned int v2; // edx
  void *v3; // rcx

  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    OPM::CMonitorPDO::Destroy(this);
    v3 = (void *)*((_QWORD *)this + 1);
    if ( v3 )
      OPM::CMutex::`scalar deleting destructor'(v3, v2);
  }
  *((_QWORD *)this + 1) = 0LL;
}
