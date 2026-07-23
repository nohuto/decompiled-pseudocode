/*
 * XREFs of IommuGetConfiguration @ 0x140B71190
 * Callers:
 *     <none>
 * Callees:
 *     IommupGetSystemContext @ 0x1403B09E8 (IommupGetSystemContext.c)
 *     IommuGetLeastMaximumSupportedAsidValue @ 0x1403B0AD4 (IommuGetLeastMaximumSupportedAsidValue.c)
 */

__int64 __fastcall IommuGetConfiguration(__int64 a1, _DWORD *a2, __int64 a3, PVOID **a4)
{
  int LeastMaximumSupportedAsidValue; // eax
  _DWORD *v6; // r11
  unsigned int v7; // r10d
  PVOID *SystemContext; // rax

  *a2 = HalpIommuCount;
  LeastMaximumSupportedAsidValue = IommuGetLeastMaximumSupportedAsidValue();
  *v6 = LeastMaximumSupportedAsidValue;
  SystemContext = IommupGetSystemContext(v7);
  *a4 = SystemContext;
  return SystemContext == 0LL ? 0xC000009A : 0;
}
