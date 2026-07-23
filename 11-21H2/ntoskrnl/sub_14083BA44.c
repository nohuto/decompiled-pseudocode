/*
 * XREFs of sub_14083BA44 @ 0x14083BA44
 * Callers:
 *     sub_14083BC60 @ 0x14083BC60 (sub_14083BC60.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     RtlGetNextRange @ 0x14083BF90 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x14083C0A0 (RtlGetFirstRange.c)
 */

char __fastcall sub_14083BA44(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // si
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  bool v13; // cf
  unsigned __int8 v14; // dl
  struct _DEVICE_OBJECT *v16; // rax
  char v17; // cl
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  __int64 v19; // rax
  bool v20; // zf
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 *v22; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  ResultLength = 0;
  v22 = 0LL;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = 0;
  memset(v23, 0, sizeof(v23));
  v6 = *(_DWORD *)(v3 + 44);
  if ( (v6 & 2) != 0 )
    goto LABEL_20;
  if ( (v6 & 4) != 0
    || IoGetDeviceProperty(
         *(PDEVICE_OBJECT *)(v3 + 32),
         DevicePropertyEnumeratorName,
         0xAu,
         PropertyBuffer,
         &ResultLength) < 0 )
  {
    goto LABEL_6;
  }
  v7 = wcsicmp(PropertyBuffer, L"ROOT");
  v8 = *(_QWORD *)(a2 + 32);
  if ( !v7 )
  {
    *(_DWORD *)(v8 + 44) |= 2u;
LABEL_20:
    v4 = 1;
    goto LABEL_6;
  }
  *(_DWORD *)(v8 + 44) |= 4u;
LABEL_6:
  RtlGetFirstRange(*(_QWORD *)(a1 + 48), v23, &v22);
  while ( 1 )
  {
    v10 = v22;
    if ( !v22 )
      return 0;
    v11 = *v22;
    v12 = *(_QWORD *)(a2 + 16);
    v13 = v12 < *v22;
    if ( v12 > *v22 )
    {
      if ( v22[1] < v12 )
        goto LABEL_10;
      v13 = v12 < v11;
    }
    if ( !v13 || *(_QWORD *)(a2 + 24) >= v11 )
    {
      v14 = *((_BYTE *)v22 + 32);
      if ( (v14 & *(_BYTE *)(a2 + 67)) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (v14 & 2) != 0) )
      {
        v16 = (struct _DEVICE_OBJECT *)v22[3];
        if ( v16 )
        {
          if ( v4 )
          {
            v17 = *((_BYTE *)v22 + 33);
            if ( (v17 & 0x40) == 0 )
            {
              if ( (v17 & 0x20) != 0
                || IoGetDeviceProperty(v16, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_37;
              }
              if ( !wcsicmp(PropertyBuffer, L"ROOT") )
              {
                *((_BYTE *)v10 + 33) |= 0x20u;
LABEL_37:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_39;
              }
              *((_BYTE *)v10 + 33) |= 0x40u;
              v16 = (struct _DEVICE_OBJECT *)v10[3];
            }
            v4 = 0;
          }
          AttachedDevice = v16->AttachedDevice;
          if ( AttachedDevice )
            break;
        }
      }
    }
LABEL_10:
    LOBYTE(v9) = 1;
    RtlGetNextRange(v23, &v22, v9);
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
  while ( 1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v9 )
      break;
LABEL_34:
    AttachedDevice = AttachedDevice->AttachedDevice;
    if ( !AttachedDevice )
      goto LABEL_10;
  }
  while ( AttachedDevice->DriverObject != *(struct _DRIVER_OBJECT **)(v19 + 8) )
  {
    v19 = *(_QWORD *)(v19 + 24);
    if ( !v19 )
      goto LABEL_34;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_39:
  if ( v20 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}
