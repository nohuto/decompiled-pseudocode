/*
 * XREFs of sub_140838FBC @ 0x140838FBC
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1408391E8 (ArbAddMmConfigRangeAsBootReserved.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     sub_14083A5A0 @ 0x14083A5A0 (sub_14083A5A0.c)
 *     sub_14083A794 @ 0x14083A794 (sub_14083A794.c)
 */

__int64 __fastcall sub_140838FBC(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_140C45BB8 = (__int64)&sub_14083C7F0;
  qword_140C45BC0 = (__int64)sub_1407F4E60;
  qword_140C45BC8 = (__int64)sub_140948130;
  qword_140C45BD0 = (__int64)sub_14083C760;
  qword_140C45C38 = (__int64)sub_14083BB70;
  qword_140C45C08 = (__int64)sub_140948260;
  result = sub_14083A794((unsigned int)&unk_140C45B40, a2, 3, (unsigned int)L"RootMemory");
  if ( (int)result >= 0 )
  {
    result = RtlAddRange(qword_140C45B68, 0, 4095, 0, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = sub_14083A5A0(&unk_140C45B40, qword_140C45B68);
      if ( (int)result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved(&unk_140C45B40, qword_140C45B68);
    }
  }
  return result;
}
