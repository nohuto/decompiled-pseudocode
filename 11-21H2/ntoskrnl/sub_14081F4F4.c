/*
 * XREFs of sub_14081F4F4 @ 0x14081F4F4
 * Callers:
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F468 @ 0x14081F468 (sub_14081F468.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 */

NTSTATUS __fastcall sub_14081F4F4(UNICODE_STRING *a1, void *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  int v6; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  Handle = 0LL;
  result = sub_14067B470(a1, 0x20019u, &Handle, 0LL, 0);
  if ( result >= 0 )
  {
    v6 = sub_14077FC64(Handle, L"OriginalServiceName", &v8, a2, a3);
    if ( v6 >= 0 && (v8 != 1 || *a3 <= 2) )
      v6 = -1073741762;
    ZwClose(Handle);
    return v6;
  }
  return result;
}
