/*
 * XREFs of ACPIInitGetPlatformOverrides @ 0x1C00BCB2C
 * Callers:
 *     DriverEntry @ 0x1C00BBAC8 (DriverEntry.c)
 * Callees:
 *     OSOpenHandle @ 0x1C008EB74 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1C00954DC (OSCloseHandle.c)
 *     OSGetRegistryValue @ 0x1C009B014 (OSGetRegistryValue.c)
 *     ACPIIsSystemStartOptionPresent @ 0x1C00BCCA4 (ACPIIsSystemStartOptionPresent.c)
 */

__int64 ACPIInitGetPlatformOverrides()
{
  void *v0; // rbx
  NTSTATUS v1; // eax
  int v2; // edi
  NTSTATUS v3; // eax
  wchar_t *v4; // rsi
  unsigned __int64 v5; // rax
  const wchar_t *v6; // rcx
  unsigned int v8; // eax
  _DWORD *v9; // [rsp+60h] [rbp+38h] BYREF
  HANDLE v10; // [rsp+68h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+48h] BYREF
  PVOID P; // [rsp+78h] [rbp+50h] BYREF

  v0 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  KeyHandle = 0LL;
  P = 0LL;
  if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ACPI", 0LL, (__int64)&KeyHandle) >= 0 )
  {
    v1 = OSGetRegistryValue(KeyHandle, L"PrmSupportOptOut", &v9);
    v0 = v9;
    if ( v1 >= 0 )
    {
      v8 = v9[1];
      if ( v8 )
      {
        if ( *v9 == 4 && v8 >= 4 && v9[2] )
          AcpiOverrideAttributes |= 0x8000000u;
      }
    }
  }
  v2 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control", 0LL, (__int64)&v10);
  if ( v2 >= 0 )
  {
    v3 = OSGetRegistryValue(v10, L"SystemStartOptions", &P);
    v4 = (wchar_t *)P;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v5 = *((unsigned int *)P + 1);
      if ( (_DWORD)v5 )
      {
        if ( *(_DWORD *)P == 1 && (unsigned int)v5 >= 2 )
        {
          v6 = (const wchar_t *)((char *)P + 8);
          *((_WORD *)P + (v5 >> 1) + 3) = 0;
          if ( wcsstr(v6, L"PCIEXPRESSPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x2000u;
          if ( wcsstr(v4 + 4, L"SBOSCEVALPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x4000u;
          if ( (unsigned __int8)ACPIIsSystemStartOptionPresent(v4 + 4) )
            AcpiOverrideAttributes |= 0x10000u;
          if ( (AcpiOverrideAttributes & 0x10000) == 0 )
            AcpiOverrideAttributes &= ~0x40000u;
        }
        else
        {
          v2 = -1073741788;
        }
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( v10 )
    OSCloseHandle(v10);
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)v2;
}
