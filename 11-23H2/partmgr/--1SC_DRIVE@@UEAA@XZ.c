/*
 * XREFs of ??1SC_DRIVE@@UEAA@XZ @ 0x1C0006FDC
 * Callers:
 *     ??_ESC_DRIVE@@UEAAPEAXI@Z @ 0x1C0010EC0 (--_ESC_DRIVE@@UEAAPEAXI@Z.c)
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 *     ??1PM_DRIVE@@UEAA@XZ @ 0x1C0027DD4 (--1PM_DRIVE@@UEAA@XZ.c)
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x1C0009618 (--1SC_DISK@@UEAA@XZ.c)
 */

void __fastcall SC_DRIVE::~SC_DRIVE(SC_DRIVE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &SC_DRIVE::`vftable';
  v2 = (void *)*((_QWORD *)this + 53);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 52);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  SC_DISK::~SC_DISK(this);
}
