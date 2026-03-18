/*
 * XREFs of ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1C0027F88
 * Callers:
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C020CE28 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1C03B9944 (-_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV-$uniq.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, void **a3, __int64 a4)
{
  void *v4; // rbx
  void *v6; // rcx
  ULONG Length; // ebp
  void *v10; // rdi
  NTSTATUS v11; // eax
  int v12; // edi
  void *v13; // rcx
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v6 = *a3;
  *a3 = 0LL;
  Length = 1024;
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  while ( 1 )
  {
    v10 = v4;
    v4 = (void *)operator new[](Length, 0x4D677844u, 256LL, a4);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    if ( !v4 )
      break;
    ResultLength = 0;
    v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v4, Length, &ResultLength);
    Length = ResultLength;
    v12 = v11;
    if ( v11 != -2147483643 && v11 != -1073741789 )
      goto LABEL_8;
  }
  WdLogSingleEntry0(2LL);
  v12 = -1073741801;
LABEL_8:
  if ( v12 >= 0 )
  {
    v13 = *a3;
    *a3 = v4;
    if ( !v13 )
      return (unsigned int)v12;
    goto LABEL_11;
  }
  if ( v4 )
  {
    v13 = v4;
LABEL_11:
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)v12;
}
