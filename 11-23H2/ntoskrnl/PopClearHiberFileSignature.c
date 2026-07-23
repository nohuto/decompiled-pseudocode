/*
 * XREFs of PopClearHiberFileSignature @ 0x14098864C
 * Callers:
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x14041B810 (ZwFsControlFile.c)
 */

void PopClearHiberFileSignature()
{
  struct _IO_STATUS_BLOCK v0; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v1[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v2; // [rsp+68h] [rbp-20h]
  __int64 v3; // [rsp+70h] [rbp-18h]

  v0 = 0LL;
  if ( (PopSimulateHiberBugcheck & 0x200) == 0 && FileObject )
  {
    v1[0] = 0;
    v1[1] = 1;
    v2 = 4096LL;
    v3 = -4097LL;
    if ( ZwFsControlFile(PopHiberInfo, 0LL, 0LL, 0LL, &v0, 0x98208u, v1, 0x18u, 0LL, 0) == 259 )
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
  }
}
