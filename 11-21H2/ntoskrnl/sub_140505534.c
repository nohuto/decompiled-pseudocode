/*
 * XREFs of sub_140505534 @ 0x140505534
 * Callers:
 *     sub_140512C04 @ 0x140512C04 (sub_140512C04.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140503590 @ 0x140503590 (sub_140503590.c)
 *     sub_140518870 @ 0x140518870 (sub_140518870.c)
 */

__int64 __fastcall sub_140505534(__int64 a1)
{
  __int64 v1; // rcx
  ULONG v2; // r8d
  __int64 v3; // r9

  if ( (unsigned int)sub_14023A8D0(a1) == 2 )
    return sub_140518870(v1, v3);
  else
    return sub_140503590(v1, v3, v2);
}
