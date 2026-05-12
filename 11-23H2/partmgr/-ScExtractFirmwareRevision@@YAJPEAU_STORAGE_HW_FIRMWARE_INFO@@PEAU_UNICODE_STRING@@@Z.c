/*
 * XREFs of ?ScExtractFirmwareRevision@@YAJPEAU_STORAGE_HW_FIRMWARE_INFO@@PEAU_UNICODE_STRING@@@Z @ 0x1C0009E60
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1C0009F9C (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

__int64 __fastcall ScExtractFirmwareRevision(struct _STORAGE_HW_FIRMWARE_INFO *a1, struct _UNICODE_STRING *a2)
{
  unsigned int SlotCount; // r10d
  unsigned int v3; // eax
  unsigned int v4; // r8d
  UCHAR ActiveSlot; // r9
  __int64 v8; // rcx
  char SourceString[16]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  SlotCount = a1->SlotCount;
  v3 = 0;
  v4 = 0;
  v11 = 0;
  *(_OWORD *)SourceString = 0LL;
  if ( SlotCount )
  {
    ActiveSlot = a1->ActiveSlot;
    while ( 1 )
    {
      v8 = v3;
      if ( a1->Slot[v8].SlotNumber == ActiveSlot )
        break;
      if ( ++v3 >= SlotCount )
        return v4;
    }
    *(_OWORD *)SourceString = *(_OWORD *)a1->Slot[v8].Revision;
    return (unsigned int)ScAnsiToUnicodeString(SourceString, a2);
  }
  return v4;
}
