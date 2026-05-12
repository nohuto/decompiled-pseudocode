/*
 * XREFs of ?PmCheckIdsMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C001CE64
 * Callers:
 *     ?PmCheckIds@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C0003CEC (-PmCheckIds@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_.c)
 * Callees:
 *     ?PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z @ 0x1C0026C38 (-PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z.c)
 */

__int64 __fastcall PmCheckIdsMbr(
        struct _DEVICE_EXTENSION *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        unsigned __int8 *a3,
        enum _DISK_OFFLINE_REASON *a4)
{
  int IsRedundantPath; // ebx
  char *DeviceExtension; // rsi
  ULONG Signature; // eax
  struct _DEVICE_EXTENSION **v10; // rax
  struct _DEVICE_EXTENSION *inserted; // rax
  struct _DEVICE_EXTENSION **v12; // rdx
  __int128 Buffer; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  unsigned __int8 v17; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int8 NewElement; // [rsp+90h] [rbp+40h] BYREF

  IsRedundantPath = 0;
  v17 = 0;
  NewElement = 0;
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  *(_DWORD *)a4 = 0;
  v16 = 0LL;
  *a3 = 0;
  Signature = a2->Mbr.Signature;
  Buffer = 0LL;
  v15 = 0LL;
  if ( Signature )
  {
    DWORD2(v15) = Signature;
    v10 = (struct _DEVICE_EXTENSION **)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 192), &Buffer);
    if ( v10 )
    {
      IsRedundantPath = PmIsRedundantPath(a1, v10[2], &v17);
      if ( IsRedundantPath >= 0 )
        *(_DWORD *)a4 = v17 != 0 ? 2 : 4;
    }
    else
    {
      DWORD2(v15) = a2->Mbr.Signature;
      inserted = (struct _DEVICE_EXTENSION *)RtlInsertElementGenericTableAvl(
                                               (PRTL_AVL_TABLE)(DeviceExtension + 192),
                                               &Buffer,
                                               0x28u,
                                               &NewElement);
      if ( inserted )
      {
        v12 = (struct _DEVICE_EXTENSION **)*((_QWORD *)a1 + 78);
        if ( *v12 != (struct _DEVICE_EXTENSION *)((char *)a1 + 616) )
          __fastfail(3u);
        *(_QWORD *)inserted = (char *)a1 + 616;
        *((_QWORD *)inserted + 1) = v12;
        *v12 = inserted;
        *((_QWORD *)a1 + 78) = inserted;
        *((_QWORD *)inserted + 2) = a1;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  return (unsigned int)IsRedundantPath;
}
