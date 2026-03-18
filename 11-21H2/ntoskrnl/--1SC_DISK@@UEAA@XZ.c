/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x140650D38
 * Callers:
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x140650E30 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x140930210 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 *     IoCreateDisk @ 0x140930510 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1409305C0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1409306C0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140930890 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140930940 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140930A20 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140930AE0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140930B90 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140930D00 (IoWritePartitionTableEx.c)
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x140651FB8 (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
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
  v2 = (void *)*((_QWORD *)this + 46);
  if ( v2 )
    SC_ENV::Free(v2);
  v3 = (void *)*((_QWORD *)this + 45);
  if ( v3 )
    SC_ENV::Free(v3);
  v4 = (void *)*((_QWORD *)this + 44);
  if ( v4 )
    SC_ENV::Free(v4);
  v5 = (void *)*((_QWORD *)this + 43);
  if ( v5 )
    SC_ENV::Free(v5);
  v6 = (void *)*((_QWORD *)this + 42);
  if ( v6 )
    SC_ENV::Free(v6);
  v7 = (void *)*((_QWORD *)this + 41);
  if ( v7 )
    SC_ENV::Free(v7);
  v8 = (void *)*((_QWORD *)this + 40);
  if ( v8 )
    SC_ENV::Free(v8);
  v9 = (void *)*((_QWORD *)this + 39);
  if ( v9 )
    SC_ENV::Free(v9);
  v10 = (void *)*((_QWORD *)this + 38);
  if ( v10 )
    SC_ENV::Free(v10);
  v11 = (void *)*((_QWORD *)this + 37);
  if ( v11 )
    SC_ENV::Free(v11);
  v12 = (void *)*((_QWORD *)this + 35);
  if ( v12 )
    SC_ENV::Free(v12);
  v13 = (void *)*((_QWORD *)this + 33);
  if ( v13 )
    SC_ENV::Free(v13);
  SC_DEVICE::~SC_DEVICE(this);
}
