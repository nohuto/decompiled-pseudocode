/*
 * XREFs of sub_140643FCC @ 0x140643FCC
 * Callers:
 *     WheaRecoveryBugCheck @ 0x1406435C0 (WheaRecoveryBugCheck.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     sub_14064514C @ 0x14064514C (sub_14064514C.c)
 */

void __fastcall sub_140643FCC(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 104) & 0x20) != 0 )
  {
    v1 = sub_14064514C();
    if ( v1 )
    {
      if ( (*(_BYTE *)v1 & 2) != 0 )
      {
        v2 = *(_QWORD *)(v1 + 16) >> 12;
        HalSetEnvironmentVariableEx(L"UncorrectedBadMemoryPage", (int)&unk_140C0BB08, (__int64)&v2, 8, 7);
      }
    }
  }
}
