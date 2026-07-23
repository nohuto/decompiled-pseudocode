/*
 * XREFs of sub_140B268C8 @ 0x140B268C8
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

void sub_140B268C8()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rsi
  UNICODE_STRING *v2; // rdi

  RtlInitUnicodeString(&stru_140D3CE98, L"\\REGISTRY");
  RtlInitUnicodeString(&stru_140D3CD28, L"\\REGISTRY\\MACHINE");
  RtlInitUnicodeString(&stru_140D3D218, L"\\REGISTRY\\MACHINE\\HARDWARE");
  RtlInitUnicodeString(&stru_140D3D228, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION");
  RtlInitUnicodeString(&stru_140D3CD08, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM");
  RtlInitUnicodeString(&stru_140D3D238, L"\\REGISTRY\\MACHINE\\HARDWARE\\DEVICEMAP");
  RtlInitUnicodeString(&stru_140D3CF68, L"\\REGISTRY\\MACHINE\\HARDWARE\\RESOURCEMAP");
  RtlInitUnicodeString(&stru_140D3D3E8, L"\\REGISTRY\\MACHINE\\HARDWARE\\OWNERMAP");
  RtlInitUnicodeString(&stru_140D3CF88, L"\\REGISTRY\\MACHINE\\SYSTEM");
  RtlInitUnicodeString(&stru_140D3CE18, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET");
  RtlInitUnicodeString(&stru_140D3D258, L"\\REGISTRY\\USER");
  RtlInitUnicodeString(&stru_140D3D268, L"\\REGISTRY\\WC");
  RtlInitUnicodeString(&stru_140D3D278, L"\\REGISTRY\\A");
  RtlInitUnicodeString(&stru_140D3CFA8, L"SYSTEM");
  RtlInitUnicodeString(&stru_140D3D408, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM");
  RtlInitUnicodeString(&stru_140D3D3F8, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM\\ROOT");
  RtlInitUnicodeString(&stru_140D3CC80, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES");
  RtlInitUnicodeString(&stru_140D3D418, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT");
  RtlInitUnicodeString(&stru_140D3D428, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\CLASS");
  RtlInitUnicodeString(&stru_140D3CF78, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SAFEBOOT");
  RtlInitUnicodeString(
    &stru_140D3CEC8,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
  RtlInitUnicodeString(&stru_140D3CF98, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\BOOTLOG");
  RtlInitUnicodeString(&stru_140D3D248, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES\\EVENTLOG");
  RtlInitUnicodeString(&stru_140D3CB80, L"SymbolicLinkValue");
  RtlInitUnicodeString(&SearchString, L"CONTROLSET001\\SERVICES\\MPSSVC");
  RtlInitUnicodeString(&stru_140D3D288, L"Registry");
  v0 = (PCWSTR *)off_140A39E10;
  v1 = 42LL;
  v2 = &stru_140D3DB10;
  do
  {
    RtlInitUnicodeString(v2++, *v0++);
    --v1;
  }
  while ( v1 );
}
