/*
 * XREFs of ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608
 * Callers:
 *     PmSendTelemetry @ 0x1C0020134 (PmSendTelemetry.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1C0008F10 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     StRtlFindBestStorageDeviceId @ 0x1C000A878 (StRtlFindBestStorageDeviceId.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 *     ?Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C002152C (-Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ??0PM_DISK@@QEAA@XZ @ 0x1C0021594 (--0PM_DISK@@QEAA@XZ.c)
 *     ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8 (--1PM_DISK@@UEAA@XZ.c)
 */

__int64 __fastcall PmCollectTelemetry(struct _DEVICE_EXTENSION *a1, struct _DISK_TELEMETRY_INFO **a2)
{
  _BYTE *DeviceExtension; // r14
  const wchar_t *v5; // rcx
  __int64 Pool2; // rbx
  _DWORD **v7; // rsi
  _DWORD *v8; // rcx
  struct _DEVICE_OBJECT *v9; // rdx
  char v10; // zf
  char v11; // cl
  __int64 v12; // r8
  char *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  char *v18; // rax
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int Sectors; // edi
  char v36; // cl
  _OWORD *v38; // rax
  _OWORD *v39; // rcx
  __int64 v40; // rdx
  __int128 v41; // xmm1
  __int64 v42; // rax
  __int64 i; // rsi
  __int64 BestStorageDeviceId; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  _OWORD *v47; // rax
  _OWORD *v48; // rcx
  __int64 v49; // rdx
  __int128 v50; // xmm1
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v52[236]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+13Ch] [rbp+3Ch]
  int v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  _OWORD *v56; // [rsp+158h] [rbp+58h]

  PM_DISK::PM_DISK((PM_DISK *)v52);
  DeviceExtension = PmControlObject->DeviceExtension;
  *a2 = 0LL;
  v5 = (const wchar_t *)*((_QWORD *)a1 + 44);
  v51 = 0LL;
  if ( v5
    && *((_QWORD *)a1 + 46)
    && !wcsncmp(v5, L"MSFT", 4uLL)
    && !wcsncmp(*((const wchar_t **)a1 + 46), L"XVSC", 4uLL) )
  {
    Sectors = -1073741637;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 456LL, 1112829264LL);
    if ( Pool2 )
    {
      if ( (*((_DWORD *)a1 + 128) & 0x10) != 0 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x10000uLL;
      }
      else
      {
        v7 = (_DWORD **)(Pool2 + 384);
        if ( (int)PmGetDriveLayoutEx((KSPIN_LOCK *)a1, (_QWORD *)(Pool2 + 384)) < 0 )
        {
          *(_DWORD *)(Pool2 + 368) = *((_DWORD *)a1 + 228);
          *(_DWORD *)(Pool2 + 372) = *((_DWORD *)a1 + 229);
        }
        else
        {
          v8 = *v7;
          *(_DWORD *)(Pool2 + 368) = **v7;
          *(_DWORD *)(Pool2 + 372) = v8[1];
          LODWORD(v8) = 144 * v8[1] + 48;
          *(_QWORD *)(Pool2 + 144) |= 0x8000uLL;
          *(_DWORD *)(Pool2 + 376) = (_DWORD)v8;
        }
      }
      v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 1);
      v10 = DeviceExtension[165] == 0;
      *(_DWORD *)Pool2 = *((_DWORD *)a1 + 42);
      *(_DWORD *)(Pool2 + 4) = v9->Flags;
      *(_DWORD *)(Pool2 + 8) = v9->Characteristics;
      *(_BYTE *)(Pool2 + 12) = *((_BYTE *)a1 + 604);
      *(_DWORD *)(Pool2 + 16) = *((_DWORD *)a1 + 148);
      *(_DWORD *)(Pool2 + 20) = *((_DWORD *)a1 + 149);
      *(_DWORD *)(Pool2 + 24) = *((_DWORD *)a1 + 150);
      if ( (int)PM_DISK::Initialize((PM_DISK *)v52, v9, v10) >= 0 )
      {
        v11 = v54;
        *(_DWORD *)(Pool2 + 28) = v53;
        *(_QWORD *)(Pool2 + 32) = v55 << v11;
      }
      v12 = *((_QWORD *)a1 + 29);
      v13 = (char *)a1 + 344;
      v14 = 4LL;
      *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(v12 + 28);
      v15 = (_QWORD *)(Pool2 + 48);
      do
      {
        *v15 = v13;
        v13 += 16;
        ++v15;
        --v14;
      }
      while ( v14 );
      v16 = *(_OWORD *)((char *)a1 + 408);
      *(_DWORD *)(Pool2 + 128) = *((_DWORD *)a1 + 108);
      v17 = *((_QWORD *)a1 + 53);
      *(_DWORD *)(Pool2 + 132) = *((_DWORD *)a1 + 109);
      *(_DWORD *)(Pool2 + 136) = *((_DWORD *)a1 + 110);
      v18 = (char *)&NullString;
      *(_OWORD *)(Pool2 + 104) = v16;
      *(_QWORD *)(Pool2 + 80) = (char *)a1 + 448;
      *(_QWORD *)(Pool2 + 120) = v17;
      if ( *(_DWORD *)(v12 + 28) != 15 )
        v18 = (char *)a1 + 448;
      *(_QWORD *)(Pool2 + 88) = v18;
      *(_QWORD *)(Pool2 + 96) = (char *)a1 + 464;
      *(_DWORD *)(Pool2 + 152) = *((_DWORD *)a1 + 43);
      v19 = *((_QWORD *)a1 + 23) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v19 )
        v19 = *((_QWORD *)a1 + 24) - *(_QWORD *)GUID_NULL.Data4;
      if ( v19 )
      {
        v20 = *(_OWORD *)((char *)a1 + 184);
        *(_QWORD *)(Pool2 + 144) |= 1uLL;
        *(_OWORD *)(Pool2 + 156) = v20;
      }
      v21 = *((_QWORD *)a1 + 25) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v21 )
        v21 = *((_QWORD *)a1 + 26) - *(_QWORD *)GUID_NULL.Data4;
      if ( v21 )
      {
        v22 = *(_OWORD *)((char *)a1 + 200);
        *(_QWORD *)(Pool2 + 144) |= 2uLL;
        *(_OWORD *)(Pool2 + 172) = v22;
      }
      v10 = *(_DWORD *)(Pool2 + 40) == 16;
      *(_OWORD *)(Pool2 + 188) = *(_OWORD *)((char *)a1 + 216);
      if ( v10 )
        *(_OWORD *)(Pool2 + 204) = *(_OWORD *)(*((_QWORD *)a1 + 29) + 36LL);
      v23 = *((_QWORD *)a1 + 30);
      if ( v23 )
      {
        *(_QWORD *)(Pool2 + 144) |= 4uLL;
        *(_BYTE *)(Pool2 + 220) = *(_BYTE *)(v23 + 8) & 1;
        *(_BYTE *)(Pool2 + 221) = *(_BYTE *)(v23 + 9);
      }
      v24 = *((_QWORD *)a1 + 31);
      if ( v24 )
      {
        *(_QWORD *)(Pool2 + 144) |= 8uLL;
        BestStorageDeviceId = StRtlFindBestStorageDeviceId(v24);
        if ( BestStorageDeviceId || *(_DWORD *)(v24 + 8) && (BestStorageDeviceId = v24 + 12, v24 != -12) )
        {
          v45 = BestStorageDeviceId + *(unsigned __int16 *)(BestStorageDeviceId + 8) + 16LL;
          if ( v45 <= v24 + (unsigned __int64)*(unsigned int *)(v24 + 4)
            && v45 >= BestStorageDeviceId + 16
            && BestStorageDeviceId )
          {
            *(_DWORD *)(Pool2 + 224) = *(_DWORD *)(v24 + 8);
            *(_DWORD *)(Pool2 + 228) = *(_DWORD *)BestStorageDeviceId;
            *(_DWORD *)(Pool2 + 232) = *(_DWORD *)(BestStorageDeviceId + 4);
            *(_DWORD *)(Pool2 + 236) = *(_DWORD *)(BestStorageDeviceId + 12);
            *(_QWORD *)(Pool2 + 240) = BestStorageDeviceId + 16;
            *(_DWORD *)(Pool2 + 248) = *(unsigned __int16 *)(BestStorageDeviceId + 8);
          }
        }
      }
      v25 = *((_QWORD *)a1 + 32);
      if ( v25 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x10uLL;
        *(_DWORD *)(Pool2 + 252) = *(_DWORD *)(v25 + 8);
        *(_DWORD *)(Pool2 + 256) = *(_DWORD *)(v25 + 12);
        *(_DWORD *)(Pool2 + 260) = *(_DWORD *)(v25 + 16);
        *(_DWORD *)(Pool2 + 264) = *(_DWORD *)(v25 + 20);
        *(_BYTE *)(Pool2 + 268) = *(_BYTE *)(v25 + 24);
        *(_BYTE *)(Pool2 + 269) = *(_BYTE *)(v25 + 25);
        *(_BYTE *)(Pool2 + 270) = *(_BYTE *)(v25 + 26);
      }
      v26 = (_DWORD *)*((_QWORD *)a1 + 33);
      if ( v26 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x20uLL;
        *(_DWORD *)(Pool2 + 272) = v26[4];
        *(_DWORD *)(Pool2 + 276) = v26[5];
        *(_DWORD *)(Pool2 + 280) = v26[6];
      }
      v27 = *((_QWORD *)a1 + 34);
      if ( v27 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x40uLL;
        *(_BYTE *)(Pool2 + 284) = *(_BYTE *)(v27 + 8);
      }
      v28 = *((_QWORD *)a1 + 35);
      if ( v28 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x80uLL;
        *(_BYTE *)(Pool2 + 285) = *(_BYTE *)(v28 + 8);
      }
      v29 = *((_QWORD *)a1 + 36);
      if ( v29 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x100uLL;
        *(_BYTE *)(Pool2 + 286) = *(_BYTE *)(v29 + 8) & 1;
        *(_QWORD *)(Pool2 + 288) = *(_QWORD *)(v29 + 16);
        if ( (*(_BYTE *)(v29 + 8) & 0x20) != 0 )
          *(_QWORD *)(Pool2 + 296) = *(_QWORD *)(v29 + 24);
      }
      v30 = (_DWORD *)*((_QWORD *)a1 + 37);
      if ( v30 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x200uLL;
        *(_DWORD *)(Pool2 + 304) = v30[3];
        *(_DWORD *)(Pool2 + 308) = v30[4];
        *(_DWORD *)(Pool2 + 312) = v30[5];
        *(_DWORD *)(Pool2 + 316) = v30[6];
        *(_DWORD *)(Pool2 + 320) = v30[7];
      }
      v31 = *((_QWORD *)a1 + 39);
      if ( v31 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x400uLL;
        *(_BYTE *)(Pool2 + 324) = *(_BYTE *)(v31 + 72);
        *(_QWORD *)(Pool2 + 328) = *(_QWORD *)(v31 + 96) * *(unsigned int *)(Pool2 + 28);
      }
      v32 = (_DWORD *)*((_QWORD *)a1 + 40);
      if ( v32 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x800uLL;
        *(_DWORD *)(Pool2 + 336) = v32[2];
        *(_DWORD *)(Pool2 + 340) = v32[3];
        *(_DWORD *)(Pool2 + 344) = v32[4];
      }
      v33 = *((_QWORD *)a1 + 41);
      if ( v33 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x1000uLL;
        *(_QWORD *)(Pool2 + 352) = v33 + 8;
      }
      v34 = *((_QWORD *)a1 + 42);
      if ( v34 )
      {
        *(_QWORD *)(Pool2 + 144) |= 0x2000uLL;
        *(_DWORD *)(Pool2 + 360) = *(_DWORD *)(v34 + 8);
      }
      Sectors = PmSendDeviceControl(*((PDEVICE_OBJECT *)a1 + 2), 0x2D0C14u, 0LL, 0, &v51, 8u, 0);
      if ( Sectors < 0 )
      {
        Sectors = 0;
      }
      else
      {
        v36 = BYTE6(v51);
        *(_QWORD *)(Pool2 + 144) |= 0x4000uLL;
        *(_BYTE *)(Pool2 + 364) = v36;
      }
      if ( !*(_DWORD *)(Pool2 + 368) && *(_QWORD *)(Pool2 + 384) && v56 )
      {
        v38 = (_OWORD *)ExAllocatePool2(66LL, 512LL, 1112829264LL);
        *(_QWORD *)(Pool2 + 392) = v38;
        if ( v38 )
        {
          v39 = v56;
          v40 = 4LL;
          do
          {
            *v38 = *v39;
            v38[1] = v39[1];
            v38[2] = v39[2];
            v38[3] = v39[3];
            v38[4] = v39[4];
            v38[5] = v39[5];
            v38[6] = v39[6];
            v38 += 8;
            v41 = v39[7];
            v39 += 8;
            *(v38 - 1) = v41;
            --v40;
          }
          while ( v40 );
          *(_DWORD *)(Pool2 + 400) = 512;
        }
        v42 = *(_QWORD *)(Pool2 + 384);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v42 + 4); i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= 4 )
            break;
          if ( *(_QWORD *)(v42 + 144 * i + 64) )
          {
            v46 = *(_QWORD *)(v42 + 144 * i + 56);
            if ( v53 )
              v46 /= (__int64)v53;
            Sectors = SC_DISK::ReadSectors((SC_DISK *)v52, 1, v46, 0LL);
            if ( Sectors >= 0 )
            {
              v47 = (_OWORD *)ExAllocatePool2(66LL, 512LL, 1112829264LL);
              *(_QWORD *)(Pool2 + 8 * i + 408) = v47;
              if ( v47 )
              {
                v48 = v56;
                v49 = 4LL;
                do
                {
                  *v47 = *v48;
                  v47[1] = v48[1];
                  v47[2] = v48[2];
                  v47[3] = v48[3];
                  v47[4] = v48[4];
                  v47[5] = v48[5];
                  v47[6] = v48[6];
                  v47 += 8;
                  v50 = v48[7];
                  v48 += 8;
                  *(v47 - 1) = v50;
                  --v49;
                }
                while ( v49 );
                *(_DWORD *)(Pool2 + 4 * i + 440) = 512;
              }
            }
          }
          v42 = *(_QWORD *)(Pool2 + 384);
        }
      }
      *a2 = (struct _DISK_TELEMETRY_INFO *)Pool2;
    }
    else
    {
      Sectors = -1073741670;
    }
  }
  PM_DISK::~PM_DISK((PM_DISK *)v52);
  return (unsigned int)Sectors;
}
