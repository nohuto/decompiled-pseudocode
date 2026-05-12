/*
 * XREFs of PortMapBuildLunEntry @ 0x1C00205DC
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C00204CC (RaidUnitRegisterInterfaces.c)
 * Callees:
 *     PortRegistryCreateKeyEx @ 0x1C001D758 (PortRegistryCreateKeyEx.c)
 *     PortRegistrySetValueKey @ 0x1C00206E8 (PortRegistrySetValueKey.c)
 */

__int64 __fastcall PortMapBuildLunEntry(
        void *a1,
        int a2,
        __int64 a3,
        _WORD *a4,
        __int64 a5,
        ULONG a6,
        __int64 a7,
        int a8,
        HANDLE Handle)
{
  __int64 result; // rax

  Handle = 0LL;
  result = PortRegistryCreateKeyEx(a1, 1u, &Handle, L"Logical Unit Id %d", a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
      PortRegistrySetValueKey(Handle, 0x24u);
    if ( a4 && *a4 )
      PortRegistrySetValueKey(Handle, (unsigned __int16)*a4);
    if ( a3 )
      PortRegistrySetValueKey(Handle, 0x1Cu);
    if ( a7 )
      PortRegistrySetValueKey(Handle, 2 * a8 + 2);
    if ( a5 )
      PortRegistrySetValueKey(Handle, a6);
    ZwClose(Handle);
    return 0LL;
  }
  return result;
}
