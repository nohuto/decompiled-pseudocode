/*
 * XREFs of sub_140643D54 @ 0x140643D54
 * Callers:
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 * Callees:
 *     sub_140643CB4 @ 0x140643CB4 (sub_140643CB4.c)
 */

__int64 __fastcall sub_140643D54(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx

  v2 = sub_140643CB4(a1);
  if ( v2 >= 0 && !*(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a1 + 12) = 2;
  v3 = PshedAttemptErrorRecovery(a1);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    if ( v4 == 2 )
      goto LABEL_9;
  }
  else
  {
    if ( v3 >= 0 )
    {
      *(_DWORD *)(a1 + 12) = 2;
LABEL_9:
      *(_DWORD *)(a1 + 104) |= 1u;
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 12) = 1;
  }
LABEL_10:
  if ( v2 < 0 && v3 >= 0 )
    return (unsigned int)v3;
  return (unsigned int)v2;
}
