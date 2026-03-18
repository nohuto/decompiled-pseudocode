/*
 * XREFs of KiErrata361Present @ 0x140B14410
 * Callers:
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFB010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 KiErrata361Present()
{
  __int64 result; // rax
  unsigned __int64 v1; // kr00_8
  unsigned __int64 v2; // kr08_8

  result = (unsigned int)__SS__;
  v1 = __readeflags();
  __writeeflags(v1 | 0x100);
  __asm { icebp }
  v2 = __readeflags();
  __writeeflags(v2 & 0xFFFFFFFFFFFFFEFFuLL);
  return result;
}
