/*
 * XREFs of sub_140AADC80 @ 0x140AADC80
 * Callers:
 *     sub_140AAB1AC @ 0x140AAB1AC (sub_140AAB1AC.c)
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 *     sub_140AAE918 @ 0x140AAE918 (sub_140AAE918.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 */

void __fastcall sub_140AADC80(__int64 a1, ULONG a2, ULONG *a3)
{
  dword_140C54918 = 0;
  qword_140C54910 = a1;
  dword_140C54930 = a2;
  stru_140C54920.SizeOfBitMap = a2;
  stru_140C54920.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C54920);
}
