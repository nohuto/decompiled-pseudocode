/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01CFC14
 * Callers:
 *     CheckForLegacyTouchPad @ 0x1C011A940 (CheckForLegacyTouchPad.c)
 * Callees:
 *     <none>
 */

void __fastcall CheckLegacyPadControlledStatus(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2)
{
  __int64 v3; // rbx
  char v4; // al
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+18h] BYREF
  int v8; // [rsp+8Ch] [rbp+1Ch]
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  v8 = HIDWORD(a2);
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyControlled");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)((char *)a1 + 888),
           KeyValuePartialInformation,
           0LL,
           0,
           &ResultLength) != -1073741772 )
    {
      if ( ResultLength )
      {
        v3 = Win32AllocPoolZInit(ResultLength, 2019914581LL);
        if ( v3 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 (PUNICODE_STRING)((char *)a1 + 888),
                 KeyValuePartialInformation,
                 (PVOID)v3,
                 ResultLength,
                 &ResultLength) >= 0
            && *(_DWORD *)(v3 + 4) == 4 )
          {
            v4 = *(_BYTE *)(v3 + 12);
            if ( (v4 & 1) != 0 )
              gTouchPadParameters[1] |= v4 & 7;
          }
          Win32FreePool(v3);
        }
      }
    }
    ZwClose(KeyHandle);
  }
}
