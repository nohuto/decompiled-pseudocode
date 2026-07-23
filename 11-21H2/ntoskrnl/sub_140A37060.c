/*
 * XREFs of sub_140A37060 @ 0x140A37060
 * Callers:
 *     sub_140A09E34 @ 0x140A09E34 (sub_140A09E34.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140A37128 @ 0x140A37128 (sub_140A37128.c)
 */

__int64 __fastcall sub_140A37060(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = sub_140A37128();
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
    v3 = v4;
    if ( v4 < 0 )
      DbgPrintEx(
        5u,
        0,
        "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelSubmitReport failed, status 0x%X\n",
        (unsigned int)v4);
  }
  else
  {
    DbgPrintEx(5u, 0, "LKMDTEL: LkmdTelSubmitReport: LkmdTelpWriteDumpFile failed, status 0x%X\n", (unsigned int)v2);
  }
  if ( *(_QWORD *)(a1 + 96) )
  {
    if ( v3 < 0 )
    {
      v5 = WerLiveKernelCancelReport();
      if ( v5 < 0 )
        DbgPrintEx(5u, 1u, "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelCancelReport failed, status 0x%X\n", v5);
    }
    v6 = WerLiveKernelCloseHandle(*(_QWORD *)(a1 + 96));
    if ( v6 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelCloseHandle failed, status 0x%X\n", v6);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return (unsigned int)v3;
}
