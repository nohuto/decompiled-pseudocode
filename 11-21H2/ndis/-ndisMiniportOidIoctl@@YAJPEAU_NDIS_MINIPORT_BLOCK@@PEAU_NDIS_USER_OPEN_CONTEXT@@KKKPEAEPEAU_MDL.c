/*
 * XREFs of ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x1C00C7304 (ndisLwmIoctlIrpHandler.c)
 * Callees:
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008B60 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x1C00105CC (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     ndisValidOid @ 0x1C0010600 (ndisValidOid.c)
 *     ndisIsOidAllowedFromUsermode @ 0x1C0010654 (ndisIsOidAllowedFromUsermode.c)
 *     ndisQueryStatisticsOids @ 0x1C0012470 (ndisQueryStatisticsOids.c)
 *     ndisIsOidAllowedFromUsermode_0 @ 0x1C0012AB0 (ndisIsOidAllowedFromUsermode_0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ndisMethodDeviceOid @ 0x1C00ACC98 (ndisMethodDeviceOid.c)
 */

__int64 __fastcall ndisMiniportOidIoctl(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        int a3,
        unsigned int a4,
        unsigned int Size,
        unsigned __int8 *Src,
        struct _MDL *MemoryDescriptorList,
        unsigned int *a8)
{
  __int64 v10; // r12
  unsigned int v11; // r15d
  size_t ByteCount; // rsi
  unsigned int v13; // r10d
  unsigned int v14; // ecx
  int v15; // r14d
  int v16; // r8d
  __int64 v17; // r10
  unsigned __int8 *v18; // rsi
  NDIS_REQUEST_TYPE v19; // ecx
  int v20; // eax
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT BytesNeeded; // eax
  int v23; // edx
  unsigned int v25; // r12d
  void *v26; // rax
  __int64 v27; // rdi
  ULONG v28; // ebx
  _DWORD *v29; // rax
  int v30; // eax
  char v31; // r8
  NDIS_OID v32; // r12d
  PVOID MappedSystemVa; // rbx
  void *Pool2; // rax
  void *v35; // rdi
  int v36; // eax
  unsigned int BytesWritten; // r9d
  int v38; // edx
  _DWORD *v39; // rax
  unsigned int v40; // r9d
  int v41; // edx
  unsigned int v42; // r12d
  void *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  _DWORD *v46; // r11
  __int64 v47; // rdi
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  ULONG Priority[2]; // [rsp+28h] [rbp-D8h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+58h] [rbp-A8h]
  char v57[8]; // [rsp+60h] [rbp-A0h]
  struct _NDIS_OID_REQUEST v58; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)v57 = a1;
  v56 = (__int64)a8;
  v10 = a4;
  memset(&v58, 0, 0xF8uLL);
  v11 = 0;
  ByteCount = 0LL;
  LOBYTE(v55) = 0;
  *a8 = 0;
  if ( a3 != 1507484 )
  {
    switch ( a3 )
    {
      case 1507330:
        if ( (unsigned int)v10 < 4 )
          return (unsigned int)-1073741811;
        v32 = *(_DWORD *)Src;
        if ( !ndisIsOidAllowedFromUsermode(*(_DWORD *)Src) )
          return (unsigned int)-1073741790;
        if ( !ndisValidOid((__int64)a2, v32) )
          return (unsigned int)-1073741811;
        if ( MemoryDescriptorList && (ByteCount = MemoryDescriptorList->ByteCount, (_DWORD)ByteCount) )
        {
          if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
            MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
          else
            MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
          if ( !MappedSystemVa )
            return v11;
          Pool2 = (void *)ExAllocatePool2(64LL, ByteCount, 1835091022);
          v35 = Pool2;
          if ( !Pool2 )
            return (unsigned int)-1073741670;
          memmove(Pool2, MappedSystemVa, ByteCount);
        }
        else
        {
          v35 = 0LL;
          MappedSystemVa = 0LL;
        }
        v36 = ndisQueryDeviceOid(a2, &v58, v32, v35, ByteCount);
        BytesWritten = v58.DATA.QUERY_INFORMATION.BytesWritten;
        v38 = v36;
        v39 = (_DWORD *)v56;
        *(_DWORD *)v56 = v58.DATA.QUERY_INFORMATION.BytesWritten;
        if ( BytesWritten > (unsigned int)ByteCount )
        {
          *v39 = 0;
          v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, -1073676266, 0);
        }
        else
        {
          v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, v38, 0);
          if ( !v41 && v40 && MappedSystemVa )
          {
            if ( !v35 )
              return v11;
            memmove(MappedSystemVa, v35, v40);
            goto LABEL_60;
          }
        }
        if ( !v35 )
          return v11;
LABEL_60:
        ExFreePoolWithTag(v35, 0);
        return v11;
      case 1507334:
        v47 = *((_QWORD *)a2 + 2);
        if ( !v47 )
          return (unsigned int)-1073741808;
        v25 = *(_DWORD *)v47;
        v27 = *(_QWORD *)(v47 + 8);
        goto LABEL_34;
      case 1507342:
        goto LABEL_30;
      case 1507368:
      case 1507372:
        if ( a3 == 1507372 )
        {
          if ( (unsigned int)v10 < 4 || ((unsigned __int8)Src & 3) != 0 || (v10 & 3) != 0 )
            return (unsigned int)-1073741811;
          v42 = (unsigned int)v10 >> 2;
          v43 = (void *)ExAllocatePool2(66LL, 4LL * v42, 1835091022);
          ByteCount = (size_t)v43;
          if ( !v43 )
            return v11;
          memmove(v43, Src, 4LL * v42);
          v44 = ByteCount;
        }
        else
        {
          v45 = *((_QWORD *)a2 + 2);
          if ( !v45 )
            return (unsigned int)-1073741808;
          v42 = *(_DWORD *)v45;
          v44 = *(_QWORD *)(v45 + 8);
        }
        if ( !ndisIsOidAllowedFromUsermode_0(v44, v42) )
        {
          v11 = -1073741790;
          goto LABEL_42;
        }
        Priority[0] = Size;
        v30 = ndisQueryStatisticsOids(*(__int64 *)v57, a2, v44, v42, Src, *(size_t *)Priority, v46, 1, &v55);
        v31 = 0;
        goto LABEL_41;
      case 1507376:
        if ( (unsigned int)v10 < 0xC || ((unsigned __int8)Src & 7) != 0 || !ndisValidOid((__int64)a2, *(_DWORD *)Src) )
          return (unsigned int)-1073741811;
        v48 = ndisMethodDeviceOid((__int64)a2, &v58, (int *)Src, v10, Size);
        *(_DWORD *)v56 = v58.DATA.METHOD_INFORMATION.BytesWritten + 8;
        v23 = v48;
        return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v23, 0);
      case 1507390:
        LOBYTE(v55) = 1;
LABEL_30:
        if ( (unsigned int)v10 < 4 || ((unsigned __int8)Src & 3) != 0 || (v10 & 3) != 0 )
          return (unsigned int)-1073741811;
        v25 = (unsigned int)v10 >> 2;
        v26 = (void *)ExAllocatePool2(66LL, 4LL * v25, 1835091022);
        ByteCount = (size_t)v26;
        if ( !v26 )
          return v11;
        memmove(v26, Src, 4LL * v25);
        v27 = ByteCount;
LABEL_34:
        if ( ndisIsOidAllowedFromUsermode_0(v27, v25) )
        {
          if ( MemoryDescriptorList )
          {
            v28 = MemoryDescriptorList->ByteCount;
            if ( v28 )
            {
              v29 = (MemoryDescriptorList->MdlFlags & 5) != 0
                  ? MemoryDescriptorList->MappedSystemVa
                  : MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
              if ( v29 )
              {
                Priority[0] = v28;
                v30 = ndisQueryStatisticsOids(
                        *(__int64 *)v57,
                        a2,
                        v27,
                        v25,
                        v29,
                        *(size_t *)Priority,
                        (_DWORD *)v56,
                        0,
                        &v55);
                v31 = v55;
LABEL_41:
                v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, v30, v31);
              }
            }
          }
        }
        else
        {
          v11 = -1073741790;
        }
LABEL_42:
        if ( ByteCount )
          ExFreePoolWithTag((PVOID)ByteCount, 0);
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
  v14 = Size;
  if ( (unsigned int)v10 < Size )
    v14 = v10;
  if ( v13 > v14 )
    return (unsigned int)-1073741811;
  if ( !Src[1] )
    return (unsigned int)-1071448060;
  v15 = *((_DWORD *)Src + 3);
  if ( !ndisIsOidAllowedFromUsermode(v15) )
    return (unsigned int)-1073741790;
  if ( !ndisValidOid((__int64)a2, v15) )
    return (unsigned int)-1073741637;
  v18 = &Src[v17];
  if ( (((_BYTE)Src + (_BYTE)v17) & 3) != 0 )
    return (unsigned int)-2147483646;
  if ( !*((_BYTE *)a2 + 24) && (*((_DWORD *)Src + 1) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741790;
  *(_DWORD *)&v58.NdisReserved[16] |= 8u;
  v19 = *((_DWORD *)Src + 1);
  *(_QWORD *)&v58.NdisReserved[32] = &ndisIntReqIoctl;
  v58.PortNumber = *((_DWORD *)Src + 2);
  v58.Header = (NDIS_OBJECT_HEADER)15466902;
  v58.DATA.QUERY_INFORMATION.Oid = v15;
  v58.RequestType = v19;
  v58.DATA.QUERY_INFORMATION.InformationBuffer = &Src[v17];
  v58.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  if ( (unsigned int)v10 < Size )
  {
    memset(&Src[v10], 0, Size - (unsigned int)v10);
    v19 = *((_DWORD *)Src + 1);
  }
  if ( v19 )
  {
    v49 = v19 - 1;
    if ( !v49 )
    {
      v58.DATA.QUERY_INFORMATION.InformationBufferLength = v10 - *((unsigned __int16 *)Src + 20);
      goto LABEL_19;
    }
    v50 = v49 - 1;
    if ( v50 )
    {
      if ( v50 == 10 )
      {
        v51 = *((unsigned __int16 *)Src + 20);
        v58.DATA.QUERY_INFORMATION.InformationBufferLength = v10 - v51;
        v58.DATA.QUERY_INFORMATION.BytesWritten = Size - v51;
        v58.DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Src + 4);
        goto LABEL_19;
      }
      return (unsigned int)-1073741811;
    }
  }
  v58.DATA.QUERY_INFORMATION.InformationBufferLength = Size - *((unsigned __int16 *)Src + 20);
  memset(v18, 0, v58.DATA.QUERY_INFORMATION.InformationBufferLength);
  LOBYTE(v15) = v58.DATA.QUERY_INFORMATION.Oid;
LABEL_19:
  v58.Timeout = *((_DWORD *)Src + 5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v16,
      0xFu,
      (struct _GUID *)&WPP_5eb2c2b9ff2532e0d02b0f2c9580dec3_Traceguids,
      (char)&v58,
      v15,
      *(_QWORD *)v57);
  v20 = ndisQuerySetMiniport(*((struct _NDIS_MINIPORT_BLOCK **)a2 + 1), 0LL, &v58, 0, 0LL);
  RequestType = v58.RequestType;
  *((_DWORD *)Src + 9) = v20;
  if ( RequestType == NdisRequestQueryInformation )
    goto LABEL_22;
  v52 = RequestType - 1;
  if ( !v52 )
  {
    *((_DWORD *)Src + 7) = v58.DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_23;
  }
  v53 = v52 - 1;
  if ( !v53 )
  {
LABEL_22:
    *((_DWORD *)Src + 6) = v58.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_23:
    BytesNeeded = v58.DATA.QUERY_INFORMATION.BytesNeeded;
LABEL_24:
    *((_DWORD *)Src + 8) = BytesNeeded;
    goto LABEL_25;
  }
  if ( v53 == 10 )
  {
    *((_QWORD *)Src + 3) = *(_QWORD *)&v58.DATA.METHOD_INFORMATION.BytesWritten;
    BytesNeeded = v58.DATA.METHOD_INFORMATION.BytesNeeded;
    goto LABEL_24;
  }
LABEL_25:
  *(_DWORD *)v56 = Size;
  v23 = 0;
  return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v23, 0);
}
