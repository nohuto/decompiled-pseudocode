/*
 * XREFs of PmIoctlPassThroughQuerySectorWriteAta @ 0x1C00236F6
 * Callers:
 *     ?PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001069C (-PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 *     PmIoctlRedirect @ 0x1C001DAB0 (PmIoctlRedirect.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     RtlULongLongMult @ 0x1C000E7DC (RtlULongLongMult.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmIoctlPassThroughQuerySectorWriteAta(IRP *a1, _BYTE *a2, ULONGLONG *a3, ULONGLONG *a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONGLONG v5; // rbx
  ULONGLONG v9; // rsi
  int DriveGeometry; // edi
  char v11; // r12
  BOOLEAN v12; // al
  unsigned int Options; // ecx
  unsigned __int8 *MasterIrp; // rax
  _BYTE *v15; // rdx
  unsigned __int8 *v16; // r8
  unsigned __int8 *v17; // r9
  unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // r11
  unsigned __int8 *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  bool v27; // zf
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  char v32; // al
  ULONGLONG v34; // [rsp+40h] [rbp-88h]
  ULONGLONG v35; // [rsp+48h] [rbp-80h] BYREF
  ULONGLONG *pullResult; // [rsp+50h] [rbp-78h]
  __int128 v37; // [rsp+58h] [rbp-70h] BYREF
  ULONGLONG ullMultiplier; // [rsp+68h] [rbp-60h]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  ullMultiplier = 0LL;
  v5 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  *a2 = 0;
  pullResult = a3;
  v9 = 0LL;
  DriveGeometry = 0;
  v11 = 0;
  v12 = IoIs32bitProcess(a1);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( v12 )
  {
    if ( Options < 0x28 )
      return (unsigned int)-1073741811;
    MasterIrp = (unsigned __int8 *)a1->AssociatedIrp.MasterIrp;
    v15 = MasterIrp + 32;
    v16 = MasterIrp + 28;
    v17 = MasterIrp + 27;
    v18 = MasterIrp + 26;
    v19 = MasterIrp + 25;
  }
  else
  {
    if ( Options < 0x30 )
      return (unsigned int)-1073741811;
    v20 = (unsigned __int8 *)a1->AssociatedIrp.MasterIrp;
    v15 = v20 + 40;
    v16 = v20 + 36;
    v17 = v20 + 35;
    v18 = v20 + 34;
    v19 = v20 + 33;
  }
  v21 = (unsigned __int8)v15[6];
  if ( v21 > 0x3D )
  {
    v28 = v21 - 62;
    if ( !v28 )
      goto LABEL_25;
    v29 = v28 - 135;
    if ( v29 )
    {
      v30 = v29 - 5;
      if ( v30 )
      {
        v31 = v30 - 2;
        if ( v31 )
        {
          v27 = v31 == 2;
          goto LABEL_24;
        }
      }
    }
  }
  else
  {
    if ( v21 == 61 )
      goto LABEL_25;
    v22 = v21 - 6;
    if ( !v22 )
    {
      if ( (v15[5] & 0x40) != 0 )
      {
        if ( *v15 != 1 )
          goto LABEL_28;
        DriveGeometry = PmSendDeviceControl(CurrentStackLocation->DeviceObject, 0x7405Cu, 0LL, 0, &v35, 8u, 0);
        if ( DriveGeometry < 0 )
          return (unsigned int)DriveGeometry;
        v9 = v35;
        v11 = 1;
        goto LABEL_27;
      }
      return (unsigned int)-1073741808;
    }
    v23 = v22 - 42;
    if ( v23 )
    {
      v24 = v23 - 4;
      if ( !v24 )
        goto LABEL_25;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_25;
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_25;
      v27 = v26 == 3;
LABEL_24:
      if ( !v27 )
        goto LABEL_28;
LABEL_25:
      if ( (v15[5] & 0x40) != 0 )
      {
        HIDWORD(v34) = *v17 | (*v16 << 8);
        LODWORD(v34) = (unsigned __int8)v15[2] | (((unsigned __int8)v15[3] | (((unsigned __int8)v15[4] | (*v18 << 8)) << 8)) << 8);
        v9 = (unsigned __int8)v15[1] | ((unsigned __int64)*v19 << 8);
        v5 = v34;
LABEL_27:
        *a2 = 1;
LABEL_28:
        if ( !*a2 )
          return (unsigned int)DriveGeometry;
        goto LABEL_29;
      }
      return (unsigned int)-1073741808;
    }
  }
  v32 = v15[5];
  if ( (v32 & 0x40) == 0 )
    return (unsigned int)-1073741808;
  v9 = (unsigned __int8)v15[1];
  v5 = (unsigned __int8)v15[2] | (((unsigned __int8)v15[3] | (((unsigned __int8)v15[4] | ((unsigned __int64)(v32 & 0xF) << 8)) << 8)) << 8);
  *a2 = 1;
LABEL_29:
  DriveGeometry = PmGetDriveGeometry(CurrentStackLocation->DeviceObject, &v37);
  if ( DriveGeometry >= 0 )
  {
    DriveGeometry = RtlULongLongMult(v5, HIDWORD(ullMultiplier), pullResult);
    if ( DriveGeometry >= 0 )
    {
      if ( v11 )
        *a4 = v9;
      else
        return (unsigned int)RtlULongLongMult(v9, HIDWORD(ullMultiplier), a4);
    }
  }
  return (unsigned int)DriveGeometry;
}
