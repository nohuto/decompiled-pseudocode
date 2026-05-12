/*
 * XREFs of PmDeleteSpacesMetadata @ 0x1C001F13C
 * Callers:
 *     PmIoctlDeleteSpacesMetadata @ 0x1C001F1DC (PmIoctlDeleteSpacesMetadata.c)
 * Callees:
 *     ?DeleteMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0004FF0 (-DeleteMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ??1SC_DRIVE@@UEAA@XZ @ 0x1C0006FDC (--1SC_DRIVE@@UEAA@XZ.c)
 *     ?UpdateControl@SC_DISK@@QEAAJXZ @ 0x1C0007024 (-UpdateControl@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@PM_DRIVE@@QEAAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0007058 (-Initialize@PM_DRIVE@@QEAAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     ??0PM_DRIVE@@QEAA@XZ @ 0x1C001EE78 (--0PM_DRIVE@@QEAA@XZ.c)
 *     ?Flush@PM_DRIVE@@QEAAJXZ @ 0x1C001EFE0 (-Flush@PM_DRIVE@@QEAAJXZ.c)
 */

__int64 __fastcall PmDeleteSpacesMetadata(struct _DEVICE_EXTENSION *a1)
{
  NTSTATUS updated; // ebx
  _QWORD v4[74]; // [rsp+20h] [rbp-268h] BYREF

  PM_DRIVE::PM_DRIVE((PM_DRIVE *)v4);
  updated = PM_DRIVE::Initialize((PM_DRIVE *)v4, a1);
  if ( updated >= 0 )
  {
    updated = SC_DRIVE::DeleteMetadata((SC_DRIVE *)v4);
    if ( updated >= 0 )
    {
      updated = SC_DISK::UpdateControl((SC_DISK *)v4);
      if ( updated >= 0 )
        updated = PM_DRIVE::Flush((PM_DRIVE *)v4);
    }
  }
  v4[0] = &PM_DRIVE::`vftable';
  SC_DRIVE::~SC_DRIVE((SC_DRIVE *)v4);
  return (unsigned int)updated;
}
