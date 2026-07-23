/*
 * XREFs of sub_14055A628 @ 0x14055A628
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 *     sub_14093B5F8 @ 0x14093B5F8 (sub_14093B5F8.c)
 *     sub_140A65D84 @ 0x140A65D84 (sub_140A65D84.c)
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 *     sub_140A66B0C @ 0x140A66B0C (sub_140A66B0C.c)
 *     sub_140A66DB4 @ 0x140A66DB4 (sub_140A66DB4.c)
 *     sub_140A66EB4 @ 0x140A66EB4 (sub_140A66EB4.c)
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 *     sub_140A67608 @ 0x140A67608 (sub_140A67608.c)
 *     sub_140A678E0 @ 0x140A678E0 (sub_140A678E0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall sub_14055A628(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / stru_140C46CE8.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140D018B8 - qword_140D018B0;
  qword_140D018B8 = result;
  qword_140D018B0 = v2;
  return result;
}
