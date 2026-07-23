/*
 * XREFs of sub_1405514D0 @ 0x1405514D0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 */

__int64 __fastcall sub_1405514D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = qword_140D01878;
  if ( a1 )
    v1 = a1;
  qword_140D01878 = v1;
  result = sub_1403A78F0(0, (__int64)sub_140551660);
  if ( dword_140CFCEE0 != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
  return result;
}
