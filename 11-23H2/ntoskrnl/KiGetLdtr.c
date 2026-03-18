/*
 * XREFs of KiGetLdtr @ 0x140B133E0
 * Callers:
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
