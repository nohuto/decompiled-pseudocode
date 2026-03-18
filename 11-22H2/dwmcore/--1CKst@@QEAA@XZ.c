/*
 * XREFs of ??1CKst@@QEAA@XZ @ 0x180285B4C
 * Callers:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x1802834AC (--_GCKst@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180285B88 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 */

void __fastcall CKst::~CKst(CKst *this, unsigned int a2)
{
  CMmcssTask *v3; // rcx

  *(_QWORD *)this = &CKst::`vftable';
  v3 = (CMmcssTask *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CMmcssTask::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 6) = 0LL;
  }
  CKstBase::~CKstBase(this);
}
