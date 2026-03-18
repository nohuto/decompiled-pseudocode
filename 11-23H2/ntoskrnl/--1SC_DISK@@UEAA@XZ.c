/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x140675490
 * Callers:
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x140675590 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x1409402C0 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 *     IoCreateDisk @ 0x1409405C0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140940670 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140940770 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140940940 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x1409409F0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140940AD0 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140940B90 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140940C40 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140940DB0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1406767D0 (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DEA50 (-Free@SC_ENV@@SAXPEAX@Z.c)
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
    SC_ENV::Free(v2);
  v3 = (void *)*((_QWORD *)this + 47);
  if ( v3 )
    SC_ENV::Free(v3);
  v4 = (void *)*((_QWORD *)this + 46);
  if ( v4 )
    SC_ENV::Free(v4);
  v5 = (void *)*((_QWORD *)this + 45);
  if ( v5 )
    SC_ENV::Free(v5);
  v6 = (void *)*((_QWORD *)this + 44);
  if ( v6 )
    SC_ENV::Free(v6);
  v7 = (void *)*((_QWORD *)this + 43);
  if ( v7 )
    SC_ENV::Free(v7);
  v8 = (void *)*((_QWORD *)this + 42);
  if ( v8 )
    SC_ENV::Free(v8);
  v9 = (void *)*((_QWORD *)this + 41);
  if ( v9 )
    SC_ENV::Free(v9);
  v10 = (void *)*((_QWORD *)this + 40);
  if ( v10 )
    SC_ENV::Free(v10);
  v11 = (void *)*((_QWORD *)this + 39);
  if ( v11 )
    SC_ENV::Free(v11);
  v12 = (void *)*((_QWORD *)this + 37);
  if ( v12 )
    SC_ENV::Free(v12);
  v13 = (void *)*((_QWORD *)this + 33);
  if ( v13 )
    SC_ENV::Free(v13);
  SC_DEVICE::~SC_DEVICE(this);
}
