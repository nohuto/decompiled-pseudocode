/*
 * XREFs of sub_1402F3248 @ 0x1402F3248
 * Callers:
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403AD92C @ 0x1403AD92C (sub_1403AD92C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402F3248(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 < a1 + (unsigned __int64)DesiredTime
    && (!qword_140C2B7F8 || a2 < qword_140C2B7F8 && qword_140C2B7F8 - a2 > (unsigned int)dword_140D06960) )
  {
    return 1;
  }
  return v2;
}
