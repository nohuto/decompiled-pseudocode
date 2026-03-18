/*
 * XREFs of KitpInitAitSampleRate @ 0x140B721AC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     strstr @ 0x1403D91D0 (strstr.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwSetSystemInformation @ 0x14041E480 (ZwSetSystemInformation.c)
 *     KitpOpenRegKey @ 0x140861520 (KitpOpenRegKey.c)
 *     KitpReadUlongFromKey @ 0x140861574 (KitpReadUlongFromKey.c)
 */

NTSTATUS __fastcall KitpInitAitSampleRate(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  __int64 v3; // rdx
  NTSTATUS v4; // eax
  int v5; // ecx
  NTSTATUS result; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  Handle = 0LL;
  if ( a1 )
  {
    v2 = *(const char **)(a1 + 216);
    if ( (!v2 || !strstr(v2, "SAFEBOOT:")) && KitpOpenRegKey((__int64)v2, a2, &Handle) >= 0 )
    {
      v4 = KitpReadUlongFromKey(Handle, v3, &v7);
      v5 = v7;
      if ( v4 < 0 )
        v5 = 0;
      v7 = v5;
    }
  }
  result = ZwSetSystemInformation(111LL, (__int64)&v7);
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
