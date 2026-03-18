/*
 * XREFs of ?ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@Z @ 0x1C01A0440
 * Callers:
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C01A0464 (RIMGetExtendedPointerDeviceProperty.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C01A0910 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateProperty(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(int *)a2 >= 7 || *(_DWORD *)a2 <= 6u && *((_DWORD *)a1 + 6) != 7 )
    return 3221225485LL;
  return result;
}
