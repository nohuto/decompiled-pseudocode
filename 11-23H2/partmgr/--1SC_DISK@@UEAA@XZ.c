/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x1C0009618
 * Callers:
 *     ??1SC_DRIVE@@UEAA@XZ @ 0x1C0006FDC (--1SC_DRIVE@@UEAA@XZ.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1C00109F0 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8 (--1PM_DISK@@UEAA@XZ.c)
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1C0009718 (--1SC_DEVICE@@UEAA@XZ.c)
 */

void __fastcall SC_DISK::~SC_DISK(SC_DISK *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  *(_QWORD *)this = &SC_DISK::`vftable';
  v2 = (void *)*((_QWORD *)this + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 47);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)*((_QWORD *)this + 46);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = (void *)*((_QWORD *)this + 45);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)*((_QWORD *)this + 44);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = (void *)*((_QWORD *)this + 43);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (void *)*((_QWORD *)this + 42);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = (void *)*((_QWORD *)this + 41);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = (void *)*((_QWORD *)this + 40);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (void *)*((_QWORD *)this + 39);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = (void *)*((_QWORD *)this + 37);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = (void *)*((_QWORD *)this + 33);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  SC_DEVICE::~SC_DEVICE(this);
}
