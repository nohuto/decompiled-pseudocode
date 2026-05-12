/*
 * XREFs of PmIoctlPassThroughQuerySectorWriteScsi @ 0x1C0023976
 * Callers:
 *     ?PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001069C (-PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 *     PmIoctlRedirect @ 0x1C001DAB0 (PmIoctlRedirect.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     RtlULongLongMult @ 0x1C000E7DC (RtlULongLongMult.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmIoctlPassThroughQuerySectorWriteScsi(IRP *a1, char a2, _BYTE *a3, ULONGLONG *a4, ULONGLONG *a5)
{
  ULONGLONG v5; // rdi
  char v8; // r12
  struct _IRP *MasterIrp; // rsi
  int DriveGeometry; // ebx
  BOOLEAN v11; // al
  struct _IO_STACK_LOCATION *v12; // r10
  unsigned int Options; // r9d
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int MdlAddress; // r8d
  ULONG_PTR *p_Information; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned __int8 v30; // al
  unsigned int v31; // eax
  int v32; // ecx
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-31h]
  ULONGLONG v35; // [rsp+48h] [rbp-29h]
  ULONGLONG v36; // [rsp+50h] [rbp-21h] BYREF
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-19h]
  ULONGLONG *pullResult; // [rsp+60h] [rbp-11h]
  __int128 v39; // [rsp+68h] [rbp-9h] BYREF
  ULONGLONG ullMultiplier; // [rsp+78h] [rbp+7h]

  ullMultiplier = 0LL;
  v5 = 0LL;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  pullResult = a4;
  ullMultiplicand = 0LL;
  *a3 = 0;
  v8 = 0;
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  DriveGeometry = 0;
  v39 = 0LL;
  HIDWORD(v35) = 0;
  v36 = 0LL;
  v11 = IoIs32bitProcess(a1);
  v12 = CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( v11 )
  {
    v14 = 48LL;
    v15 = a2 != 0 ? 44 : 48;
    if ( Options < v15 )
      return (unsigned int)-1073741811;
    if ( a2 )
    {
      MdlAddress = *((unsigned __int8 *)&MasterIrp->Size + 4);
      v14 = 28LL;
    }
    else
    {
      MdlAddress = (unsigned int)MasterIrp->MdlAddress;
      v15 = MdlAddress + 48;
    }
    p_Information = (ULONG_PTR *)((char *)MasterIrp + v14);
  }
  else
  {
    if ( Options < 0x38 )
      return (unsigned int)-1073741811;
    if ( a2 )
    {
      MdlAddress = *((unsigned __int8 *)&MasterIrp->Size + 4);
      p_Information = (ULONG_PTR *)((char *)&MasterIrp->ThreadListEntry.Flink + 4);
      goto LABEL_13;
    }
    MdlAddress = (unsigned int)MasterIrp->MdlAddress;
    p_Information = &MasterIrp->IoStatus.Information;
    v15 = MdlAddress + 56;
  }
  if ( Options < v15 )
    return (unsigned int)-1073741811;
LABEL_13:
  v18 = *(unsigned __int8 *)p_Information;
  if ( v18 > 0x53 )
  {
    v22 = v18 - 127;
    if ( !v22 )
    {
      if ( MdlAddress < 0x20 )
        return (unsigned int)-1073741811;
      v31 = *((unsigned __int8 *)p_Information + 9);
      if ( (unsigned __int8)v31 <= 0xEu )
      {
        v32 = 30928;
        if ( _bittest(&v32, v31) )
        {
          HIBYTE(ullMultiplicand) = *((_BYTE *)p_Information + 12);
          BYTE6(ullMultiplicand) = *((_BYTE *)p_Information + 13);
          BYTE5(ullMultiplicand) = *((_BYTE *)p_Information + 14);
          BYTE4(ullMultiplicand) = *((_BYTE *)p_Information + 15);
          BYTE3(ullMultiplicand) = *((_BYTE *)p_Information + 16);
          BYTE2(ullMultiplicand) = *((_BYTE *)p_Information + 17);
          BYTE1(ullMultiplicand) = *((_BYTE *)p_Information + 18);
          LOBYTE(ullMultiplicand) = *((_BYTE *)p_Information + 19);
          BYTE3(v35) = *((_BYTE *)p_Information + 28);
          BYTE2(v35) = *((_BYTE *)p_Information + 29);
          BYTE1(v35) = *((_BYTE *)p_Information + 30);
          LOBYTE(v35) = *((_BYTE *)p_Information + 31);
          v5 = v35;
          *a3 = 1;
        }
      }
      goto LABEL_58;
    }
    v23 = v22 - 1;
    if ( !v23 )
      return (unsigned int)-1073741808;
    v24 = v23 - 3;
    if ( v24 )
    {
      v25 = v24 - 7;
      if ( v25 && (v26 = v25 - 4) != 0 && (v27 = v26 - 5) != 0 )
      {
        v28 = v27 - 12;
        if ( !v28 )
        {
          if ( MdlAddress < 0x10 )
            return (unsigned int)-1073741811;
          if ( (*((_BYTE *)p_Information + 1) & 0x1F) == 0x11 )
          {
            v8 = 1;
            HIBYTE(ullMultiplicand) = *((_BYTE *)p_Information + 2);
            BYTE6(ullMultiplicand) = *((_BYTE *)p_Information + 3);
            BYTE5(ullMultiplicand) = *((_BYTE *)p_Information + 4);
            BYTE4(ullMultiplicand) = *((_BYTE *)p_Information + 5);
            BYTE3(ullMultiplicand) = *((_BYTE *)p_Information + 6);
            BYTE2(ullMultiplicand) = *((_BYTE *)p_Information + 7);
            BYTE1(ullMultiplicand) = *((_BYTE *)p_Information + 8);
            LOBYTE(ullMultiplicand) = *((_BYTE *)p_Information + 9);
            v5 = *((unsigned __int8 *)p_Information + 13) | ((unsigned __int64)*((unsigned __int8 *)p_Information + 12) << 8);
            *a3 = 1;
          }
          goto LABEL_58;
        }
        v29 = v28 - 11;
        if ( v29 && v29 != 4 )
        {
LABEL_58:
          if ( !*a3 )
            return (unsigned int)DriveGeometry;
          goto LABEL_59;
        }
        if ( MdlAddress < 0xC )
          return (unsigned int)-1073741811;
        BYTE3(ullMultiplicand) = *((_BYTE *)p_Information + 2);
        BYTE2(ullMultiplicand) = *((_BYTE *)p_Information + 3);
        BYTE1(ullMultiplicand) = *((_BYTE *)p_Information + 4);
        LOBYTE(ullMultiplicand) = *((_BYTE *)p_Information + 5);
        BYTE3(v35) = *((_BYTE *)p_Information + 6);
        BYTE2(v35) = *((_BYTE *)p_Information + 7);
        BYTE1(v35) = *((_BYTE *)p_Information + 8);
        v30 = *((_BYTE *)p_Information + 9);
      }
      else
      {
        if ( MdlAddress < 0x10 )
          return (unsigned int)-1073741811;
        HIBYTE(ullMultiplicand) = *((_BYTE *)p_Information + 2);
        BYTE6(ullMultiplicand) = *((_BYTE *)p_Information + 3);
        BYTE5(ullMultiplicand) = *((_BYTE *)p_Information + 4);
        BYTE4(ullMultiplicand) = *((_BYTE *)p_Information + 5);
        BYTE3(ullMultiplicand) = *((_BYTE *)p_Information + 6);
        BYTE2(ullMultiplicand) = *((_BYTE *)p_Information + 7);
        BYTE1(ullMultiplicand) = *((_BYTE *)p_Information + 8);
        LOBYTE(ullMultiplicand) = *((_BYTE *)p_Information + 9);
        BYTE3(v35) = *((_BYTE *)p_Information + 10);
        BYTE2(v35) = *((_BYTE *)p_Information + 11);
        BYTE1(v35) = *((_BYTE *)p_Information + 12);
        v30 = *((_BYTE *)p_Information + 13);
      }
      LOBYTE(v35) = v30;
      v5 = v35;
      *a3 = 1;
      goto LABEL_59;
    }
    if ( MdlAddress < 0x10 )
      return (unsigned int)-1073741811;
    if ( (*((_BYTE *)p_Information + 1) & 0x1F) != 0x11 )
      return (unsigned int)DriveGeometry;
  }
  else
  {
    if ( v18 == 83 )
      goto LABEL_30;
    if ( v18 <= 0x3F )
    {
      switch ( v18 )
      {
        case 0x3Fu:
          v8 = 1;
          break;
        case 0xAu:
          if ( MdlAddress < 6 )
            return (unsigned int)-1073741811;
          v5 = *((unsigned __int8 *)p_Information + 4);
          v19 = *((unsigned __int8 *)p_Information + 3) | ((*((unsigned __int8 *)p_Information + 2) | ((unsigned __int64)(*((_BYTE *)p_Information + 1) & 0x1F) << 8)) << 8);
          goto LABEL_25;
        case 0x18u:
          return (unsigned int)-1073741808;
        case 0x2Au:
        case 0x2Eu:
          break;
        case 0x3Au:
          return (unsigned int)-1073741808;
        default:
          goto LABEL_58;
      }
LABEL_30:
      if ( MdlAddress < 0xA )
        return (unsigned int)-1073741811;
      v19 = *((unsigned __int8 *)p_Information + 5) | (unsigned __int64)((*((unsigned __int8 *)p_Information + 4) | ((*((unsigned __int8 *)p_Information + 3) | (*((unsigned __int8 *)p_Information + 2) << 8)) << 8)) << 8);
      v5 = *((unsigned __int8 *)p_Information + 8) | ((unsigned __int64)*((unsigned __int8 *)p_Information + 7) << 8);
LABEL_25:
      ullMultiplicand = v19;
      *a3 = 1;
      goto LABEL_59;
    }
    v20 = v18 - 65;
    if ( !v20 )
      goto LABEL_30;
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 - 14 <= 1 )
        goto LABEL_30;
      goto LABEL_58;
    }
  }
  if ( MdlAddress < 0xA )
    return (unsigned int)-1073741811;
  DriveGeometry = PmSendDeviceControl(CurrentStackLocation->DeviceObject, 0x7405Cu, 0LL, 0, &v36, 8u, 0);
  if ( DriveGeometry < 0 )
    return (unsigned int)DriveGeometry;
  v5 = v36;
  v8 = 1;
  v12 = CurrentStackLocation;
  *a3 = 1;
LABEL_59:
  DriveGeometry = PmGetDriveGeometry(v12->DeviceObject, &v39);
  if ( DriveGeometry >= 0 )
  {
    DriveGeometry = RtlULongLongMult(ullMultiplicand, HIDWORD(ullMultiplier), pullResult);
    if ( DriveGeometry >= 0 )
    {
      if ( v8 )
        *a5 = v5;
      else
        return (unsigned int)RtlULongLongMult(v5, HIDWORD(ullMultiplier), a5);
    }
  }
  return (unsigned int)DriveGeometry;
}
