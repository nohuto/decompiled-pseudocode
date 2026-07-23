/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140673AD0
 * Callers:
 *     sub_140205B1C @ 0x140205B1C (sub_140205B1C.c)
 *     sub_1403761D8 @ 0x1403761D8 (sub_1403761D8.c)
 *     PsCheckProcessFileSigningLevel @ 0x14065FD10 (PsCheckProcessFileSigningLevel.c)
 *     sub_1406B4F98 @ 0x1406B4F98 (sub_1406B4F98.c)
 *     sub_1406F80E4 @ 0x1406F80E4 (sub_1406F80E4.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax

  v2 = a1 + 139;
  if ( sub_140347810(a1 + 139) )
  {
    Count = a1[163].Count;
    if ( Count )
    {
      v6 = sub_140287970(Count);
      v7 = sub_14027A794(v6, 1953261124LL);
      sub_1402AD030(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    sub_1402AD030(v2);
  }
  return 3221225473LL;
}
