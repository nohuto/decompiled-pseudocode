/*
 * XREFs of PmCreateSpacesMetadata @ 0x1C001EEA8
 * Callers:
 *     PmIoctlCreateSpacesMetadata @ 0x1C001F0B8 (PmIoctlCreateSpacesMetadata.c)
 * Callees:
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 *     ??1SC_DRIVE@@UEAA@XZ @ 0x1C0006FDC (--1SC_DRIVE@@UEAA@XZ.c)
 *     ?UpdateControl@SC_DISK@@QEAAJXZ @ 0x1C0007024 (-UpdateControl@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@PM_DRIVE@@QEAAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0007058 (-Initialize@PM_DRIVE@@QEAAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?ScGetDriveHeaderVersion@@YAEW4_SC_VERSION@@@Z @ 0x1C0007088 (-ScGetDriveHeaderVersion@@YAEW4_SC_VERSION@@@Z.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     ??0PM_DRIVE@@QEAA@XZ @ 0x1C001EE78 (--0PM_DRIVE@@QEAA@XZ.c)
 *     ?Flush@PM_DRIVE@@QEAAJXZ @ 0x1C001EFE0 (-Flush@PM_DRIVE@@QEAAJXZ.c)
 */

__int64 __fastcall PmCreateSpacesMetadata(struct _DEVICE_EXTENSION *a1, __int64 a2)
{
  int Metadata; // ebx
  unsigned __int8 DriveHeaderVersion; // al
  __int128 v6; // xmm0
  __int16 v7; // cx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  _QWORD v13[10]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[74]; // [rsp+80h] [rbp-80h] BYREF

  PM_DRIVE::PM_DRIVE((PM_DRIVE *)v14);
  memset(v13, 0, 0x48uLL);
  if ( *(_DWORD *)(a2 + 4) >= 0x1Du )
  {
    Metadata = -1058602987;
  }
  else
  {
    Metadata = PM_DRIVE::Initialize((PM_DRIVE *)v14, a1);
    if ( Metadata >= 0 )
    {
      DriveHeaderVersion = ScGetDriveHeaderVersion(*(_DWORD *)(a2 + 4));
      v6 = *(_OWORD *)(a2 + 520);
      v7 = DriveHeaderVersion;
      v8 = *(_OWORD *)(a2 + 536);
      WORD2(v13[4]) = *(_WORD *)(a2 + 552);
      v9 = *(_QWORD *)(a2 + 592);
      *(_OWORD *)((char *)v13 + 4) = v6;
      v13[7] = v9;
      v10 = *(_OWORD *)(a2 + 572);
      v11 = *(_QWORD *)(a2 + 600);
      LOWORD(v13[0]) = v7;
      *(_OWORD *)&v13[5] = v10;
      v13[8] = v11;
      *(_OWORD *)((char *)&v13[2] + 4) = v8;
      Metadata = SC_DRIVE::CreateMetadata((SC_DRIVE *)v14, (unsigned __int16 *)(a2 + 8), (struct SC_DRIVE_HEADER *)v13);
      if ( Metadata >= 0 )
      {
        Metadata = SC_DISK::UpdateControl((SC_DISK *)v14);
        if ( Metadata >= 0 )
          Metadata = PM_DRIVE::Flush((PM_DRIVE *)v14);
      }
    }
  }
  v14[0] = &PM_DRIVE::`vftable';
  SC_DRIVE::~SC_DRIVE((SC_DRIVE *)v14);
  return (unsigned int)Metadata;
}
