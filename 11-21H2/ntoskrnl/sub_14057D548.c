/*
 * XREFs of sub_14057D548 @ 0x14057D548
 * Callers:
 *     sub_1409646B4 @ 0x1409646B4 (sub_1409646B4.c)
 * Callees:
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 *     sub_14075C9D4 @ 0x14075C9D4 (sub_14075C9D4.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 */

__int64 __fastcall sub_14057D548(__int64 a1)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  UNICODE_STRING DriverServiceName; // [rsp+20h] [rbp-18h] BYREF

  DriverServiceName = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221225473LL;
  v3 = ((__int64 (__fastcall *)(UNICODE_STRING *, const wchar_t *, __int64, _QWORD))sub_14075C9D4)(
         &DriverServiceName,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\",
         v2,
         0LL);
  if ( v3 >= 0 )
  {
    v3 = ZwLoadDriver(&DriverServiceName);
    if ( v3 == -1073741554 )
      v3 = 0;
  }
  sub_14075CDC4(&DriverServiceName);
  return (unsigned int)v3;
}
