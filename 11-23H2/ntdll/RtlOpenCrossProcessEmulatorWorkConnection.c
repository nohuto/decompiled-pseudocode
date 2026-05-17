/*
 * XREFs of RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWow64GetSharedInfoProcess @ 0x180001DD0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlIsCurrentProcess @ 0x18006C250 (RtlIsCurrentProcess.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 */

int __fastcall RtlOpenCrossProcessEmulatorWorkConnection(void *a1, HANDLE *a2, _QWORD *a3)
{
  int result; // eax
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v8[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp-18h]
  char v10; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  result = RtlIsCurrentProcess();
  if ( !(_BYTE)result )
  {
    result = RtlWow64GetSharedInfoProcess(a1, &v10, (__int64)v8);
    if ( result >= 0 && v10 && (v8[4] & 2) != 0 && v9 )
    {
      Handle = 0LL;
      v12 = 0LL;
      v7 = 0LL;
      result = ZwDuplicateObject(a1, v9, -1LL, &Handle, 0, 0);
      if ( result < 0
        || (result = ZwMapViewOfSection(Handle, -1LL, &v12, 0LL, 0LL, 0LL, &v7, 2, 0x100000, 4), result < 0) )
      {
        if ( v12 )
          result = NtUnmapViewOfSection(-1LL);
        if ( Handle )
          return NtClose(Handle);
      }
      else
      {
        *a2 = Handle;
        result = v12;
        *a3 = v12;
      }
    }
  }
  return result;
}
