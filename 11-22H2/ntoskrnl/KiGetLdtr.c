/*
 * XREFs of KiGetLdtr @ 0x140B143E0
 * Callers:
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFB010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
