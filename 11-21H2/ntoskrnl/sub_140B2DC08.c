/*
 * XREFs of sub_140B2DC08 @ 0x140B2DC08
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

__int64 __fastcall sub_140B2DC08(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  int v6; // eax

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    dword_140D68158 = -1;
    dword_140D069F4 = 0;
    dword_140D069EC = 0;
    byte_140C53445 = 1;
    dword_140D051BC = 0;
    MEMORY[0xFFFFF780000002EC] = 1;
  }
  else
  {
    v1 = dword_140D05040;
    if ( _BitScanReverse((unsigned int *)&v3, dword_140D05040) )
      v1 = 1 << v3;
    dword_140D05040 = v1;
    if ( v1 )
    {
      dword_140D06880 |= 0x80u;
      dword_140D05040 = v1 - 1;
    }
    if ( dword_140C29FC0 )
    {
      v6 = dword_140D06880 | 1;
      dword_140D06880 |= 1u;
      if ( dword_140C1ACA4 )
        dword_140D06880 = v6 | 2;
    }
    if ( dword_140D069F4 )
      dword_140D069EC = 1;
    if ( (dword_140D06880 & 1) != 0 && (qword_140D01450 & 0x400000) == 0 )
    {
      dword_140D68158 = -1;
      dword_140D069EC = 1;
    }
  }
  v4 = dword_140D06880 | 8;
  dword_140D06880 |= 8u;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    dword_140D06880 = v4 | 0x40;
  stru_140C52E20.TargetInfoAsUlong = 275;
  stru_140C52E20.DeferredRoutine = (PKDEFERRED_ROUTINE)sub_140376DF0;
  stru_140C52E20.DeferredContext = 0LL;
  qword_140C50660 = (__int64)&qword_140C50658;
  qword_140C50658 = (__int64)&qword_140C50658;
  qword_140C50650 = -10000000LL * dword_140D051D4;
  stru_140C52E20.DpcData = 0LL;
  stru_140C52E20.ProcessorHistory = 0LL;
  qword_140C4F490 = 0LL;
  qword_140C4F508 = 0LL;
  dword_140C52B6C = 5;
  qword_140C52B80 = 0LL;
  qword_140C53340 = 0LL;
  qword_140C4F110 = 0LL;
  qword_140C4F128 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)sub_140363220(1) << 16;
  qword_140C4F128 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
