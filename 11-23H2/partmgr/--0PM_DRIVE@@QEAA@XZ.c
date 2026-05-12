/*
 * XREFs of ??0PM_DRIVE@@QEAA@XZ @ 0x1C001EE78
 * Callers:
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 * Callees:
 *     ??0SC_DRIVE@@QEAA@XZ @ 0x1C0006EF0 (--0SC_DRIVE@@QEAA@XZ.c)
 */

PM_DRIVE *__fastcall PM_DRIVE::PM_DRIVE(PM_DRIVE *this)
{
  SC_DRIVE::SC_DRIVE(this);
  *((_QWORD *)this + 73) = 0LL;
  *(_QWORD *)this = &PM_DRIVE::`vftable';
  return this;
}
