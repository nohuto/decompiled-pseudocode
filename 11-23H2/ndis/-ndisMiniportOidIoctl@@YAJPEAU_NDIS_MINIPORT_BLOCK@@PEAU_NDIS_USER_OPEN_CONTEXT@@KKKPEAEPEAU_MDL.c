/*
 * XREFs of ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C010E350
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000EA30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x1C00CBFB8 (ndisLwmIoctlIrpHandler.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DCC (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00093A0 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x1C000FDDC (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     ndisIsOidAllowedFromUsermode @ 0x1C000FE10 (ndisIsOidAllowedFromUsermode.c)
 *     ndisQueryStatisticsOids @ 0x1C0011498 (ndisQueryStatisticsOids.c)
 *     ndisIsOidAllowedFromUsermode_0 @ 0x1C00118AC (ndisIsOidAllowedFromUsermode_0.c)
 *     ndisValidOid @ 0x1C0026FD8 (ndisValidOid.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C002A330 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ndisMethodDeviceOid @ 0x1C00B26B4 (ndisMethodDeviceOid.c)
 */

__int64 __fastcall ndisMiniportOidIoctl(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        int a3,
        unsigned int a4,
        unsigned int Size,
        unsigned __int8 *Src,
        struct _MDL *a7,
        unsigned int *a8)
{
  __int64 v10; // r12
  unsigned int v11; // r14d
  void *v12; // r15
  unsigned int v13; // r10d
  unsigned int v14; // ecx
  int v15; // ecx
  __int64 v16; // r10
  unsigned __int8 *v17; // rdi
  int v18; // r8d
  NDIS_OID v19; // r15d
  int v20; // ecx
  int v21; // eax
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT BytesNeeded; // eax
  int v24; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // r12d
  void *v31; // rax
  __int64 v32; // rdi
  ULONG v33; // ebx
  _DWORD *v34; // rax
  int v35; // eax
  char v36; // r8
  NDIS_OID v37; // r15d
  size_t ByteCount; // rsi
  PVOID MappedSystemVa; // rbx
  void *Pool2; // rax
  void *v41; // rdi
  int v42; // eax
  unsigned int BytesWritten; // r9d
  int v44; // edx
  _DWORD *v45; // rax
  unsigned int v46; // r9d
  int v47; // edx
  unsigned int v48; // r12d
  void *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  _DWORD *v52; // r11
  __int64 v53; // rdi
  int v54; // eax
  int v55; // ecx
  ULONG Priority[2]; // [rsp+28h] [rbp-D8h]
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+58h] [rbp-A8h]
  char v59[8]; // [rsp+60h] [rbp-A0h]
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-98h]
  struct _NDIS_OID_REQUEST v61; // [rsp+80h] [rbp-80h] BYREF

  MemoryDescriptorList = a7;
  *(_QWORD *)v59 = a1;
  v58 = (__int64)a8;
  v10 = a4;
  memset(&v61, 0, 0xF8uLL);
  v11 = 0;
  LOBYTE(v57) = 0;
  v12 = 0LL;
  *a8 = 0;
  if ( a3 != 1507484 )
  {
    switch ( a3 )
    {
      case 1507330:
        if ( (unsigned int)v10 < 4 )
          return (unsigned int)-1073741811;
        v37 = *(_DWORD *)Src;
        if ( !ndisIsOidAllowedFromUsermode(*(_DWORD *)Src) )
          return (unsigned int)-1073741790;
        if ( !ndisValidOid((__int64)a2, v37) )
          return (unsigned int)-1073741811;
        if ( MemoryDescriptorList )
        {
          ByteCount = MemoryDescriptorList->ByteCount;
          if ( (_DWORD)ByteCount )
          {
            if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
              MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
            else
              MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
            if ( !MappedSystemVa )
              return v11;
            Pool2 = (void *)ExAllocatePool2(64LL, ByteCount, 1835091022);
            v41 = Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            memmove(Pool2, MappedSystemVa, ByteCount);
LABEL_62:
            v42 = ndisQueryDeviceOid(a2, &v61, v37, v41, ByteCount);
            BytesWritten = v61.DATA.QUERY_INFORMATION.BytesWritten;
            v44 = v42;
            v45 = (_DWORD *)v58;
            *(_DWORD *)v58 = v61.DATA.QUERY_INFORMATION.BytesWritten;
            if ( BytesWritten > (unsigned int)ByteCount )
            {
              *v45 = 0;
              v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, -1073676266, 0);
            }
            else
            {
              v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, v44, 0);
              if ( !v47 && v46 && MappedSystemVa )
              {
                if ( !v41 )
                  return v11;
                memmove(MappedSystemVa, v41, v46);
                goto LABEL_68;
              }
            }
            if ( !v41 )
              return v11;
LABEL_68:
            ExFreePoolWithTag(v41, 0);
            return v11;
          }
        }
        else
        {
          LODWORD(ByteCount) = 0;
        }
        v41 = 0LL;
        MappedSystemVa = 0LL;
        goto LABEL_62;
      case 1507334:
        v53 = *((_QWORD *)a2 + 2);
        if ( !v53 )
          return (unsigned int)-1073741808;
        v30 = *(_DWORD *)v53;
        v32 = *(_QWORD *)(v53 + 8);
        goto LABEL_42;
      case 1507342:
        goto LABEL_38;
      case 1507368:
      case 1507372:
        if ( a3 == 1507372 )
        {
          if ( (unsigned int)v10 < 4 || ((unsigned __int8)Src & 3) != 0 || (v10 & 3) != 0 )
            return (unsigned int)-1073741811;
          v48 = (unsigned int)v10 >> 2;
          v49 = (void *)ExAllocatePool2(66LL, 4LL * v48, 1835091022);
          v12 = v49;
          if ( !v49 )
            return v11;
          memmove(v49, Src, 4LL * v48);
          v50 = (__int64)v12;
        }
        else
        {
          v51 = *((_QWORD *)a2 + 2);
          if ( !v51 )
            return (unsigned int)-1073741808;
          v48 = *(_DWORD *)v51;
          v50 = *(_QWORD *)(v51 + 8);
        }
        if ( !ndisIsOidAllowedFromUsermode_0(v50, v48) )
        {
          v11 = -1073741790;
          goto LABEL_50;
        }
        Priority[0] = Size;
        v35 = ndisQueryStatisticsOids(*(__int64 *)v59, a2, v50, v48, Src, *(size_t *)Priority, v52, 1, &v57);
        v36 = 0;
        goto LABEL_49;
      case 1507376:
        if ( (unsigned int)v10 < 0xC || ((unsigned __int8)Src & 7) != 0 || !ndisValidOid((__int64)a2, *(_DWORD *)Src) )
          return (unsigned int)-1073741811;
        v54 = ndisMethodDeviceOid((__int64)a2, &v61, (int *)Src, v10, Size);
        *(_DWORD *)v58 = v61.DATA.METHOD_INFORMATION.BytesWritten + 8;
        v24 = v54;
        return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v24, 0);
      case 1507390:
        LOBYTE(v57) = 1;
LABEL_38:
        if ( (unsigned int)v10 < 4 || ((unsigned __int8)Src & 3) != 0 || (v10 & 3) != 0 )
          return (unsigned int)-1073741811;
        v30 = (unsigned int)v10 >> 2;
        v31 = (void *)ExAllocatePool2(66LL, 4LL * v30, 1835091022);
        v12 = v31;
        if ( !v31 )
          return v11;
        memmove(v31, Src, 4LL * v30);
        v32 = (__int64)v12;
LABEL_42:
        if ( ndisIsOidAllowedFromUsermode_0(v32, v30) )
        {
          if ( MemoryDescriptorList )
          {
            v33 = MemoryDescriptorList->ByteCount;
            if ( v33 )
            {
              v34 = (MemoryDescriptorList->MdlFlags & 5) != 0
                  ? MemoryDescriptorList->MappedSystemVa
                  : MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
              if ( v34 )
              {
                Priority[0] = v33;
                v35 = ndisQueryStatisticsOids(
                        *(__int64 *)v59,
                        a2,
                        v32,
                        v30,
                        v34,
                        *(size_t *)Priority,
                        (_DWORD *)v58,
                        0,
                        &v57);
                v36 = v57;
LABEL_49:
                v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, v35, v36);
              }
            }
          }
        }
        else
        {
          v11 = -1073741790;
        }
LABEL_50:
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
        return v11;
      default:
        return (unsigned int)-1073741822;
    }
  }
  if ( (unsigned int)v10 < 0x2C )
    return (unsigned int)-1073741811;
  if ( Size < 0x2C )
    return (unsigned int)-1073741811;
  if ( *Src != 0xB9 )
    return (unsigned int)-1073741811;
  if ( *((_WORD *)Src + 1) < 0x2Cu )
    return (unsigned int)-1073741811;
  v13 = *((unsigned __int16 *)Src + 20);
  if ( v13 < 0x2C )
    return (unsigned int)-1073741811;
  v14 = v10;
  if ( (unsigned int)v10 >= Size )
    v14 = Size;
  if ( v13 > v14 )
    return (unsigned int)-1073741811;
  if ( !Src[1] )
    return (unsigned int)-1071448060;
  if ( !ndisIsOidAllowedFromUsermode(*((_DWORD *)Src + 3)) )
    return (unsigned int)-1073741790;
  if ( !ndisValidOid((__int64)a2, v15) )
    return (unsigned int)-1073741637;
  v17 = &Src[v16];
  if ( (((_BYTE)Src + (_BYTE)v16) & 3) != 0 )
    return (unsigned int)-2147483646;
  if ( !*((_BYTE *)a2 + 24) && (*((_DWORD *)Src + 1) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741790;
  *(_DWORD *)&v61.NdisReserved[16] |= 8u;
  *(_QWORD *)&v61.NdisReserved[32] = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)&v61.NdisReserved[96]);
  v19 = *((_DWORD *)Src + 3);
  v61.RequestType = *((_DWORD *)Src + 1);
  v61.PortNumber = *((_DWORD *)Src + 2);
  v61.Header = (NDIS_OBJECT_HEADER)15466902;
  v61.DATA.QUERY_INFORMATION.Oid = v19;
  v61.DATA.QUERY_INFORMATION.InformationBuffer = v17;
  v61.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  if ( (unsigned int)v10 < Size )
    memset(&Src[v10], 0, Size - (unsigned int)v10);
  v20 = *((_DWORD *)Src + 1);
  if ( v20 )
  {
    v26 = v20 - 1;
    if ( !v26 )
    {
      v61.DATA.QUERY_INFORMATION.InformationBufferLength = v10 - *((unsigned __int16 *)Src + 20);
      goto LABEL_19;
    }
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 == 10 )
      {
        v55 = *((unsigned __int16 *)Src + 20);
        v61.DATA.QUERY_INFORMATION.InformationBufferLength = v10 - v55;
        v61.DATA.QUERY_INFORMATION.BytesWritten = Size - v55;
        v61.DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Src + 4);
        goto LABEL_19;
      }
      return (unsigned int)-1073741811;
    }
  }
  v61.DATA.QUERY_INFORMATION.InformationBufferLength = Size - *((unsigned __int16 *)Src + 20);
  memset(v17, 0, v61.DATA.QUERY_INFORMATION.InformationBufferLength);
  LOBYTE(v19) = v61.DATA.QUERY_INFORMATION.Oid;
LABEL_19:
  v61.Timeout = *((_DWORD *)Src + 5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v18,
      0xFu,
      (struct _GUID *)&WPP_ac6be41cbcc037e0c9ab930039f814bd_Traceguids,
      (char)&v61,
      v19,
      *(_QWORD *)v59);
  v21 = ndisQuerySetMiniport(*((struct _NDIS_MINIPORT_BLOCK **)a2 + 1), 0LL, &v61, 0, 0LL);
  RequestType = v61.RequestType;
  *((_DWORD *)Src + 9) = v21;
  if ( RequestType == NdisRequestQueryInformation )
    goto LABEL_22;
  v28 = RequestType - 1;
  if ( !v28 )
  {
    *((_DWORD *)Src + 7) = v61.DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_23;
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
LABEL_22:
    *((_DWORD *)Src + 6) = v61.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_23:
    BytesNeeded = v61.DATA.QUERY_INFORMATION.BytesNeeded;
LABEL_24:
    *((_DWORD *)Src + 8) = BytesNeeded;
    goto LABEL_25;
  }
  if ( v29 == 10 )
  {
    *((_QWORD *)Src + 3) = *(_QWORD *)&v61.DATA.METHOD_INFORMATION.BytesWritten;
    BytesNeeded = v61.DATA.METHOD_INFORMATION.BytesNeeded;
    goto LABEL_24;
  }
LABEL_25:
  *(_DWORD *)v58 = Size;
  v24 = 0;
  return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v24, 0);
}
