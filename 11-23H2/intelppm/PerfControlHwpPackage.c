/*
 * XREFs of PerfControlHwpPackage @ 0x1C0004CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerfControlHwpPackage(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 138) || a4 )
  {
    v4 = __readmsr(0x772u);
    *(_BYTE *)(a1 + 138) = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 192);
  }
  result = *(_QWORD *)(a1 + 184) & *a2 | v4 & ~*(_QWORD *)(a1 + 184);
  __writemsr(0x772u, result);
  *(_QWORD *)(a1 + 192) = result;
  return result;
}
