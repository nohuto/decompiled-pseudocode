/*
 * XREFs of sub_14075C8A4 @ 0x14075C8A4
 * Callers:
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_140826C10 @ 0x140826C10 (sub_140826C10.c)
 */

__int64 __fastcall sub_14075C8A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = sub_14075CB14(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Driver", a1, &Handle);
  if ( v5 >= 0 )
    v5 = sub_140826C10(Handle, L"Shims", 2048LL, a4);
  if ( v5 == -1073741772 )
    v5 = -1073741275;
  if ( Handle )
  {
    ZwClose(Handle);
    _InterlockedIncrement(&dword_140C2A1BC);
  }
  return (unsigned int)v5;
}
