/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0
 * Callers:
 *     sub_14060FDB0 @ 0x14060FDB0 (sub_14060FDB0.c)
 *     IoWMISuggestInstanceName @ 0x1409DBE80 (IoWMISuggestInstanceName.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406C55CC @ 0x1406C55CC (sub_1406C55CC.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 */

NTSTATUS __stdcall IoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  NTSTATUS v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r9
  WCHAR *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( SymbolicLinkName && SymbolicLinkName->Buffer && SymbolicLinkName->Length )
  {
    v6 = sub_140779CA0((__int16 **)&v10, 0LL, &SymbolicLinkName->Length);
    if ( v6 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
      v6 = sub_140784B14(
             *(__int64 *)&qword_140D00AC0,
             v10,
             0x32u,
             v8,
             DesiredAccess,
             1,
             (__int64)DeviceInterfaceRegKey,
             0LL);
      if ( v6 >= 0 && DeviceInterfaceRegKey )
        sub_1406C55CC(*DeviceInterfaceRegKey);
      ExReleaseResourceLite(&stru_140C462A0);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    v6 = -1073741811;
  }
  sub_14077BAB8(v10, (__int64)SymbolicLinkName);
  return v6;
}
