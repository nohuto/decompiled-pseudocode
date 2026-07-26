/*
 * XREFs of ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C012BED8
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0118E58 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002ECA4 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

char __fastcall ndisIsNetSetupV1Interface(const struct _UNICODE_STRING *a1)
{
  HANDLE Handle[2]; // [rsp+20h] [rbp-228h] BYREF
  wchar_t v4[256]; // [rsp+30h] [rbp-218h] BYREF

  memset(v4, 0, 0x100uLL);
  if ( RtlStringCchPrintfW(
         v4,
         0x100uLL,
         (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup\\Interfaces\\%wZ",
         a1) < 0 )
    return 0;
  Handle[0] = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)Handle, 1u, v4, 0LL) < 0 )
  {
    KRegKey::~KRegKey((KRegKey *)Handle);
    return 0;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 1;
}
