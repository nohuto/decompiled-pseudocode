/*
 * XREFs of sub_14038B428 @ 0x14038B428
 * Callers:
 *     sub_14038AA3C @ 0x14038AA3C (sub_14038AA3C.c)
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_1405D03D0 @ 0x1405D03D0 (sub_1405D03D0.c)
 *     sub_1405D0450 @ 0x1405D0450 (sub_1405D0450.c)
 *     sub_1408647A0 @ 0x1408647A0 (sub_1408647A0.c)
 * Callees:
 *     sub_1405D4370 @ 0x1405D4370 (sub_1405D4370.c)
 */

__int64 __fastcall sub_14038B428(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C2207C;
  result = 0LL;
  byte_140C2207C = 0;
  if ( byte_140C2207D )
  {
    byte_140C2207D = 0;
    return sub_1405D4370(a1, (MEMORY[0xFFFFF78000000008] - qword_140C22080) / 0x989680uLL, a3);
  }
  return result;
}
