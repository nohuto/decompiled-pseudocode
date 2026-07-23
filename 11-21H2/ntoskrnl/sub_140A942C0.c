/*
 * XREFs of sub_140A942C0 @ 0x140A942C0
 * Callers:
 *     sub_140A93724 @ 0x140A93724 (sub_140A93724.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     sub_140A94590 @ 0x140A94590 (sub_140A94590.c)
 */

__int64 __fastcall sub_140A942C0(_QWORD *a1)
{
  ULONG v2; // eax
  __int64 result; // rax
  ULONG v4; // eax
  ULONG v5; // eax

  v2 = RtlNumberOfClearBits(&stru_140D57780);
  result = sub_140A94590(a1[4], v2);
  if ( !dword_140C1ACA4 )
  {
    v4 = RtlNumberOfClearBits(&stru_140D57790);
    sub_140A94590(a1[3], v4);
    v5 = RtlNumberOfClearBits(&stru_140D577A0);
    return sub_140A94590(a1[5], v5);
  }
  return result;
}
