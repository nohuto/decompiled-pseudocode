/*
 * XREFs of PopInitPlatformSettings @ 0x140B5234C
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopLogSleepDisabled @ 0x140873DBC (PopLogSleepDisabled.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 PopInitPlatformSettings()
{
  NTSTATUS v0; // eax
  NTSTATUS v1; // ebx
  _DWORD *Pool2; // rax
  _BYTE *v3; // rdi
  char v4; // al
  int v5; // eax
  int v7; // edx
  ULONG ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  _DWORD SystemInformation[6]; // [rsp+38h] [rbp-28h] BYREF

  SystemInformation[4] = 0;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  SystemInformation[0] = 1094930505;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1346584902;
  v0 = ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength);
  v1 = v0;
  if ( v0 != -1073741789 )
  {
    v3 = 0LL;
    if ( v0 >= 0 )
      goto LABEL_22;
LABEL_26:
    KeBugCheckEx(0xA0u, 0xEuLL, v1, 0LL, 0LL);
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, ReturnLength, 0x206D654Du);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v1 = -1073741670;
    goto LABEL_26;
  }
  *Pool2 = 1094930505;
  Pool2[1] = 1;
  Pool2[2] = 1346584902;
  Pool2[3] = ReturnLength - 16;
  v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength);
  if ( v1 < 0 )
    goto LABEL_26;
  if ( v3[24] >= 3u )
    PopFirmwarePlatformRole = (unsigned __int8)v3[61];
  if ( (unsigned __int8)off_140C01C70[0]() )
    PopPlatformAoAc = 1;
  if ( PopPlatformRoleOverride != -1 )
    PopFirmwarePlatformRole = PopPlatformRoleOverride;
  if ( PopPlatformAoAcOverride != -1 )
    PopPlatformAoAc = PopPlatformAoAcOverride != 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    v7 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
    if ( (HvlpRootFlags & 0x400) != 0 )
    {
      LOBYTE(v7) = 31;
      if ( (HvlEnlightenments & 0x20000000) != 0 )
        LOBYTE(v7) = 23;
    }
    PopLogSleepDisabled(18, v7, 0LL, 0LL);
  }
  v4 = PopPlatformAoAc;
  if ( PopPlatformAoAc )
  {
    if ( !InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
      goto LABEL_16;
  }
  else
  {
    PopLogSleepDisabled(19, 32, 0LL, 0LL);
  }
  v4 = 0;
  PopPlatformAoAc = 0;
LABEL_16:
  if ( !v4 )
    KiForceIdleDisabled = 1;
  v5 = PopFirmwarePlatformRole;
  if ( (unsigned int)PopFirmwarePlatformRole > 8 )
  {
    v5 = 0;
    PopFirmwarePlatformRole = 0;
  }
  PopPlatformRole = v5;
  v1 = 0;
LABEL_22:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x206D654Du);
  return (unsigned int)v1;
}
