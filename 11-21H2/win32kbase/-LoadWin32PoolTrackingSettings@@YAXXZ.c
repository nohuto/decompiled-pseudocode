/*
 * XREFs of ?LoadWin32PoolTrackingSettings@@YAXXZ @ 0x1C00D5710
 * Callers:
 *     ?InitializeWin32PoolTracking@@YAHXZ @ 0x1C005B300 (-InitializeWin32PoolTracking@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void LoadWin32PoolTrackingSettings(void)
{
  unsigned int v0; // ebx
  _DWORD *Pool2; // rdi
  int v2; // eax
  __int64 v3; // rdx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+18h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  if ( gpxsGlobals )
  {
    *((_DWORD *)gpxsGlobals + 9) = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(260LL, ResultLength);
        if ( Pool2 )
        {
          if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength) >= 0
            && Pool2[1] == 3 )
          {
            *((_QWORD *)gpxsGlobals + 5) = ExAllocatePool2(256LL, (unsigned int)Pool2[2]);
            if ( *((_QWORD *)gpxsGlobals + 5) )
            {
              v2 = Pool2[2] >> 2;
              *((_DWORD *)gpxsGlobals + 9) = v2;
              if ( v2 )
              {
                do
                {
                  v3 = v0++;
                  *(_DWORD *)(*((_QWORD *)gpxsGlobals + 5) + 4 * v3) = Pool2[v3 + 3];
                }
                while ( v0 < *((_DWORD *)gpxsGlobals + 9) );
              }
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
      }
      ZwClose(KeyHandle);
    }
  }
}
