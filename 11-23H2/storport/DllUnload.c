/*
 * XREFs of DllUnload @ 0x1C0065590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0022CC4 @ 0x1C0022CC4 (sub_1C0022CC4.c)
 *     sub_1C0042058 @ 0x1C0042058 (sub_1C0042058.c)
 *     sub_1C00420D4 @ 0x1C00420D4 (sub_1C00420D4.c)
 *     sub_1C0043430 @ 0x1C0043430 (sub_1C0043430.c)
 *     sub_1C0073F38 @ 0x1C0073F38 (sub_1C0073F38.c)
 *     sub_1C00A00D4 @ 0x1C00A00D4 (sub_1C00A00D4.c)
 *     sub_1C00AA6A0 @ 0x1C00AA6A0 (sub_1C00AA6A0.c)
 *     sub_1C00AC434 @ 0x1C00AC434 (sub_1C00AC434.c)
 */

__int64 DllUnload()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  if ( _InterlockedExchangeAdd(&dword_1C0093B68, 0xFFFFFFFF) == 1 )
  {
    sub_1C00AC434();
    sub_1C00420D4();
    ExDeleteResourceLite((PERESOURCE)&stru_1C0093880.Dpc.DpcData);
    sub_1C0042058();
    ExDeleteResourceLite((PERESOURCE)&stru_1C0093880.DeviceExtension);
    if ( qword_1C0093AF0 )
    {
      sub_1C0022CC4((__int64)qword_1C0093AF0);
      ExFreePoolWithTag(qword_1C0093AF0, 0x57526152u);
      qword_1C0093AF0 = 0LL;
    }
    sub_1C00AA6A0();
    sub_1C0043430(v1, v0, v2);
  }
  sub_1C00A00D4();
  return sub_1C0073F38();
}
