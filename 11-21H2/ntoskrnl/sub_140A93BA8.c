/*
 * XREFs of sub_140A93BA8 @ 0x140A93BA8
 * Callers:
 *     sub_140A93A60 @ 0x140A93A60 (sub_140A93A60.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     sub_140A93E84 @ 0x140A93E84 (sub_140A93E84.c)
 */

__int64 __fastcall sub_140A93BA8(_QWORD *a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rbx
  ULONG v6; // eax
  ULONG v7; // eax
  ULONG v8; // eax

  v3 = qword_140C1ACB0;
  v6 = RtlNumberOfClearBits(&stru_140D57780);
  sub_140A93E84(a1[4], v6, v3, a3);
  v7 = RtlNumberOfClearBits(&stru_140D57790);
  sub_140A93E84(a1[3], v7, v3, a3);
  v8 = RtlNumberOfClearBits(&stru_140D577A0);
  return sub_140A93E84(a1[5], v8, v3, a3);
}
