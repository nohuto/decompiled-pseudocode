/*
 * XREFs of ??1SC_DEVICE@@UEAA@XZ @ 0x1C0009718
 * Callers:
 *     ??1SC_DISK@@UEAA@XZ @ 0x1C0009618 (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1C00117B0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SC_DEVICE::~SC_DEVICE(SC_DEVICE *this)
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

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 23);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)*((_QWORD *)this + 22);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = (void *)*((_QWORD *)this + 20);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)*((_QWORD *)this + 19);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = (void *)*((_QWORD *)this + 21);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (void *)*((_QWORD *)this + 10);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = (void *)*((_QWORD *)this + 6);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (void *)*((_QWORD *)this + 4);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}
