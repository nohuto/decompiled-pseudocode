/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0007B40
 * Callers:
 *     ?PmBuildInstanceId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FAA4 (-PmBuildInstanceId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001FBE4 (-PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmLogError@@YAXPEAU_DEVICE_EXTENSION@@0J@Z @ 0x1C0027074 (-PmLogError@@YAXPEAU_DEVICE_EXTENSION@@0J@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0004188 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
