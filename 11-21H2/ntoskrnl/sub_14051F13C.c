/*
 * XREFs of sub_14051F13C @ 0x14051F13C
 * Callers:
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall sub_14051F13C(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !qword_140C4ABB8 )
  {
    if ( a1 )
    {
      qword_140C4ABB8 = (__int64)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "McMicrocodeOperation");
      return qword_140C4ABB8 == 0 ? 0xC00000BB : 0;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
