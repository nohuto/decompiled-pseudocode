/*
 * XREFs of KeyboardQueryDeviceKey @ 0x1C000FA28
 * Callers:
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000F660 (KeyboardClassGetWaitWakeEnableState.c)
 * Callees:
 *     memmove @ 0x1C0002F40 (memmove.c)
 */

__int64 __fastcall KeyboardQueryDeviceKey(HANDLE KeyHandle, const WCHAR *a2, void *a3, ULONG a4)
{
  unsigned int *Pool2; // rbx
  NTSTATUS v7; // edi
  unsigned int v8; // eax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = a4;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  if ( (unsigned int)ValueName.MaximumLength + 28 < (unsigned int)ValueName.MaximumLength + 24 )
    return 3221225621LL;
  Length = ValueName.MaximumLength + 28;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, Length, 1130652235LL);
  if ( Pool2 )
  {
    v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, Length, &Length);
    if ( v7 >= 0 )
    {
      v8 = Pool2[3];
      if ( v8 > 4 )
        v7 = -1073741789;
      else
        memmove(a3, (char *)Pool2 + Pool2[2], v8);
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
